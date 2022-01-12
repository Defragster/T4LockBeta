/*
  SD card basic file example

 This example shows how to create and destroy an SD card file
 The circuit:
 * SD card attached to SPI bus as follows:
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

#ifdef USB_MTPDISK
#include <MTP_Teensy.h>
#endif

#define DISK SD

#include <SD.h>
#include <SPI.h>

const int chipSelect = BUILTIN_SDCARD;
void MakeDeepDirs( char* szRoot, int numDirs, int numFiles, uint32_t startSize, uint32_t growSize, int compoundGrow = 1 );
void indexedDataWrite( char *szBlock, char* szPath, uint32_t xx, bool addFNum = false );

void setup()
{
  while (!Serial && millis() < 4000 );
  Serial.println("\n" __FILE__ " " __DATE__ " " __TIME__);
  Serial.print("Initializing SD card...");
  if (!DISK.begin(chipSelect)) {
    Serial.println("initialization failed!");
    return;
  }
#ifdef USB_MTPDISK
  else {
    MTP.addFilesystem(DISK, "MakeFiles 2203");
    Serial.println("Added SD card using built in SDIO, or given SPI CS");
  }
  MTP.begin();
#endif
  Serial.println("initialization done.");

  Serial.println("\nSetup done");
}

void notSetup() { // delay print feedback for MTP init
  char szStart[][8] = { "", "ManyF", "ManyD10", "ManyD8", "MoreFD", "Ascii", "4K" };

  showMediaSpace();
  //return;
  // EDIT HERE - for more files, Dirs, larger or alternate file sizes
  MakeDeepDirs( szStart[0], 1, 4, 2048, 0 );
  showMediaSpace();
  MakeDeepDirs( szStart[0], 1, 8, 100, 400 ); // Multiple use of same FOLDER will mess up the file count - if they have same # files
  showMediaSpace();
  MakeData( szStart[0] );
  showMediaSpace();
  //MakeDataFiles( szStart[1], 1024, 400, 1 );
  showMediaSpace();
  MakeDeepDirs( szStart[2], 10, 5, 500, 512 );
  showMediaSpace();
  MakeDeepDirs( szStart[3], 8, 6, 100, 400 );
  showMediaSpace();
  MakeDeepDirs( szStart[4], 4, 6, 125, 250, 8 ); // LAST PARAM is 'GROW factor' Good for arbitrarily LARGE files
  showMediaSpace();
  //MakeNames( szStart[5] ); // ASCII filename char list
  //showMediaSpace();
  MakeDeepDirs( szStart[6], 1, 6, 4096, 0 );
  showMediaSpace();

  Serial.println("MakeData done.");
}

bool runOnce = true;
bool runOnceSer = true;
void loop() {
#ifdef USB_MTPDISK
  MTP.loop();  //This is mandatory to be placed in the loop code.
#endif
  if ( Serial.available() ) {
    while ( Serial.available() ) Serial.read();
    printDirectory();
  }
#ifdef USB_MTPDISK
  if ( runOnce && millis() > 20000 ) { // wait for SerMon connect w/MTP
#else
  if ( runOnce && millis() > 2000 ) {
#endif
    notSetup();
    runOnce = false;
  }
  if ( runOnceSer && Serial ) {
    runOnceSer = false;
    Serial.print("Serial online : ");
    Serial.println(millis());
  }
}

uint32_t startSize = 244;
uint32_t growSize = 256;
char dirL[3][4] = {"111", "222", "333"};
char fileL[3][8] = {"aaa", "bbb", "ccc"};
#define BLOCK_SIZE 16
char dataL[4][BLOCK_SIZE + 1] = { "zaaa567890!@#$%^", "zbbbefghijklmnop", "zcccEFGHIJKLMNOP", "zDDdEFGHIJKLMNOP"};
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
    }
  }
}

void MakeNames( char* szRoot ) {
  char szPath[128];
  strcpy( szPath, szRoot );
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
      if ( 32 != myFile.size() )
        Serial.print(" >> NAME REUSED << ");
      Serial.println();
      myFile.close();
    }
  }
}

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
    }
  }
}

// void MakeDeepDirs( "ManyD", 10, 5, 500, 512, [1] );
void MakeDeepDirs( char* szRoot, int numDirs, int numFiles, uint32_t startSize, uint32_t growSize, int compoundGrow ) {
  char szCurPath[256];
  char szPath[256];
  char szFile[128];
  char szTmp[128];

  strcpy( szCurPath, szRoot );
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
      indexedDataWrite( dataL[3], szPath, xx, growSize == 0 );
      xx += growSize * compoundGrow;
    }
  }
}

void indexedDataWrite( char *szBlock, char* szInPath, uint32_t xx, bool addFNum )
{
  static uint32_t gNumFiles = 0;
  static uint32_t gNumBlocks = 0;

  File myFile;
  char writeData[ 2 * BLOCK_SIZE + 10 ];
  char szPath[256];
  gNumFiles++;
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
      sprintf( &writeData[4], ".%4lux%5lX\n", gNumFiles, gNumBlocks );
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
  Serial.print(" end:");
  if ( xx != myFile.size() ) Serial.print(" >> WRONG << ");
  Serial.print(writeData);
  myFile.close();
  if (!DISK.exists(szPath)) Serial.print("\tFile WRITE failed!\n");
}

void showMediaSpace()
{
  Serial.print("\n ========================================== ");
  Serial.print("Media Size=");
  Serial.print(DISK.totalSize());
  Serial.print("\tUsed Size=");
  Serial.println(DISK.usedSize());
#ifdef USB_MTPDISK
  MTP.loop();  //This is mandatory to be placed in the loop code.
#endif
}

uint32_t fTot, totSize;
void printDirectory() {
  fTot = 0, totSize = 0;
  printDirectory(DISK.open("/"), 0);
  Serial.printf("\n%Total %u files of Size %u Bytes\n", fTot, totSize);
  Serial.printf("Bytes Used: %llu, Bytes Total:%llu\n", DISK.usedSize(), DISK.totalSize());
}

void printDirectory(File dir, int numTabs) {
  static char szTmp[100];
  uint64_t fSize = 0;
  uint32_t dCnt = 0, fCnt = 0;
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
      uint32_t cntF = 0;
      {
        snprintf( szTmp, 99, "%s", entry.name());
        int ii = 0;
        while ( szTmp[ii] != 0 && szTmp[ii] != '.' && ii < 99 ) ii++;
        if ( szTmp[ii] == '.' ) {
          ii++;
          cntF = atoi( &szTmp[ii] );
        }
      }
      if ( 0 != cntF ) printDirectoryVerify(entry, numTabs + 1, cntF);
      printDirectory(entry, numTabs + 1);
    } else {
      // files have sizes, directories do not
      Serial.print("\t");
      Serial.println(entry.size(), DEC);
    }
    entry.close();
    //Serial.flush();
    delayMicroseconds(100);
  }
}

void printDirectoryVerify(File dir, int numTabs, int numFiles) {
  static char szTmp[100];
  uint64_t fSize = 0;
  int fCnt = 0;
  uint32_t fErrs = 0;
  if ( 0 == dir ) {
    Serial.printf( "\t>>>\t>>>>> No Dir\n" );
    return;
  }
  while (true) {
    File entry =  dir.openNextFile();
    if (! entry) {        // no more files
      entry.close();
      break;
    }
    if (entry.isDirectory()) {
      entry.close();
      break;
    } else {
      fCnt++; // Will miss count if a #size file is renamed, or replaced with am alternate file not #size
      fSize = entry.size();
      snprintf( szTmp, 99, "%s", entry.name());
      uint32_t cntF = 0;
      if ( '0' >= szTmp[0] || '9' <= szTmp[0] ) // some files are NOT size# named
        cntF = fSize;
      else
        cntF = atoi( szTmp ); // Expected files GENERALLY had #size filenames like 1024.txt
      if ( cntF == fSize ) {
        // Serial.print(".");          if ( !(fCnt % 101) ) Serial.println();
        // TODO Read verify file here
      } else {
        fErrs++;
        Serial.println();
        Serial.print(entry.name());
        Serial.print("\tXXXX\t File Size MISMATCH :");
        Serial.println(cntF);
      }
    }
    if (entry.isDirectory()) {
      entry.close();
      break;
    }
    entry.close();
  }
  if ( numFiles == fCnt && 0 == fErrs )
    Serial.printf("\n  DONE RESULTS GOOD HERE %u Files(s) ", fCnt);
  else {
    Serial.print("\n  DONE RESULTS BAD HERE  \tXXXXXX\t");
    if ( numFiles > fCnt ) {
      Serial.printf("  MISSING %u FILE(S)  ", numFiles - fCnt);
    fErrs++;
    }
    else if ( numFiles < fCnt ) {
      Serial.printf("  %u EXTRA FILE(S)  ", numFiles - fCnt);
    fErrs++;
    }
    if ( 0 != fErrs )
      Serial.printf(" %u File Error(s)  ", fErrs);
  }
}
