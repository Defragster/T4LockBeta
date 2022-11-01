// https://forum.pjrc.com/threads/33443-How-to-display-free-ram
#include <MemoryHexDump.h>  // https://github.com/KurtE/MemoryHexDump
// Reserve the HAB memory, so USB buffers don't overwrite logged HAB events
__attribute__ ((section(".hab_log"), used)) volatile uint8_t HAB_logfile[8192];

#include "LittleFS.h"

/* NOTES on LittleFS and Integrity testa
 - Sketches are a Media specific subset of tests done during development
 - When the Media is properly connected, it allows repeated FS file access to fill and verify function
 - The goal then was to repeatedly Create files and then Add to the file, or Delete the file
 - This allowed verifying File and Directory data integrtty as the Media was filled and reused as the data moved
 - Other than for Media and device testing - the code provides examples of support for the commands shown.
 - It will also provide a rough estimate of data I/O speed for the Media at hand
 - There is a Case Sensitive command set active when run displayed on start or when '?' is entered
 - For the primary looping enter number 1-9, h, or k and 'c' for continuous. A running count will stop with '0'
 - 'd' for directory will walk the directory and verify against the expected number of files added/deleted
 - Many commands were added as LittleFS developed, early work has lots of verbose settings now TOGGLED off for speed
 -
 - Each named sketch works on a specific Media type as presented
 - there are various commands provided to demonstrate usage
 - All .size() functions return a 64 bit uint64_t - take care when printing
*/

// NOTE: This option is only available on the Teensy 4.0, Teensy 4.1 and Teensy Micromod boards.

#define PROG_FLASH_SIZE 1024 * 1024 * 1.45 // Specify size to use of onboard Teensy Program Flash chip
// This creates a LittleFS drive in Teensy PCB FLash.
// This will persist until a new UPLOAD - Bootloader may change after TD 1.54 to prevent reformat.
LittleFS_Program myfs;
char szDiskMem[] = "PRO_DISK";

// Adjust these for amount of disk space used in iterations
#define MAXNUM 5  // Number of files : ALPHA A-Z is MAX of 26, less for fewer files
#define NUMDIRS 2  // Number of Directories to use 0 is Rootonly
#define BIGADD 2024 // bytes added each pass - bigger will quickly consume more space
#define SUBADD 512  // bytes added each pass (*times file number)
#define MAXFILL 2048 // 66000 // ZERO to disable :: Prevent iterations from over filling - require this much free

// These can likely be left unchanged
#define MYBLKSIZE 2048 // 2048
#define SLACK_SPACE 40960 // allow for overhead slack space :: WORKS on FLASH {some need more with small alloc units}
uint32_t DELSTART = 3; // originally was 3 + higher bias more to writes and larger files - lower odd
#define DELDELAY 0  // delay before DEL files : delayMicroseconds
#define ADDDELAY 0  // delay on ADD FILE : delayMicroseconds

// Various Globals
const uint32_t lowOffset = 'a' - 'A';
const uint32_t lowShift = 13;
uint32_t errsLFS = 0, warnLFS = 0; // Track warnings or Errors
uint32_t lCnt = 0, LoopCnt = 0; // loop counters
uint64_t rdCnt = 0, wrCnt = 0; // Track Bytes Read and Written
int filecount = 0;
int loopLimit = 0; // -1 continuous, otherwise # to count down to 0
bool pauseDir = false;  // Start Pause on each off
bool showDir =  false;  // false Start Dir on each off
bool bDirVerify =  false;  // false Start Dir on each off
bool bWriteVerify = true;  // Verify on Write Toggle
bool bAutoFormat =  false;  // false Auto formatUnused() off
bool bCheckFormat =  false;  // false CheckFormat
bool bCheckUsed =  false;  // false CheckUsed
uint32_t res = 0; // for formatUnused
File file3; // Single FILE used for all functions

char serNum[18];
void t4_serialnumber(char * serNum )
{
  char buf[11];
  uint32_t i, num;

  num = HW_OCOTP_MAC0 & 0xFFFFFF;
  // add extra zero to work around OS-X CDC-ACM driver bug
  if (num < 10000000) num = num * 10;
  ultoa(num, buf, 10);
  for (i = 0; i < 10; i++) {
    char c = buf[i];
    if (!c) break;
    serNum[i] = c;
  }
  serNum[i] = 0;
}

