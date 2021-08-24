// https://forum.pjrc.com/threads/67989-Teensyduino-1-55-Beta-1?p=286844&viewfull=1#post286844

/*
  LittleFS  datalogger

  This example shows how to log data from three analog sensors
  to an storage device such as a FLASH.

  This example code is in the public domain.
*/
#include <LittleFS.h>
#include <MTP.h>
#if defined(__IMXRT1062__)
// following only as long usb_mtp is not included in cores
#if !__has_include("usb_mtp.h")
#include "usb1_mtp.h"
#endif
#if defined(ARDUINO_TEENSY40) && defined(BUILTIN_SDCARD) // needed untin not corrected in SD.h
#undef BUILTIN_SDCARD
#endif
#else
#ifndef BUILTIN_SDCARD
#define BUILTIN_SDCARD 254
#endif
void usb_mtp_configure(void) {}
#endif

#if USE_EVENTS==1
extern "C" int usb_init_events(void);
#else
int usb_init_events(void) {}
#endif

// LittleFS supports creating file systems (FS) in multiple memory types.  Depending on the
// memory type you want to use you would uncomment one of the following constructors

LittleFS_Program myfs2;  // Used to create FS on QSPI NAND flash chips located on the bottom of the T4.1 such as the W25N01G. for the full list of supported NAND flash see  https://github.com/PaulStoffregen/LittleFS#nand-flash
LittleFS_RAM myfs;  // CAN use either RAM1 or RAM2 as available
#define LFS_BUF_SIZE 410*1024
void *LFS_BUF = (void*)(0x2027ff00 - LFS_BUF_SIZE); // RAM2 Addr :: typically survives Restart/Upload, avoid lower 64KB 0x2020000, upper CrashReport area

File dataFile;  // Specifes that dataFile is of File type

int record_count = 0;
bool write_data = false;
static const uint32_t file_system_size = 1024 * 512;

// Add in MTPD objects
MTPStorage_SD storage;
MTPD       mtpd(&storage);


void setup()
{

  // Open serial communications and wait for port to open:
  Serial.begin(115200);
  while (!Serial) {
    // wait for serial port to connect.
  }
  Serial.println("\n" __FILE__ " " __DATE__ " " __TIME__);

  Serial.print("Initializing LittleFS ...");

  // see if the Flash is present and can be initialized:
  if (!myfs2.begin(file_system_size)) {
    Serial.printf("Error starting %s\n", "PROGMEM FLASH");
    while (1) {
      // Error, so don't do anything more - stay stuck here
    }
  }
  if (!myfs.begin(LFS_BUF, LFS_BUF_SIZE)) {
    Serial.printf("Error starting %s\n", "DMAMEM RAM");
    while ( 1 );
  }

#if USE_EVENTS==1
  usb_init_events();
#endif
#if !__has_include("usb_mtp.h")
  usb_mtp_configure();
#endif

  storage.addFilesystem(myfs2, "Program");
  storage.addFilesystem(myfs, "DMAMEM");


  Serial.println("LittleFS initialized.");

  menu();

}

void loop()
{
  if ( Serial.available() ) {
    char rr;
    rr = Serial.read();
    switch (rr) {
      case 'l': listFiles(); break;
      case 'e': eraseFiles(); break;
      case 's':
        {
          Serial.println("\nLogging Data!!!");
          write_data = true;   // sets flag to continue to write data until new command is received
          // opens a file or creates a file if not present,  FILE_WRITE will append data to
          // to the file created.
          dataFile = myfs.open("datalog.txt", FILE_WRITE);
          logDataFast();
          logData();
        }
        break;
      case 'x': stopLogging(); break;

      case 'd': dumpLog(); break;
      case '\r':
      case '\n':
      case 'h': menu(); break;
    }
    while (Serial.read() != -1) ; // remove rest of characters.
  }
  else mtpd.loop();

  if (write_data) logData();
}

void logDataFast()
{
  // make a string for assembling the data to log:
  String dataString = "";

  // read three sensors and append to the string:
  for (int analogPin = 0; analogPin < 5; analogPin++) {
    dataString = String(micros());

    // if the file is available, write to it:
    if (dataFile) {
      dataFile.println(dataString);
      // print to the serial port too:
      if ( analogPin > 3 )
        Serial.println(dataString);
      record_count += 1;
    } else {
      // if the file isn't open, pop up an error:
      Serial.println("error opening datalog.txt");
    }
  }
}

void logData()
{
  // make a string for assembling the data to log:
  String dataString = "";

  // read three sensors and append to the string:
  for (int analogPin = 0; analogPin < 3; analogPin++) {
    int sensor = analogRead(analogPin);
    dataString += String(sensor);
    if (analogPin < 2) {
      dataString += ",";
    }
  }

  // if the file is available, write to it:
  if (dataFile) {
    dataFile.println(dataString);
    // print to the serial port too:
    Serial.println(dataString);
    record_count += 1;
  } else {
    // if the file isn't open, pop up an error:
    Serial.println("error opening datalog.txt");
  }
  delay(100); // run at a reasonable not-too-fast speed for testing
}

void stopLogging()
{
  Serial.println("\nStopped Logging Data!!!");
  write_data = false;
  // Closes the data file.
  dataFile.close();
  Serial.printf("Records written = %d\n", record_count);
  mtpd.send_DeviceResetEvent();
}


void dumpLog()
{
  Serial.println("\nDumping Log!!!");
  // open the file.
  dataFile = myfs.open("datalog.txt");

  // if the file is available, write to it:
  if (dataFile) {
    while (dataFile.available()) {
      Serial.write(dataFile.read());
    }
    dataFile.close();
  }
  // if the file isn't open, pop up an error:
  else {
    Serial.println("error opening datalog.txt");
  }
}

void menu()
{
  Serial.println();
  Serial.println("Menu Options:");
  Serial.println("\tl - List files on disk");
  Serial.println("\te - Erase files on disk");
  Serial.println("\ts - Start Logging data (Restarting logger will append records to existing log)");
  Serial.println("\tx - Stop Logging data");
  Serial.println("\td - Dump Log");
  Serial.println("\th - Menu");
  Serial.println();
}

void listFiles()
{
  Serial.print("\n Space Used = ");
  Serial.println(myfs.usedSize());
  Serial.print("Filesystem Size = ");
  Serial.println(myfs.totalSize());

  printDirectory(myfs);
}

void eraseFiles()
{
  myfs.quickFormat();  // performs a quick format of the created di
  Serial.println("\nFiles erased !");
  mtpd.send_DeviceResetEvent();
}

void printDirectory(FS &fs) {
  Serial.println("Directory\n---------");
  printDirectory(fs.open("/"), 0);
  Serial.println();
}

void printDirectory(File dir, int numSpaces) {
  while (true) {
    File entry = dir.openNextFile();
    if (! entry) {
      //Serial.println("** no more files **");
      break;
    }
    printSpaces(numSpaces);
    Serial.print(entry.name());
    if (entry.isDirectory()) {
      Serial.println("/");
      printDirectory(entry, numSpaces + 2);
    } else {
      // files have sizes, directories do not
      printSpaces(36 - numSpaces - strlen(entry.name()));
      Serial.print("  ");
      Serial.println(entry.size(), DEC);
    }
    entry.close();
  }
}

void printSpaces(int num) {
  for (int i = 0; i < num; i++) {
    Serial.print(" ");
  }
}
