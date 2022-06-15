/*
  SD card basic file example

  This example shows how to create and destroy an SD card file
  The circuit:
   SD card attached to SPI bus as follows:
 ** MOSI - pin 11, pin 7 on Teensy with audio board
 ** MISO - pin 12
 ** CLK - pin 13, pin 14 on Teensy with audio board
 ** CS - pin 4, pin 10 on Teensy with audio board

  created   Nov 2010
  by David A. Mellis
  modified 9 Apr 2012
  by Tom Igoe

  This example code is in the public domain.

*/

//#define LFS_MTPINDEX
#ifdef LFS_MTPINDEX
#include "LittleFS.h" // MJS513 :: https://forum.pjrc.com/threads/68139-Teensyduino-File-System-Integration-including-MTP-and-MSC?p=306205&viewfull=1#post306205
LittleFS_Program lfsProg; // Used to create FS on the Flash memory of the chip
static const uint32_t file_system_size = 1024 * 1024 * 1;
#endif

#include <SD.h>
#include <SPI.h>
#if defined(USB_MTPDISK) || defined(USB_MTPDISK_SERIAL)
#include <MTP_Teensy.h>
#endif

#define USE_SDIO_SD
//#define USE_PSRAM
//#define TEST_QSPI // Typical NOR FLASH
//#define TEST_QSPI_NAND // NAND Flash

#ifdef USE_SDIO_SD
#define DISK SD
const int chipSelect = BUILTIN_SDCARD;
//const int chipSelect = 10;  // SFUN T_MM Carriers
#else // LittleFS
#include "LittleFS.h"
#define DISK myfs
#if defined TEST_QSPI
LittleFS_QSPIFlash myfs;
#elif defined(TEST_QSPI_NAND)
LittleFS_QPINAND myfs;
#elif defined USE_PSRAM
LittleFS_RAM myfs;
#define MYPSRAM 8 // compile time PSRAM size and is T_4.1 specific either 8 or 16, or smaller portion
EXTMEM char buf[MYPSRAM * 1024 * 1024];
#else
LittleFS_SPINAND myfs;
const int chipSelect = 4;
#endif
#endif