void setup() {
  HAB_logfile[sizeof(HAB_logfile) - 1]; // do not delete this line!
  t4_serialnumber( serNum );
  setup1();
  while (!Serial) ; // wait
  Serial.println("\n" __FILE__ " " __DATE__ " " __TIME__);
  Serial.println( serNum );
  Serial.println("LittleFS Test : File Integrity"); delay(5);

  if (!myfs.begin(PROG_FLASH_SIZE)) {
    Serial.printf("Error starting %s\n", szDiskMem);
    while ( 1 );
  }

  filecount = printDirectoryFilecount( myfs.open("/") );  // Set base value of filecount for disk
  printDirectory();
  parseCmd( '?' );

  makeRootDirs();
  checkInput( 1 );
  filecount = printDirectoryFilecount( myfs.open("/") );  // Set base value of filecount for disk
  printDirectory();
}

void loop() {
  char szDir[16];
  LoopCnt++;
  uint32_t chStep;
  loop1();
  if ( loopLimit != 0 ) {
    for ( uint32_t ii = 0; ii <= NUMDIRS && ( loopLimit != 0 ); ii++ )
    {
      if ( ii == 0 )
        sprintf( szDir, "/" );
      else
        sprintf( szDir, "/%lu_dir", ii );
      chStep = fileCycle(szDir);
      if ( bAutoFormat && !(lCnt % 5) ) res = loopAutoFormat( 20, res );
      while ( chStep != fileCycle(szDir) && ( loopLimit != 0 ) ) {
        if ( bAutoFormat && !(lCnt % 5) ) res = loopAutoFormat( 12, res ); // how often and how many depends on media and sizes
        checkInput( 0 ); // user input can 0 loopLimit
      }
    }
    checkInput( 0 );
    if ( loopLimit > 0 ) // -1 means continuous
      loopLimit--;
  }
  else
    checkInput( 1 );
}




uint32_t *ptrFreeITCM;  // Set to Usable ITCM free RAM
uint32_t  sizeofFreeITCM; // sizeof free RAM in uint32_t units.
extern unsigned long _stextload;
extern char _stext[], _etext[], _sbss[], _ebss[], _sdata[], _edata[],
       _estack[], _heap_start[], _heap_end[], _itcm_block_count[], *__brkval;
float myTemp;
void setup1() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  while (!Serial);
  if ( CrashReport) Serial.print( CrashReport);
  Serial.println("\n" __FILE__ " " __DATE__ " " __TIME__);
  if ( CrashReport ) Serial.print ( CrashReport );
  myTemp = tempmonGetTemp();
  Serial.printf( "\n\tdeg  C=%f\t F_CPU=%u\n" , myTemp, F_CPU_ACTUAL );
  memInfo();
  getFreeITCM();

  extern const uint32_t hab_csf[768]; // placeholder for HAB signature
  Serial.println();
  //dumpRam(Serial, 0x60000000 + ptrFreeITCM - 1024, 1024);
  //  Serial.println((uint32_t)&_stextload + (uint32_t)&_etext, HEX);
  MemoryHexDump(Serial, hab_csf , 128, true, "---\thab_csf\n");
  MemoryHexDump(Serial, ptrFreeITCM - 1024, 128, true, "---\tITCM used\n");
  MemoryHexDump(Serial, ptrFreeITCM, sizeofFreeITCM * sizeof(uint32_t), true, "---\tITCM filler to DTCM\t test 3 \n");
  MemoryHexDump(Serial, (uint8_t *)0, 128, true, " ITCM Start: \n");

  isEncrypt();
}

uint32_t someTime = millis();
void loop1() {
  float testTemp = tempmonGetTemp() - myTemp;
  if ( (millis() - someTime > 1000 ) && (1.0 < testTemp || -1.0 > testTemp) ) {
    someTime = millis();
    myTemp = tempmonGetTemp();
    Serial.printf( "\tdeg  C=%f\n" , myTemp );
  }

}


// #define printf Serial.printf

