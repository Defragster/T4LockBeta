// https://forum.pjrc.com/threads/67989-Teensyduino-1-55-Beta-1?p=287085&viewfull=1#post287085
char szTeensy[24];

void setup() {
  Serial.begin(115200);
  while (!Serial && millis() < 2500 );
  if ( CrashReport) Serial.print( CrashReport);
  Serial.println("\n" __FILE__ " " __DATE__ " " __TIME__);
  isEncrypt();
  Serial.println( szTeensy );
}
uint32_t lower_init = 2;
uint32_t higher_init = 6000000;
uint32_t time_now = millis();
int noSpew = 1; // 0 to show primes, 1 for noSpew
void loop() {
  uint32_t lower = lower_init;
  int flag, ii = 0;
  Serial.print((millis() - time_now) * 0.00001667, 4); Serial.print(", ");
  Serial.println(tempmonGetTemp(), 2);
  while ( lower < higher_init)
  {
    flag = noSpew;
    if ( !(lower % 2) ) lower++;
    uint32_t upper = sqrt(lower);
    for ( uint32_t x = 3; x <= upper; x += 2)
    {
      if ( lower % x == 0)
      {
        flag = 1;
        break;
      }
    }
    if ( flag == 0) {
      Serial.printf("%d \t", lower);
      if ( ++ii > 16 ) {
        Serial.print("\n  "  );
        ii = 0;
        delay(10);
      }
    }
    if ( Serial.available() ) {
      noSpew = !noSpew;
      while ( Serial.available() ) Serial.read();
      Serial.println( szTeensy );
      break;
    }
    lower += 2;
  }
  if ( !noSpew ) Serial.println( szTeensy );
  if ( Serial.available() ) {
    noSpew = !noSpew;
    while ( Serial.available() ) Serial.read();
  }
}


extern "C" uint32_t _sdata, _edata, _sdataload; /* special linker symbols */
extern const uint32_t hab_csf[]; // placeholder for HAB signature
PROGMEM char title_text[] = "Verify secure code is running properly";
FLASHMEM int isEncrypt() {
  int ok = 0;
  Serial.println( title_text );
  Serial.println();
  char buf[11];
  uint32_t i, num;

  num = HW_OCOTP_MAC0 & 0xFFFFFF;
  // add extra zero to work around OS-X CDC-ACM driver bug
  if (num < 10000000) num = num * 10;
  ultoa(num, buf, 10);
  for (i = 0; i < 10; i++) {
    char c = buf[i];
    if (!c) break;
    szTeensy[i] = c;
  }
  szTeensy[i] = 0;

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

  uint32_t title_address = ((uint32_t)&isEncrypt) & ~1;
  if (title_address >= begin_address && title_address < end_address) {
    Serial.println("Pass: isEncrypt() is within encrypted region");
  } else {
    Serial.println("Fail: isEncrypt() is not in encrypted region");
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
    Serial.println("Pass: csf is PJRC");
    strcat( szTeensy, " ENC" );
  } else {
    Serial.println("Fail: csf not PJRC");
    strcat( szTeensy, " nor" );
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
    strcat( szTeensy, " SM:" );
  } else {
    Serial.print("Secure mode NOT SET :: Fuses == 0x");
    strcat( szTeensy, " ns:" );
    ok--;
  }
  i = F_CPU_ACTUAL / 1000000;
  sprintf( &szTeensy[15], " @%lu", i );
  Serial.println( HW_OCOTP_CFG5, HEX );

  Serial.println();
  if (0 == ok) Serial.println("All Tests Passed.  :-)");
  else printf(" %d Tests failed.  :-(", -ok);
  return ok;
}