elapsedMillis seeSer;
void setup()
{
  Serial.begin( 9600);
#if defined(USB_MTPDISK) || defined(USB_MTPDISK_SERIAL)
#ifdef LFS_MTPINDEX
  // MJS513 :: https://forum.pjrc.com/threads/68139-Teensyduino-File-System-Integration-including-MTP-and-MSC?p=306205&viewfull=1#post306205
  // Lets add the Program memory version:
  // checks that the LittFS program has started with the disk size specified
  if (lfsProg.begin(file_system_size)) {
    MTP.addFilesystem(lfsProg, "PgmIndx");
  } else {
    Serial.println("Error starting Program Flash storage");
  }
  // MTP.begin();
#endif
#endif
  while (!Serial && millis() < 5000 );
  Serial.println("\n" __FILE__ " " __DATE__ " " __TIME__);
  Serial.print("Initializing SD card...");
#ifdef USE_SDIO_SD
  if (!DISK.begin(chipSelect)) {
#elif defined USE_PSRAM
  if (!DISK.begin(buf, sizeof(buf))) {
#else
  if (!DISK.begin()) {
#endif
    while (!Serial && millis() < 5000 );
    Serial.println("\ninitialization failed!");
    Serial.println("\ninitialization failed!");
    Serial.println("\ninitialization failed!");
    while (1) yield();
    return;
  }
#if defined(USB_MTPDISK) || defined(USB_MTPDISK_SERIAL)
  else {
    MTP.addFilesystem(DISK, "MakeFiles 2206");
    Serial.println("Added SD card using built in SDIO, or given SPI CS");
  }
#endif
  delay(2000);
  Serial.println("initialization done.");
  seeSer = 101;
  while ( millis() < 2500) {
    if ( seeSer > 100 ) {
      Serial.print(" SerOn: ");
      Serial.print(millis());
      seeSer = 0;
    }
  }
  Serial.println("\n" __FILE__ " " __DATE__ " " __TIME__);
  //Serial.println("\n2206: " __FILE__ " " __DATE__ " " __TIME__);
  Serial.println("\nSetup done");
  menu();
}

void MakeDeepDirs( char* szRoot, int numDirs, int numFiles, uint32_t startSize, uint32_t growSize, int compoundGrow = 1 );
void indexedDataWrite( char *szBlock, char* szPath, uint32_t xx, bool addFNum = false );
void directoryVerify(File dir, int numTabs, uint32_t numFiles = 0);
void MakeDataFiles( char* szRoot, int numFiles, int startSize, int growSize );
void MakeData( char* szRoot );
void MakeNames( char* szRoot );

void makeSome( int ii ) {
  char szStart[][32] = { "", "ManyF", "ManyD10", "ManyD8", "MoreFD", // 0,1,2,3,4
                         "Ascii", "4K", "россиянин", "Huge", "TEST",  // 5,6,7,8,9
                         "User"   // 10,
                       };
  // MAKE YOUR OWN - add a szStart name as desired and index it - only each ONCE or with unique file count
  // prototypes above :: EDIT #5 'USER' to maintain the known tests.
  if ( ii == 1 ) { // 2206 : as posted 6/14/22 (2204: ~1/24/22)
    showMediaSpace(); MakeDeepDirs( szStart[0], 1, 20, 4096, 0 );
    showMediaSpace(); MakeDeepDirs( szStart[0], 1, 40, 122 * 1024, 0 );
    showMediaSpace(); MakeDeepDirs( szStart[0], 1, 60, 63 * 1024, 0 );
    showMediaSpace(); MakeDeepDirs( szStart[0], 1, 30, 31 * 1024, 0 );
    showMediaSpace(); MakeDeepDirs( szStart[2], 10, 5, 500, 512 );
    showMediaSpace(); MakeDeepDirs( szStart[9], 1, 28, 495, 1 );
    showMediaSpace(); MakeDeepDirs( szStart[0], 1, 28, 495, 1 );
    showMediaSpace(); MakeDeepDirs( szStart[0], 1, 25, 500, 1 );
    showMediaSpace(); MakeDeepDirs( szStart[8], 1, 10, 400000, 0 );
    showMediaSpace();
  }
  else if ( ii == 2 ) { // SMALL
    // EDIT HERE - for more files, Dirs, larger or alternate file sizes
    // Multiple use of same FOLDER will mess up the file count - if they have same # files
    showMediaSpace(); MakeDeepDirs( szStart[0], 1, 3, 2048, 0 );
    showMediaSpace(); MakeDeepDirs( szStart[0], 1, 4, 100, 400 );
    showMediaSpace(); MakeDeepDirs( szStart[0], 1, 5, 100, 400 );
    showMediaSpace(); MakeDeepDirs( szStart[0], 1, 6, 4096, 0 );
    showMediaSpace();
  }
  else if ( ii == 3 ) { // BIG
    // EDIT HERE - for more files, Dirs, larger or alternate file sizes
    showMediaSpace(); MakeDataFiles( szStart[1], 128, 100, 1 );
    showMediaSpace(); MakeDeepDirs( szStart[0], 1, 7, 2048, 0 );
    showMediaSpace(); MakeDeepDirs( szStart[0], 1, 8, 100, 400 ); // Multiple use of same FOLDER will mess up the file count - if they have same # files
    showMediaSpace(); MakeData( szStart[0] );
    showMediaSpace(); MakeDataFiles( szStart[1], 124, 200, 1 );
    showMediaSpace(); MakeDeepDirs( szStart[3], 8, 6, 100, 400 );
    showMediaSpace(); MakeDeepDirs( szStart[4], 4, 6, 125, 250, 8 ); // LAST PARAM is 'GROW factor' Good for arbitrarily LARGE files
    showMediaSpace(); MakeDeepDirs( szStart[6], 1, 6, 4096, 0 );
    showMediaSpace();
  }
  else if ( ii == 4 ) { // NAME TEST
    showMediaSpace(); MakeNames( szStart[5] ); // ASCII filename char list
    showMediaSpace(); dbMakeNames( szStart[7] ); // UTF8 filename char list
  }
  else if ( ii == 5 ) { // USER
    // EDIT HERE - for more files, Dirs, larger or alternate file sizes
    // Multiple use of same FOLDER will mess up the file count - if they have same # files
    showMediaSpace(); MakeDataFiles( szStart[0], 2, 100, 100 );
    showMediaSpace(); MakeDataFiles( szStart[10], 2, 100, 100 );
  }
  else if ( ii == 6 ) { // ROOT MANY
    showMediaSpace(); MakeDataFiles( szStart[0], 2, 100, 100 );
  }

  Serial.println("MakeData done.");
}

uint32_t totBWrite = 0;
void loop() {
#if defined(USB_MTPDISK) || defined(USB_MTPDISK_SERIAL)
  MTP.loop();  //This is mandatory to be placed in the loop code.
#endif
  char CLRC;
  char szNone[] = "";
  if ( Serial.available() ) {
    CLRC = CommandLineReadChar();
    switch ( CLRC ) {
      case 'v':
        directoryVerify();
        break;
      case 'l':
        printDirectory();
        break;
      case 't':
        makeSome( 1 );
        break;
      case 'r': // make many on root
        MakeRoot( szNone, 490, 992 );
        break;
      case 's':
        makeSome( 2 );
        break;
      case 'b':
        makeSome( 3 );
        break;
      case 'n':
        makeSome( 4 );
        break;
      case 'o': // Open Write Close timed test
        timeOWC();
        break;
      case 'u': // USER
        makeSome( 5 );
        break;
      /*
            case 'r':
              Serial.println("Send Device Reset Event");
              MTP.send_DeviceResetEvent();
              break;
      */
      case 'U': // USB Reset
        Serial.println("USB reset: Reconnect serial port or restart Serial Monitor after.");
        delay(100);
#if defined(USB_MTPDISK) || defined(USB_MTPDISK_SERIAL)
        usb_init();  // shuts down USB if already started, then restarts
#endif
        delay(200);
        Serial.begin(9600);
        delay(200);
        Serial.println("USB reset Completed.");
        break;
      case 'W':
        deleteAllDirectory(DISK.open("/"), szNone );
        break;
      case 'R':
        Serial.print(" RESTART Teensy ...");
        delay(100);
        SCB_AIRCR = 0x05FA0004;
        break;
      case 'C': // Copy LFS Media to SD
        xferSD( );
        break;
      default:
        menu();
        CLRC = 0;
        break;
    }
#if defined(USB_MTPDISK) || defined(USB_MTPDISK_SERIAL)
    MTP.loop();  //This is mandatory to be placed in the loop code.
#endif
    if ( CLRC != 0 ) {
      Serial.printf("\n----\tTask '%c' complete!\t----\n", CLRC );
    }
  }
} // end loop()


void menu() // any single alpha or numeral char
{
  Serial.println();
  Serial.println("Menu Options:");
  Serial.println("\tt - Test Files write 2206");
  Serial.println("\tb - Test Files write BIG");
  Serial.println("\ts - Test Files write small");
  Serial.println("\tu - Test Files write USER edit");
  Serial.println("\tn - Test ASCII and UTF8 Filenames");
  Serial.println("\tr - Root files - make Many");
  Serial.println("\to - OpenWriteClose timed test");
  Serial.println("\tv - Verify Files");
  Serial.println("\tl - List files on media");
  Serial.printf("\n\t%s\n", "R - Restart Teensy");
  Serial.println("\tU - USB reset");
  Serial.println("\tW - Remove ALL media content");
  Serial.println("\tC - Copy LFS media content to SD");
  Serial.println();
}

char CommandLineReadChar() {
  uint32_t return_value = 0;
  char ch;
  while ( Serial.available() ) {
    ch = Serial.read();
    if ( ((ch >= '0') && (ch <= '9')) || ((ch >= 'a') && (ch <= 'z')) || ((ch >= 'A') && (ch <= 'Z')) )
      return_value = ch;
  }
  return return_value;
}


uint32_t startSize = 244;
uint32_t growSize = 256;
char dirL[3][4] = {"111", "222", "333"};
char fileL[3][8] = {"aaa", "bbb", "ccc"};
#define BLOCK_SIZE 16
char dataL[6][BLOCK_SIZE + 1] = { "zaaa567890!@#$%^", "zbbbefghijklmnop", "zcccEFGHIJKLMNOP", "zDDdEFGHIJKLMNOP", "zE123456789LMNOP", "zRootFileManyxyz"};
void MakeData( char* szRoot ) {
  char szPath[128];
  char szTmp[128];

  for ( int ii = 0; ii < 3; ii++ ) {
    strcpy( szPath, szRoot );
    strcat( szPath, "/" );
    strcat( szPath, dirL[ii] );
    sprintf( szTmp, ".%d", 3);
    strcat( szPath, szTmp );
    DISK.mkdir( szPath );
    uint32_t xx = startSize;
    for ( int jj = 0; jj < 3; jj++ ) {
      strcpy( szPath, szRoot );
      strcat( szPath, "/" );
      strcat( szPath, dirL[ii] );
      sprintf( szTmp, ".%d", 3);
      strcat( szPath, szTmp );
      strcat( szPath, "/" );
      strcat( szPath, fileL[jj] );
      Serial.print("MakeD File:");
      Serial.print(szPath);
      indexedDataWrite( dataL[ii], szPath, xx );
      xx += growSize;
      if ( Serial.available() ) {
        while ( Serial.available() ) {
          Serial.read();
        }
        return;
      }
    }
  }
} // end MakeData()

void MakeRoot( char* szRoot, int numFiles, int startSize ) {
  char szPath[128];
  char szFile[12];
  int ii = 0;
  Serial.print("Make Root File:");
  while ( ii < numFiles ) {
    ii++;
    strcpy( szPath, szRoot );
    strcat( szPath, "/" );
    sprintf( szFile, "%d_Mrt%3d", startSize, ii);
    strcat( szPath, szFile );
    indexedDataWrite( dataL[5], szPath, startSize );
    if ( Serial.available() ) {
      while ( Serial.available() ) {
        Serial.read();
      }
      return;
    }
  }
} // end MakeRoot()

void MakeNames( char* szRoot ) {
  char szPath[128];
  strcpy( szPath, szRoot );
  if ( 0 != szPath[0] )
    DISK.mkdir( szPath );
  char jj[2] = "-";
  for ( jj[0] = 33; jj[0] < 127; jj[0]++ ) {
    bool ok;
    switch ( jj[0] ) { // Compiler take these away
      case '=':
      case ';':
      case ',':
      case '.':
      case '>':
      case '<':
      case '\"':
      case '|':
      case ':':
      case '*':
      case '%':
      case '?':
      case '\\':
      case '/':
        ok = false;
        break;
      default:
        ok = true;
        break;
    }
    if ( ok ) {
      strcpy( szPath, szRoot );
      strcat( szPath, "/" );
      if ( *jj >= '0' && *jj <= '9')
        strcat( szPath, "_" );
      strcat( szPath, jj );
      Serial.print("MakeN File:");
      Serial.print(szPath);

      // Run Once - don't delete to show file name re-use
      File myFile;
      myFile = DISK.open(szPath, FILE_WRITE);
      if ( !myFile ) {
        Serial.print(" >> Fail Open << \t <<<<<<");
        break;
      }
      uint32_t kk;
      for ( kk = 0; kk < 32; kk++ ) {
        myFile.print( jj );
      }
      Serial.print("=");
      Serial.print(myFile.size());
      totBWrite += 32;
      if ( 32 != myFile.size() )
        Serial.print(" >> NAME REUSED << ");
      Serial.println();
      myFile.close();
    }
  }
} // end MakeNames()

void dbMakeNames( char* szRoot ) { // Double Byte content names
  char szPath[128];
  strcpy( szPath, szRoot );
  if ( 0 != szPath[0] )
    DISK.mkdir( szPath );
  const char *jj;
  for ( int ii = 0; ii < 4; ii++ ) {
    if ( 0 == ii ) jj = "😀";
    if ( 1 == ii ) jj = "👍";
    if ( 2 == ii ) jj = "α";
    if ( 3 == ii ) jj = "β";
    strcpy( szPath, szRoot );
    strcat( szPath, "/" );
    strcat( szPath, jj );
    strcat( szPath, ".txt" );
    Serial.print("dbMakeN File:");
    Serial.print(szPath);

    // Run Once - don't delete to show file name re-use
    File myFile;
    if (DISK.exists(szPath)) DISK.remove(szPath);
    myFile = DISK.open(szPath, FILE_WRITE);
    if ( !myFile ) {
      Serial.print(" >> Fail Open << \t <<<<<<");
      break;
    }
    uint32_t kk = 0;
    if ( 2 > ii ) kk = 8; // emoji's are 4 byte
    for ( ; kk < 16; kk++ ) {
      myFile.print( jj );
    }
    Serial.print("=");
    Serial.print(myFile.size());
    totBWrite += 32;
    if ( 32 != myFile.size() )
      Serial.print(" >> NAME REUSED << ");
    Serial.println();
    myFile.close();
  }
} // dbMakeNames()

// void MakeDataFiles( "ManyF", 1024, 400, 1 );
void MakeDataFiles( char* szRoot, int numFiles, int startSize, int growSize ) {
  char szPath[128];
  char szFile[128];
  char szTmp[128];

  for ( int ii = 0; ii < 3; ii++ ) {
    strcpy( szPath, szRoot );
    strcat( szPath, "/" );
    strcat( szPath, dirL[ii] );
    sprintf( szTmp, ".%d", numFiles);
    strcat( szPath, szTmp );
    DISK.mkdir( szPath );
    int xx = startSize;
    for ( int jj = 0; jj < numFiles; jj++ ) {
      sprintf( szFile, "%d", xx);
      strcpy( szPath, szRoot );
      strcat( szPath, "/" );
      strcat( szPath, dirL[ii] );
      sprintf( szTmp, ".%d", numFiles);
      strcat( szPath, szTmp );
      strcat( szPath, "/" );
      strcat( szPath, szFile );
      Serial.print("Make DF File:");
      Serial.print(szPath);
      indexedDataWrite( dataL[ii], szPath, xx, growSize == 0 );
      xx += growSize;
      if ( Serial.available() ) {
        while ( Serial.available() ) {
          Serial.read();
        }
        return;
      }
    }
  }
} // end MakeDataFiles()

// void MakeDeepDirs( "ManyD", 10, 5, 500, 512, [1] );
void MakeDeepDirs( char* szRoot, int numDirs, int numFiles, uint32_t startSize, uint32_t growSize, int compoundGrow ) {
  char szCurPath[256];
  char szPath[256];
  char szFile[128];
  char szTmp[128];

  strcpy( szCurPath, szRoot );
  if ( 0 != szCurPath[0] )
    DISK.mkdir( szCurPath );
  Serial.print("\tMake DeepDir :");
  Serial.println(szCurPath);
  for ( int ii = 0; ii < numDirs; ii++ ) {
    sprintf( szTmp, "/D%d", ii);
    strcat( szCurPath, szTmp );
    sprintf( szTmp, ".%d", numFiles);
    strcat( szCurPath, szTmp );
    if ( !DISK.mkdir( szCurPath ) ) {
      if (!DISK.exists(szCurPath)) {
        Serial.print("\tMake Dir failed!");
        Serial.println(szCurPath);
      }
    }
    uint32_t xx = startSize;
    for ( int jj = 0; jj < numFiles; jj++ ) {
      strcpy( szPath, szCurPath );
      strcat( szPath, "/" );
      sprintf( szFile, "%lu", xx);
      strcat( szPath, szFile );
      Serial.print("Make DD File:");
      Serial.print(szPath);
      indexedDataWrite( dataL[4], szPath, xx, growSize == 0 );
      xx += growSize * compoundGrow;
      if ( Serial.available() ) {
        while ( Serial.available() ) {
          Serial.read();
        }
        return;
      }
    }
  }
} // end MakeDeepDirs()

void indexedDataWrite( char *szBlock, char* szInPath, uint32_t xx, bool addFNum )
{
  static uint32_t gNumFiles = 0;
  static uint32_t gNumBlocks = 0;

  File myFile;
  char writeData[ 2 * BLOCK_SIZE + 10 ];
  char szPath[256];
  gNumFiles++;
  totBWrite += xx;
  uint32_t timeHere = micros();
  if ( addFNum ) {
    sprintf( szPath, "%s_%lu.txt", szInPath, gNumFiles );
  }
  else {
    sprintf( szPath, "%s.txt", szInPath );
  }
  if (DISK.exists(szPath)) DISK.remove(szPath);
  myFile = DISK.open(szPath, FILE_WRITE);
  if ( !myFile ) {
    Serial.print(" >> Fail Open << \n");
    gNumFiles--;
    return;
  }
  strncpy( writeData, szBlock, BLOCK_SIZE + 1 );
  Serial.print("\tFile size=");
  Serial.print(xx);
  uint32_t kk;
  for ( kk = 0; kk < xx; kk += BLOCK_SIZE ) {
    if ( BLOCK_SIZE >= 16 ) { // UPDATE writeData[] HERE
      if ( kk + 2 * BLOCK_SIZE >= xx) break; // Early exit to write szPath
      // 16 CHARS == 4 file chars, '.', #### 4 dig numFile, 'x', 0x##### 5 char Hex numBlock, '\n'
      sprintf( &writeData[2], ".%4lux%7lX\n", gNumFiles, gNumBlocks );
    }
    if ( kk + BLOCK_SIZE <= xx) {
      myFile.print( writeData );
    }
    else {
      for ( uint32_t ll = 0; ll + kk < xx; ll++ ) {
        myFile.print( writeData[ll] );
      }
    }
    gNumBlocks++;
  }
  if ( kk + BLOCK_SIZE <= xx) { // End file with szPath
    uint32_t ii = strlen( szPath );
    uint32_t jj = xx - kk;
    while ( jj > ii ) {
      myFile.print( '*' );
      jj--;
      kk++;
    }
    uint32_t ll = 0;
    if ( ii > jj) ll = ii - jj;
    for ( ; kk < xx; kk++, ll++ ) {
      myFile.print( szPath[ll] );
    }

  }
  Serial.print("=");
  Serial.print(myFile.size());
  Serial.print("\t us=");
  Serial.print(timeHere);
  Serial.print("    end:");
  if ( xx != myFile.size() ) Serial.print(" >> WRONG << ");
  Serial.print(writeData);
  myFile.close();
  timeHere = micros() - timeHere;
  if (!DISK.exists(szPath)) Serial.print("\tFile WRITE failed!\n");
} // end indexedDataWrite()

void showMediaSpace()
{
  static uint32_t timeHere = micros();
  timeHere = micros() - timeHere;
  Serial.print("\n ================================ ");
  Serial.print("Media Size=");
  Serial.print(DISK.totalSize());
  Serial.print("\tUsed Size=");
  Serial.print(DISK.usedSize());
  if ( timeHere > 5 ) {
    Serial.print("\t us=");
    Serial.print(timeHere);
    Serial.print("   KB/sec=");
    Serial.print((totBWrite / 1024.0) / (timeHere / 1000000.0));
    Serial.print("   Bytes written=");
    Serial.print(totBWrite);
  }
  Serial.println();
  timeHere = micros();
  totBWrite = 0;
#if defined(USB_MTPDISK) || defined(USB_MTPDISK_SERIAL)
  MTP.loop();  //This is mandatory to be placed in the loop code.
#endif
} // end showMediaSpace())

uint32_t fTot, totSize, errTot;
void printDirectory() {
  fTot = 0, totSize = 0;
  printDirectory(DISK.open("/"), 0);
  Serial.printf("\n%Total %u files of Size %u Bytes\n", fTot, totSize);
  Serial.printf("Bytes Used: %llu, Bytes Total:%llu\n", DISK.usedSize(), DISK.totalSize());
}

void directoryVerify() {
  fTot = 0, totSize = 0, errTot = 0;
  double verCyc = ARM_DWT_CYCCNT;
  directoryVerify(DISK.open("/"), 0);
  verCyc = 1000.0 * (ARM_DWT_CYCCNT - verCyc) / F_CPU_ACTUAL;
  Serial.printf("\n%Total %u files of Size %u Bytes\t Verify Errors %u\t%lf msec\n", fTot, totSize, errTot, verCyc);
  Serial.printf("Bytes Used: %llu, Bytes Total:%llu\n", DISK.usedSize(), DISK.totalSize());
}

void deleteAllDirectory( File dir, char *fullPath ) {
  char myPath[ 256 ] = "";
#if defined(USB_MTPDISK) || defined(USB_MTPDISK_SERIAL)
  MTP.loop();  //This is mandatory to be placed in the loop code.
#endif
  while (true) {
    File entry =  dir.openNextFile();
    if (! entry) {
      // no more files
      break;
    }
    if (entry.isDirectory()) {
      strcpy( myPath, fullPath);
      strcat( myPath, entry.name());
      strcat( myPath, "/");
      deleteAllDirectory(entry, myPath);
      entry.close();
      if ( !DISK.rmdir( myPath ) )
        Serial.print( "  Fail remove DIR>\t");
      else
        Serial.print( "  Removed DIR>\t");
      Serial.println( myPath );

    } else {
      strcpy( myPath, fullPath);
      strcat( myPath, entry.name());
      entry.close();
      if ( !DISK.remove( myPath ) )
        Serial.print( "\tFail remove>\t");
      else
        Serial.print( "\tRemoved>\t");
      Serial.println( myPath );
    }
  }
} // deleteAllDirectory()

void printDirectory( File dir, int numTabs) {
  uint64_t fSize = 0;
  uint32_t dCnt = 0, fCnt = 0;
#if defined(USB_MTPDISK) || defined(USB_MTPDISK_SERIAL)
  MTP.loop();  //This is mandatory to be placed in the loop code.
#endif
  if ( 0 == dir ) {
    Serial.printf( "\t>>>\t>>>>> No Dir\n" );
    return;
  }
  while (true) {
    File entry =  dir.openNextFile();
    for (uint8_t i = 0; i < numTabs; i++) {
      Serial.print("    ");
    }
    if (! entry) {
      // no more files
      Serial.printf("\n %u dirs with %u files of Size %llu Bytes\n", dCnt, fCnt, fSize);
      fTot += fCnt;
      totSize += fSize;
      break;
    }
    for (uint8_t i = 0; i < numTabs; i++) {
      Serial.print("    ");
    }

    if (entry.isDirectory()) {
      Serial.print("DIR    ");
      dCnt++;
    } else {
      Serial.print("FILE    ");
      fCnt++;
      fSize += entry.size();
    }
    Serial.print(entry.name());
    if (entry.isDirectory()) {
      Serial.println(" / ");
      printDirectory(entry, numTabs + 1);
    } else {
      // files have sizes, directories do not
      Serial.print("\t");
      Serial.println(entry.size(), DEC);
    }
    entry.close();
    //Serial.flush();
    delay(1);
  }
} // end printDirectory()


void xferSD( ) { // do MediaTransfer to SD
#ifndef USE_SDIO_SD
  static bool initSD = true;
  if ( initSD && !SD.begin(BUILTIN_SDCARD)) { // see if the card is present and can be initialized:
    Serial.println("\n\n SD Card failed, or not present - Cannot do Xfer\n");
    return;
  }
  else {
    if ( initSD )  Serial.print("Initialized SD card.\n");
    initSD = false;
    // char szSDdir[] = "/"; // COPY to SD ROOT
    char szSDdir[16] = "LFS_CPY0/"; // COPY to SD subdirectory
    char fileID = '0';;
    if ( '/' != szSDdir[0] ) {
      do {
        szSDdir[7] = fileID;
        File fDir =  SD.open( szSDdir );
        if ( !fDir )
          break;
        fDir.close();
        fileID++;
      } while ( fileID < '9' );
      if ( fileID == '9' ) {
        Serial.print( "Disk has 9 folders 0-8! DO :: clean the SD card");
        return;
      }
      SD.mkdir( szSDdir );
    }
    Serial.println("\n STARTING :: LittleFS copy to SD card XFER ...\n\n");
    mediaTransfer( myfs.open("/"), szSDdir ); // TO SD
    Serial.printf("\n LittleFS copy to SD card XFER COMPLETE in folder: %s\n\n", szSDdir);
  }
#endif
} // end xferSD()

void mediaTransfer(File dir, char* szDir) {
  char szNewDir[256];
  while (true) {
    File entry =  dir.openNextFile();
    if (! entry) {
      break;
    }
    if (entry.isDirectory()) {
      strcpy( szNewDir, szDir);
      SD.mkdir( szNewDir );
      strcat( szNewDir, entry.name());
      SD.mkdir( szNewDir );
      strcat( szNewDir, "/");
      mediaTransfer(entry, szNewDir);
    } else {
      uint64_t fileSize, sizeCnt = 0, xfSize = 1;
      char mm[512];
      strcpy( szNewDir, szDir);
      strcat( szNewDir, entry.name() );
      File dataFile;
      dataFile = SD.open(szNewDir, FILE_WRITE_BEGIN);
      if ( !dataFile ) {
        Serial.printf("\td_FILE: NOT open : %s [d:%s :: f:%s]\n", szNewDir, szDir, entry.name() );
      }
      fileSize = entry.size();
      while ( entry.available() ) {
        if ( fileSize < sizeCnt ) break;
        if ( fileSize - sizeCnt >= sizeof(mm) ) xfSize = sizeof(mm);
        else xfSize = fileSize - sizeCnt;
        entry.read( &mm , xfSize );
        dataFile.write( &mm , xfSize );
        sizeCnt += xfSize;
      }
      if (fileSize != sizeCnt ) {
        Serial.print("\n File Size Error:: ");
        Serial.println( entry.name() );
      }
      dataFile.close();
    }
    entry.close();
  }
} // end mediaTransfer()

void directoryVerify( File dir, int numTabs, uint32_t numFiles) {
  static char szTmp[100];
  uint64_t fSize = 0;
  uint64_t fSizeDir = 0;
  uint32_t dCnt = 0, fCnt = 0;
  uint32_t fErrs = 0;
  uint32_t verCnt = 0;
  double verCyc = ARM_DWT_CYCCNT;

#if defined(USB_MTPDISK) || defined(USB_MTPDISK_SERIAL)
  MTP.loop();  //This is mandatory to be placed in the loop code.
#endif
  if ( 0 == dir ) {
    Serial.printf( "\t>>>\t>>>>> No Dir\n" );
    return;
  }
  while (true) {
    File entry =  dir.openNextFile();
    Serial.print("    ");
    if (! entry) {        // no more files
      fTot += fCnt;
      totSize += fSizeDir;
      break;
    }
    Serial.print("    ");
    if (entry.isDirectory()) {
      dCnt++;
    } else {
      fCnt++; // Will miss count if a #size file is renamed, or replaced with am alternate file not #size
      fSize = entry.size();
      fSizeDir += fSize;
      snprintf( szTmp, 99, "%s", entry.name());
      uint32_t cntF = 0;
      if ( '0' > szTmp[0] || '9' < szTmp[0] ) // some files are NOT size# named
      {
        Serial.printf("\n°FILE: %s sz=%llu", entry.name(), entry.size()); // Unchecked File by #name
        cntF = fSize;
      }
      else {
        cntF = atoi( szTmp ); // Expected files GENERALLY had #size filenames like 1024.txt
        if ( cntF == fSize ) {
          int fvRet = fileVerify( entry );
          verCnt++;
          if ( 1 == fvRet ) {
          }
          else {
            fCnt += fvRet - 1; // Failed fileVerify()
          }
        }

      }
      if ( cntF != fSize ) {
        fErrs++;
        Serial.printf( "\n%s\tXXXX\t File name Size %lu MISMATCH != size of %llu:", entry.name(), cntF, fSize);
      }
    }
    if (entry.isDirectory()) {
      if ( verCnt > 0 ) {
        if ( numFiles == 0 && 0 != verCnt ) // Dir not '.#' numbered - but file# name matches size
          Serial.printf("\t  %u File(s) tested GOOD HERE", fCnt);
        else if ( numFiles == fCnt && 0 == fErrs ) {
          Serial.printf("\nDONE RESULTS GOOD HERE %u Files(s)", fCnt);
        }
        else {
          Serial.print("\n\tDONE RESULTS BAD HERE  \tXXX 'a XX\t");
          if ( numFiles > fCnt ) {
            Serial.printf("  MISSING %u FILE(S) \n", numFiles - fCnt);
            fErrs++;
          }
          else if ( numFiles < fCnt ) {
            Serial.printf("  %u EXTRA FILE(S)  \n", fCnt - numFiles);
            fErrs++;
          }
          if ( 0 != fErrs )
            Serial.printf(" %u File Error(s)  \n", fErrs);
        }
        verCyc = 1000.0 * (ARM_DWT_CYCCNT - verCyc) / F_CPU_ACTUAL;
        errTot += fErrs;
        Serial.printf("\t with %u files of Size %llu Bytes\t%lf msec\n", fCnt, fSizeDir, verCyc);
        verCnt = 0;
      }
      Serial.printf("\n%s /", entry.name());
      uint32_t cntF = 0;
      snprintf( szTmp, 99, "%s", entry.name());
      int ii = 0;
      while ( szTmp[ii] != 0 && szTmp[ii] != '.' && ii < 99 ) ii++;
      if ( szTmp[ii] == '.' ) {
        ii++;
        cntF = atoi( &szTmp[ii] );
      }
      if ( 0 == cntF ) {
        Serial.print("no count DIR\n");
      }
      directoryVerify(entry, numTabs + 1, cntF);
    }
    entry.close();
    //Serial.flush();
    delayMicroseconds(20);
  }
  if ( verCnt > 0 ) {
    if ( numFiles == 0 && 0 != verCnt ) { // Dir not '.#' numbered - but file# name matches size
      Serial.printf("\t  %u File(s) tested GOOD HERE", fCnt);
    }
    else if ( numFiles == fCnt && 0 == fErrs ) {
      Serial.printf("\nDONE RESULTS GOOD HERE %u Files(s)", fCnt);
    }
    else {
      Serial.print("\n\t  DONE RESULTS BAD HERE  \tXXX 'b XX\t");
      if ( numFiles > fCnt ) {
        Serial.printf("  MISSING %u FILE(S)  \n", numFiles - fCnt);
        fErrs++;
      }
      else if ( numFiles < fCnt ) {
        Serial.printf("  %u EXTRA FILE(S)  \n", fCnt - numFiles);
        fErrs++;
      }
      if ( 0 != fErrs )
        Serial.printf(" %u File Error(s)  \n", fErrs);
    }
    verCyc = 1000.0 * (ARM_DWT_CYCCNT - verCyc) / F_CPU_ACTUAL;
    errTot += fErrs;
    Serial.printf("\t with %u files of Size %llu Bytes\t%lf ms\n", fCnt, fSizeDir, verCyc);
    verCnt = 0;
  }
} // end directoryVerify()

int fileVerify( File entry ) {
  char fBuf[64] = "";
  char errBuf[256] = "";
  char szFile[16];
  int ebI;
  int retVal = 1;
  uint32_t ii, jj;
  uint32_t totRd = 0;
  uint32_t CurrBID = 0;
  uint32_t idFile = 0; // DEC File ID in each Block : 4 DEC chars
  uint32_t idBlk = 0; // Incrementing HEX Block ID in each Block : 7 HEX chars

  jj = entry.size() / 16;
  ebI = 0;
  ebI += sprintf( &errBuf[ebI], "\nVer Fi:%s %llu", entry.name(), entry.size() );
  for ( ii = 0; ii < jj - 2; ii++ ) {
    // 16 byte Blocks read here for duration of the file to the tail
    totRd += entry.read( fBuf, 16 );
    idBlk = strtoul( &fBuf[8], nullptr, 16 );
    if ( 0 == ii ) {
      idFile = atoi( &fBuf[3] ); // Expected files GENERALLY had #size filenames like 1024.txt
      CurrBID = idBlk;
      for ( int yy = 0; yy < 8; yy++) {
        szFile[yy] = fBuf[yy];
      }
      szFile[8] = 0;
    }
    fBuf[15] = '_'; // replace newline : DEBUG PRINT
    fBuf[16] = 0; // DEBUG PRINT
    if ( 0 != strncmp( szFile, fBuf, 8 ) ) {
      retVal++;
      ebI += sprintf( &errBuf[ebI], "\nX_fid:%s@%lu", fBuf, totRd );
      Serial.printf( "\nX_fid:%s@%lu", fBuf, totRd );
    }
    if ( CurrBID != idBlk ) {
      retVal++;
      ebI += sprintf( &errBuf[ebI], "\nXbid:%lx@%lu", idBlk, totRd );
    }
    CurrBID++; // Next Block ID expected
  }
  // zD. 196x  980F7_.5/D8.5/D9.5/500.txt #2204 // Ver >= 2204
  // zDDd. 196x980F7_.5/D8.5/D9.5/500.txt #2203 : defunct
  ebI += sprintf( &errBuf[ebI], "%s", fBuf );
  ii = entry.size() - (jj - 2) * 16; // Last 2 blocks and 'filler' are
  totRd += entry.read( fBuf, ii );

  fBuf[ii] = 0; // DEBUG PRINT
  while ( ii >= 0 && fBuf[ii] != '/' ) { // find file name for size
    ii--;
  }
  jj = ii;
  if ( fBuf[ii] == '/' ) ii++;
  uint32_t sizeFile = atoi( &fBuf[ii] ); // Expected files GENERALLY had #size filenames like 1024.txt

  while ( jj >= 0 && fBuf[jj] != '\n' ) {
    jj--;
  }
  if ( fBuf[jj] == '\n' ) fBuf[jj] = '~'; // remove \n for DEBUG printing
  ebI += sprintf( &errBuf[ebI], "%s  fid=%lu bid=%lx N=%s| %s", fBuf, idFile, idBlk, &fBuf[ii], fBuf );
  if ( 0 == idFile || 0 == idBlk ) {
    Serial.print( errBuf );
    Serial.print( " <<<<<< | " );
  }
  if ( totRd != entry.size() ) {
    Serial.print( errBuf );
    Serial.printf("\nXXXX2\t Read File Size MISMATCH : %u", totRd);
    retVal++;
  }
  if ( sizeFile != entry.size() ) {
    Serial.print( errBuf );
    Serial.printf("\nXXXX2\t In file Name MISMATCH Size : %u", sizeFile);
    retVal++;
  }
  return retVal;
} // end fileVerify()

void timeOWC() {
  uint32_t startTime = 0;
  uint32_t goTime = 0;
  uint32_t openTime = 0;
  uint32_t printTime = 0;
  uint32_t closeTime = 0;
  uint32_t totalTime = 0;
  Serial.print("starting 100 open/write/close ... ");
  startTime = millis();
  for (int n = 0; n < 100; n++) {
    goTime = micros();
    File myfile = DISK.open("stest.txt", FILE_WRITE);
    if (myfile) {
      openTime += (micros() - goTime);
      goTime = micros();
      myfile.println("12345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890");
      printTime += (micros() - goTime);
      goTime = micros();
      myfile.close();
      closeTime += (micros() - goTime);
    }
  }
  totalTime = millis() - startTime;
  Serial.print("Completed in a total of ");
  Serial.print(totalTime);
  Serial.print(" ms - avg tx/ms = ");
  Serial.println(totalTime / 100.0);
  Serial.print("Per Tx in Micros:  Avg open: "); Serial.print(openTime / 100); Serial.print("    Avg print: ");
  Serial.print(printTime / 100.0); Serial.print("    Avg close: "); Serial.println(closeTime / 100.0);
}