void memInfo () {
  constexpr auto RAM_BASE   = 0x2020'0000;
                              constexpr auto RAM_SIZE   = 512 << 10;
                              constexpr auto FLASH_BASE = 0x6000'0000;
#if ARDUINO_TEENSY40
  constexpr auto FLASH_SIZE = 2 << 20;
#elif ARDUINO_TEENSY41
  constexpr auto FLASH_SIZE = 8 << 20;
#endif

  // note: these values are defined by the linker, they are not valid memory
  // locations in all cases - by defining them as arrays, the C++ compiler
  // will use the address of these definitions - it's a big hack, but there's
  // really no clean way to get at linker-defined symbols from the .ld file

  auto sp = (char*) __builtin_frame_address(0);

  Serial.printf("_stext        %08x\n",      _stext);
  Serial.printf("_etext        %08x +%db\n", _etext, _etext - _stext);
  Serial.printf("_sdata        %08x\n",      _sdata);
  Serial.printf("_edata        %08x +%db\n", _edata, _edata - _sdata);
  Serial.printf("_sbss         %08x\n",      _sbss);
  Serial.printf("_ebss         %08x +%db\n", _ebss, _ebss - _sbss);
  Serial.printf("curr stack    %08x +%db\n", sp, sp - _ebss);
  Serial.printf("_estack       %08x +%db\n", _estack, _estack - sp);
  Serial.printf("_heap_start   %08x\n",      _heap_start);
  Serial.printf("__brkval      %08x +%db\n", __brkval, __brkval - _heap_start);
  Serial.printf("_heap_end     %08x +%db\n", _heap_end, _heap_end - __brkval);
#if ARDUINO_TEENSY41
  extern char _extram_start[], _extram_end[], *__brkval;
  Serial.printf("_extram_start %08x\n",      _extram_start);
  Serial.printf("_extram_end   %08x +%db\n", _extram_end,
                _extram_end - _extram_start);
#endif
  Serial.printf("\n");

  Serial.printf("<ITCM>  %08x .. %08x\n",
                _stext, _stext + ((int) _itcm_block_count << 15) - 1);
  Serial.printf("<DTCM>  %08x .. %08x\n",
                _sdata, _estack - 1);
  Serial.printf("<RAM>   %08x .. %08x\n",
                RAM_BASE, RAM_BASE + RAM_SIZE - 1);
  Serial.printf("<FLASH> %08x .. %08x\n",
                FLASH_BASE, FLASH_BASE + FLASH_SIZE - 1);
#if ARDUINO_TEENSY41
  extern uint8_t external_psram_size;
  if (external_psram_size > 0)
    Serial.printf("<PSRAM> %08x .. %08x\n",
                  _extram_start, _extram_start + (external_psram_size << 20) - 1);
#endif
  Serial.printf("\n");

  auto stack = sp - _ebss;
  Serial.printf("avail STACK % 8d b % 5d kb\t<<RAM1\n", stack, stack >> 10);

  auto heap = _heap_end - __brkval;
  Serial.printf("avail HEAP  % 8d b % 5d kb\t<<RAM2\n", heap, heap >> 10);

#if ARDUINO_TEENSY41
  auto psram = _extram_start + (external_psram_size << 20) - _extram_end;
  Serial.printf("avail PSRAM % 8d b % 5d kb\n", psram, psram >> 10);
#endif
}


uint32_t  SizeLeft_etext;
FLASHMEM
void   getFreeITCM() { // end of CODE ITCM, skip full 32 bits
  Serial.println("\n\n++++++++++++++++++++++");
  SizeLeft_etext = (32 * 1024) - (((uint32_t)&_etext - (uint32_t)&_stext) % (32 * 1024));
  sizeofFreeITCM = SizeLeft_etext - 4;
  sizeofFreeITCM /= sizeof(ptrFreeITCM[0]);
  ptrFreeITCM = (uint32_t *) ( (uint32_t)&_stext + (uint32_t)&_etext + 4 );
  Serial.printf( "Size of Free ITCM in Bytes = % u\n", sizeofFreeITCM * sizeof(ptrFreeITCM[0]) );
  Serial.printf( "Start of Free ITCM = % u [ % X] \n", ptrFreeITCM, ptrFreeITCM);
  Serial.printf( "End of Free ITCM = % u [ % X] \n", ptrFreeITCM + sizeofFreeITCM, ptrFreeITCM + sizeofFreeITCM);
  for ( uint ii = 0; ii < sizeofFreeITCM; ii++) ptrFreeITCM[ii] = 1;
  uint jj = 0;
  for ( uint ii = 0; ii < sizeofFreeITCM; ii++) jj += ptrFreeITCM[ii];
  Serial.printf( "ITCM DWORD cnt = % u [#bytes=%u] \n", jj, jj * 4);
}

