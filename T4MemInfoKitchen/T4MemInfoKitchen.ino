
// Reserve the HAB memory, so USB buffers don't overwrite logged HAB events
__attribute__ ((section(".hab_log"), used)) volatile uint8_t HAB_logfile[8192];

// https://forum.pjrc.com/threads/33443-How-to-display-free-ram
#include <MemoryHexDump.h>  // https://github.com/KurtE/MemoryHexDump
long time_now;

char serNum[18];
void t4_serialnumber(char * serNum )
{
  char buf[11];
  uint32_t i, num;
  HAB_logfile[sizeof(HAB_logfile) - 1]; // do not delete this line!

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

uint32_t *ptrFreeITCM;  // Set to Usable ITCM free RAM
uint32_t  sizeofFreeITCM; // sizeof free RAM in uint32_t units.
extern unsigned long _stextload;
extern char _stext[], _etext[], _sbss[], _ebss[], _sdata[], _edata[],
       _estack[], _heap_start[], _heap_end[], _itcm_block_count[], *__brkval;
float myTemp;
void setup() {
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

  extern const uint32_t hab_csf[]; // placeholder for HAB signature
  Serial.println();
  //dumpRam(Serial, 0x60000000 + ptrFreeITCM - 1024, 1024);
  //  Serial.println((uint32_t)&_stextload + (uint32_t)&_etext, HEX);
  MemoryHexDump(Serial, hab_csf , 128, true, "---\thab_csf\n");
  MemoryHexDump(Serial, ptrFreeITCM - 1024, 128, true, "---\tITCM used\n");
  MemoryHexDump(Serial, ptrFreeITCM, sizeofFreeITCM * sizeof(uint32_t), true, "---\tITCM filler to DTCM\t test 3 \n");
  MemoryHexDump(Serial, (uint8_t *)0, 128, true, " ITCM Start: \n");

  t4_serialnumber( serNum );
  isEncrypt();
  Serial.println( serNum );
  time_now = millis();

}


void loop() {
  //float testTemp = tempmonGetTemp() - myTemp;
  Serial.print((millis() - time_now) * 0.00001667, 4); Serial.print(", ");
  Serial.println(tempmonGetTemp(), 2);
  delay(500);
  if ( !Serial.available() ) {
    delay(5000);
  }
  if ( Serial.available() ) Serial.read();
}


#define printf Serial.printf

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

  printf("_stext        %08x\n",      _stext);
  printf("_etext        %08x +%db\n", _etext, _etext - _stext);
  printf("_sdata        %08x\n",      _sdata);
  printf("_edata        %08x +%db\n", _edata, _edata - _sdata);
  printf("_sbss         %08x\n",      _sbss);
  printf("_ebss         %08x +%db\n", _ebss, _ebss - _sbss);
  printf("curr stack    %08x +%db\n", sp, sp - _ebss);
  printf("_estack       %08x +%db\n", _estack, _estack - sp);
  printf("_heap_start   %08x\n",      _heap_start);
  printf("__brkval      %08x +%db\n", __brkval, __brkval - _heap_start);
  printf("_heap_end     %08x +%db\n", _heap_end, _heap_end - __brkval);
#if ARDUINO_TEENSY41
  extern char _extram_start[], _extram_end[], *__brkval;
  printf("_extram_start %08x\n",      _extram_start);
  printf("_extram_end   %08x +%db\n", _extram_end,
         _extram_end - _extram_start);
#endif
  printf("\n");

  printf("<ITCM>  %08x .. %08x\n",
         _stext, _stext + ((int) _itcm_block_count << 15) - 1);
  printf("<DTCM>  %08x .. %08x\n",
         _sdata, _estack - 1);
  printf("<RAM>   %08x .. %08x\n",
         RAM_BASE, RAM_BASE + RAM_SIZE - 1);
  printf("<FLASH> %08x .. %08x\n",
         FLASH_BASE, FLASH_BASE + FLASH_SIZE - 1);
#if ARDUINO_TEENSY41
  extern uint8_t external_psram_size;
  if (external_psram_size > 0)
    printf("<PSRAM> %08x .. %08x\n",
           _extram_start, _extram_start + (external_psram_size << 20) - 1);
#endif
  printf("\n");

  auto stack = sp - _ebss;
  printf("avail STACK % 8d b % 5d kb\t<<RAM1\n", stack, stack >> 10);

  auto heap = _heap_end - __brkval;
  printf("avail HEAP  % 8d b % 5d kb\t<<RAM2\n", heap, heap >> 10);

#if ARDUINO_TEENSY41
  auto psram = _extram_start + (external_psram_size << 20) - _extram_end;
  printf("avail PSRAM % 8d b % 5d kb\n", psram, psram >> 10);
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
  printf( "Size of Free ITCM in Bytes = % u\n", sizeofFreeITCM * sizeof(ptrFreeITCM[0]) );
  printf( "Start of Free ITCM = % u [ % X] \n", ptrFreeITCM, ptrFreeITCM);
  printf( "End of Free ITCM = % u [ % X] \n", ptrFreeITCM + sizeofFreeITCM, ptrFreeITCM + sizeofFreeITCM);
  for ( uint ii = 0; ii < sizeofFreeITCM; ii++) ptrFreeITCM[ii] = 1;
  uint jj = 0;
  for ( uint ii = 0; ii < sizeofFreeITCM; ii++) jj += ptrFreeITCM[ii];
  printf( "ITCM DWORD cnt = % u [#bytes=%u] \n", jj, jj * 4);
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
  uint32_t hab_Expected = 0x403000D4; // https://forum.pjrc.com/threads/67989-Teensyduino-1-55-Beta-1?p=286356&viewfull=1#post286356
  if ( hab_Expected == hab_csf[0] ) {
    Serial.println("Pass: csf as expected");
    strcat( serNum, " ENC" );
  } else {
    Serial.println("Fail: csf not as expected");
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
