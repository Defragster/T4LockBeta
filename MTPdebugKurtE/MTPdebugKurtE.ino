// https://forum.pjrc.com/threads/70466-MTP-or-SdFAT-does-not-enumerate-all-files-on-SD-card?p=307808&viewfull=1#post307808
#include <SD.h>
#include <MTP_Teensy.h>

#define CS_SD BUILTIN_SDCARD  // Works on T_3.6 and T_4.1

#ifdef ARDUINO_TEENSY41
extern "C" uint8_t external_psram_size;
#endif

class RAMStream : public Stream {
public:
  // overrides for Stream
  virtual int available() { return (tail_ - head_); }
  virtual int read() { return (tail_ != head_) ? buffer_[head_++] : -1; }
  virtual int peek() { return (tail_ != head_) ? buffer_[head_] : -1; }

  // overrides for Print
  virtual size_t write(uint8_t b) {
    if (tail_ < buffer_size) {
      buffer_[tail_++] = b;
      return 1;
    }
    return 0;
  }

  enum { BUFFER_SIZE = 32768 };
//  uint8_t buffer_[BUFFER_SIZE];
  uint8_t *buffer_ = nullptr;
  uint32_t buffer_size = BUFFER_SIZE;
  uint32_t head_ = 0;
  uint32_t tail_ = 0;
};

RAMStream rstream;

//#define CS_SD 10  // Works on SPI with this CS pin
void setup()
{

  // see if external memory
#ifdef ARDUINO_TEENSY41
  if (external_psram_size) {
    rstream.buffer_size = 2097152;
    rstream.buffer_ = (uint8_t*)extmem_malloc(rstream.buffer_size);
    Serial.printf("extmem_malloc %p %u %u\n", rstream.buffer_, rstream.buffer_size, external_psram_size);
  }
#endif
  if (!rstream.buffer_) {
    rstream.buffer_ = (uint8_t*)malloc(rstream.buffer_size);
    Serial.printf("malloc %p %u\n", rstream.buffer_, rstream.buffer_size);
  }


  // mandatory to begin the MTP session.
  //MTP.begin();

  Serial.begin(9600);
  while (!Serial && millis() < 5000) {
    // wait for serial port to connect.
  }

  // Add SD Card
  if (SD.begin(CS_SD)) {
    MTP.addFilesystem(SD, "SD Card");
    Serial.println("Added SD card using built in SDIO, or given SPI CS");
  } else {
    Serial.println("No SD Card");
  }
  Serial.println("\nSetup done");
}


uint8_t print_buffer[256];
void print_capture_data() {

  Serial.printf("Capture size: %d out of %d PS:%u\n", rstream.available(), rstream.buffer_size, external_psram_size);

  int avail;
  while ((avail = rstream.available())) {
    if (avail > (int)sizeof(print_buffer)) avail = sizeof(print_buffer);

    int avail_for_write = Serial.availableForWrite();
    if (avail_for_write < avail) avail = avail_for_write;
    rstream.readBytes(print_buffer, avail);
    Serial.write(print_buffer, avail);

  } 


  int ch;
  while ((ch = rstream.read()) != -1)
    Serial.write(ch);
}

void loop() {
  MTP.loop();  //This is mandatory to be placed in the loop code.

  if (Serial.available()) {
    uint8_t command = Serial.read();
    switch (command) {
    case 'c':
      // start capture debug info
      rstream.head_ = 0;
      rstream.tail_ = 0;
      MTP.PrintStream(&rstream); // Setup which stream to use...
      Serial.println("Capturing MTP debug output");
      break;
    case 's':
      Serial.println("Stop Captured data");
      rstream.head_ = 0;
      rstream.tail_ = 0;
      break;
    case 'p':
      MTP.PrintStream(&Serial); // Setup which stream to use...
      Serial.println("Print Captured data");
      print_capture_data();
      rstream.head_ = 0;
      rstream.tail_ = 0;
      break;
    case 'd':
      // first dump list of storages:
      {
        uint32_t fsCount = MTP.getFilesystemCount();
        Serial.printf("\nDump Storage list(%u)\n", fsCount);
        for (uint32_t ii = 0; ii < fsCount; ii++) {
          Serial.printf("store:%u storage:%x name:%s fs:%x\n", ii,
                        MTP.Store2Storage(ii), MTP.getFilesystemNameByIndex(ii),
                        (uint32_t)MTP.getFilesystemNameByIndex(ii));
        }
        Serial.println("\nDump Index List");
        MTP.storage()->dumpIndexList();
      }
      break;
    default:  
      Serial.println("Menu");
      Serial.println("\t c - start capture debug data");
      Serial.println("\t p - Stop capture and print");
      Serial.println("\t s - stop capture and discard");
      Serial.println("\t d - dump storage info");
    }
    while (Serial.read() != -1);
  }

}