// https://forum.pjrc.com/threads/33443-How-to-display-free-ram?p=275013&viewfull=1#post275013
extern char *__brkval;

int freeram() {
  return _heap_end - __brkval;
}

PROGMEM char title_text[] = "Verify secure code is running properly";

FLASHMEM void title_function() {
  Serial.println( title_text );
  Serial.println();
}

//extern "C" uint32_t _sdata, _edata, _sdataload; /* special linker symbols */
extern "C" uint32_t _sdataload; /* special linker symbols */
extern const uint32_t hab_csf[]; // placeholder for HAB signature

int isEncrypt() {
  int ok = 0;
  title_function();

  if ((IOMUXC_GPR_GPR11 & 0x100) == 0x100) {
    Serial.println("Pass: Bus Encryption Engine is active");
  } else {
    Serial.println("Fail: Bus Encryption Engine is not active");
    ok--;
  }

  uint32_t begin_address = IOMUXC_GPR_GPR18 & ~0x3FF;
  if (begin_address == 0x60001400) {
    Serial.println("Pass: Encryption region starts at proper address");
  } else {
    Serial.println("Fail: Encryption region starts at wrong address");
    ok--;
  }

  uint32_t end_address = IOMUXC_GPR_GPR19 & ~0x3FF;
  uint32_t data_end = (uint32_t)&_sdataload + (uint32_t)&_edata - (uint32_t)&_sdata;
  if (data_end <= end_address) {
    Serial.println("Pass: Program data is entirely within encrypted region");
  } else {
    Serial.println("Fail: Program data is not within encrypted region");
    ok--;
  }

  uint32_t title_address = ((uint32_t)&title_function) & ~1;
  if (title_address >= begin_address && title_address < end_address) {
    Serial.println("Pass: title_function() is within encrypted region");
  } else {
    Serial.println("Fail: title_function() is not in encrypted region");
    ok--;
  }

  if ((uint32_t)title_text >= begin_address && (uint32_t)title_text < end_address) {
    Serial.println("Pass: title_text[] is within encrypted region");
  } else {
    Serial.println("Fail: title_text[] is not in encrypted region");
    ok--;
  }
  uint32_t hab_PJRC = 0x403000D4; // https://forum.pjrc.com/threads/67989-Teensyduino-1-55-Beta-1?p=286356&viewfull=1#post286356
  if ( hab_PJRC == hab_csf[0] ) {
    Serial.println("Pass: csf as Expected");
    strcat( serNum, " ENC" );
  } else {
    Serial.println("Fail: csf not as Expected");
    strcat( serNum, " nor" );
    ok--;
  }
  const uint32_t hab_version = (*(uint32_t (**)())0x00200330)();
  const uint32_t hab_status = (*(int (**)(int *, int *))0x00200324)(NULL, NULL);
  if (hab_version == 0x40307) {
    Serial.println("NOTE: hab_version == 0x40307");
  } else {
    Serial.println("NOTE: hab_version NOT == 0x40307");
    ok--;
  }
  if (hab_status == 0xF0) {
    Serial.println("NOTE: hab_status == 0xF0");
  } else {
    Serial.println("NOTE: hab_status NOT == 0xF0");
    ok--;
  }
  if ((HW_OCOTP_CFG5 & 0x04C00002) == 0x04C00002) {
    Serial.print("Secure mode IS set :: Fuses == 0x");
    strcat( serNum, " SM:" );
  } else {
    Serial.print("Secure mode NOT SET :: Fuses == 0x");
    strcat( serNum, " ns:" );
    ok--;
  }
  Serial.println( HW_OCOTP_CFG5, HEX );

  Serial.println();
  if (0 == ok) Serial.println("All Tests Passed.  :-)");
  else printf(" %d Tests failed.  :-(", -ok);
  return ok;
}
