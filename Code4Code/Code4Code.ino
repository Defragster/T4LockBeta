// TODO - NEED MORE PROGMEM DATA
// Make unique DATA_PLACE szMyPi#[] ='314...' before each function
// Count cycles used in seePi()

#define PI_DIGITS 15 // sets of 4
#define PI_DIGITS_SZ  (PI_DIGITS*4) + 4 // compare string
#define CODE_PLACE FLASHMEM // as NULL or FLASHMEM 
#define DATA_PLACE PROGMEM // as NULL or PROGMEM 
#define PI_INLINE  inline  // Set to 'inline' for seePi() inline
const char szPiDigits[] = "314159265358979323846264338327950288419716939937510582097494"; // 60 digits ONLY for PI_DIGITS 15
const uint32_t sumPi60dig = 75967;
// DEBUG TEST
//const char szPiDigits[] = "31415926535897932384626433832795028841971693993751058209749"; // 60 digits ONLY for PI_DIGITS 15
//const uint32_t sumPi60dig = 42; // bugbug 75967;

uint32_t time_now;
uint32_t piCycles;
void setup() {
  Serial.begin(115200);
  while (!Serial && millis() < 2500 );
  if ( CrashReport) Serial.print( CrashReport);
  Serial.println("\n" __FILE__ " " __DATE__ " " __TIME__);
  isEncrypt();
  static char szPi[PI_DIGITS_SZ];

  uint32_t piTime;
  uint32_t theCount;
  piCycles = 0;
  piTime = micros();
  theCount = ThisFunc1( 0, seePi( PI_DIGITS, szPi ), &sumPi60dig );
  Serial.printf( "Completed CASCADE Count %lu\t", theCount );
  piTime = micros() - piTime;
  Serial.printf("Cascading took %lu us [%lu piCycles] : net %lu\n", piTime, piCycles, piTime - piCycles / 600);
  piCycles = 0;
  piTime = micros();
  int seePiStart = seePi( PI_DIGITS, szPi );
  while ( 0 < theCount ) {
    ThisFunc0( 0, seePiStart, &sumPi60dig );
    theCount--;
  }
  piTime = micros() - piTime;
  Serial.printf("Direct calls took %lu us [%lu piCycles] : net %lu\n\n", piTime, piCycles, piTime - piCycles / 600);
  time_now = millis();
  seePi( 200, NULL );
#if defined(USB_DUAL_SERIAL)
  MakeCode( 2000 );
#endif
}

void loop() {
  static char szPi[PI_DIGITS_SZ];
  //float testTemp = tempmonGetTemp() - myTemp;
  Serial.print((millis() - time_now) * 0.00001667, 4); Serial.print(", ");
  Serial.println(tempmonGetTemp(), 2);
  delay(500);
  if ( !Serial.available() ) {
    uint32_t piTime;
    uint32_t theCount;
    piCycles = 0;
    piTime = micros();
    theCount = ThisFunc1( 0, seePi( PI_DIGITS, szPi ), &sumPi60dig );
    Serial.printf( "Completed CASCADE Count %lu\t", theCount );
    piTime = micros() - piTime;
    Serial.printf("Cascading took %lu us [%lu piCycles] : net %lu\n", piTime, piCycles, piTime - piCycles / 600);
    piCycles = 0;
    piTime = micros();
    int seePiStart = seePi( PI_DIGITS, szPi );
    while ( 0 < theCount ) {
      ThisFunc0( 0, seePiStart, &sumPi60dig );
      theCount--;
    }
    piTime = micros() - piTime;
    Serial.printf("Direct calls took %lu us [%lu piCycles] : net %lu\n\n", piTime, piCycles, piTime - piCycles / 600);
    delay(5000);
  }
  if ( Serial.available() ) Serial.read();
}

uint16_t piComp[] = {3141, 5926, 5358, 9793, 2384, 6264, 3383, 2795, 288, 4197, 1693, 9937, 5105, 8209, 7494, 4592, 3078, 1640, 6286, 2089, 9862, 8034, 8253, 4211, 7067, 9821, 4808, 6513, 2823, 664, 7093, 8446, 955, 582, 2317, 2535, 9408, 1284, 8111, 7450, 2841, 270, 1938, 5211, 555, 9644, 6229, 4895, 4930, 3819, 6442, 8810, 9756, 6593, 3446, 1284, 7564, 8233, 7867, 8316, 5271, 2019, 914, 5648, 5669, 2346, 348, 6104, 5432, 6648, 2133, 9360, 7260, 2491, 4127, 3724, 5870, 660, 6315, 5881, 7488, 1520, 9209, 6282, 9254, 917, 1536, 4367, 8925, 9036, 11, 3305, 3054, 8820, 4665, 2138, 4146, 9519, 4151, 1609, 4330, 5727, 365, 7595, 9195, 3092, 1861, 1738, 1932, 6117, 9310, 5118, 5480, 7446, 2379, 9627, 4956, 7351, 8857, 5272, 4891, 2279, 3818, 3011, 9491, 2983, 3673, 3624, 4065, 6643, 860, 2139, 4946, 3952, 2473, 7190, 7021, 7986, 943, 7027, 7053, 9217, 1762, 9317, 6752, 3846, 7481, 8467, 6694, 513, 2000, 5681, 2714, 5263, 5608, 2778, 5771, 3427, 5778, 9609, 1736, 3717, 8721, 4684, 4090, 1224, 9534, 3014, 6549, 5853, 7105, 792, 2796, 8925, 8923, 5420, 1995, 6112, 1290, 2196, 864, 344, 1815, 9813, 6297, 7477, 1309, 9605, 1870, 7211, 3499, 9999, 8372, 9780, 4995, 1059, 7317, 3281, 6096, 3185 };
// https://crypto.stanford.edu/pbc/notes/pi/code.html // Calc Pi to 800 digits

int r[2800 + 1];
PI_INLINE int seePi( uint maxDigits, char *szPi ) {
  int i, k, b, d;
  int c = 0;
  //uint32_t piTime;
  uint32_t piSum = 0;
  uint jj = 0, vv;
  uint szC = 0;
  uint32_t nowCycles = ARM_DWT_CYCCNT;
  //piTime = micros();
  for (i = 0; i < 2800; i++) {
    r[i] = 2000;
  }

  for (k = 2800; k > 0; k -= 14) {
    d = 0;
    i = k;
    for (;;) {
      d += r[i] * 10000;
      b = 2 * i - 1;
      r[i] = d % b;
      d /= b;
      i--;
      if (i == 0) break;
      d *= i;
    }
    // Serial.printf("%.4d,", c + d / 10000);
    if ( NULL != szPi )
      szC += sprintf( &szPi[szC], "%.4d", c + d / 10000);
    vv = c + d / 10000;
    piSum += vv;
    if ( vv != piComp[jj++] ) Serial.printf("\nmismatch at %lu : %lu != %lu \n", jj , vv, piComp[jj - 1]);
    if ( maxDigits == jj ) break;
    c = d % 10000;
  }
  //piTime = micros() - piTime;
  // Serial.printf("\n\tdigit Sum = %lu in %lu us\n", piSum, piTime);
  nowCycles = ARM_DWT_CYCCNT - nowCycles;
  piCycles += nowCycles;
  return piSum;
}

// https://clickcalculators.com/pi-calculator/800
/*
  Serial.printf( "RAW TEST\n");
  int a = 10000, b = 0, c = 2800, d, e = 0, f[2801], g;
  uint32_t piSum = 0;
  uint32_t piTime = micros();
  for (; b - c;)f[b++] = a / 5;
  for (; d = 0, g = c * 2; c -= 14, Serial.printf("%.4d,", e + d / a), piSum += e + d / a, e = d % a)
    for (b = c; d += f[b] * a, f[b] = d % --g, d /= g--, --b; d *= b);
  piTime = micros() - piTime;
  Serial.printf("\nRAW\tdigit Sum = %lu in %lu us\n", piSum, piTime);
*/
// 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679821480865132823066470938446095505822317253594081284811174502841027019385211055596446229489549303819644288109756659334461284
// 756482337867831652712019091456485669234603486104543266482133936072602491412737245870066063155881748815209209628292540917153643678925903600113305305488204665213841469519415116094330572703657595919530921861173819326117931051185
// 480744623799627495673518857527248912279381830119491298336733624406566430860213949463952247371907021798609437027705392171762931767523846748184676694051320005681271452635608277857713427577896091736371787214684409012249534301465
// 495853710507922796892589235420199561121290219608640344181598136297747713099605187072113499999983729780499510597317328160963185

PROGMEM char title_text[] = "Verify secure code is running properly";

FLASHMEM void title_function() {
  Serial.println( title_text );
  Serial.println();
}

extern "C" uint32_t _sdata, _edata, _sdataload; /* special linker symbols */
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
    Serial.println("Pass: csf is PJRC");
  } else {
    Serial.println("Fail: csf not PJRC");
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
  } else {
    Serial.print("Secure mode NOT SET :: Fuses == 0x");
    ok--;
  }
  Serial.println( HW_OCOTP_CFG5, HEX );

  Serial.println();
  if (0 == ok) Serial.println("All Tests Passed.  :-)");
  else printf(" %d Tests failed.  :-(", -ok);
  return ok;
}

/* Prototype code for MakeCode - out of date
  // start Time - call  ThisFunc00001(1, ...)
  // #define whatMem as NULL or FLASHMEM
  // Put this code in strings and %5d the func #'s to loop and create code
  // Repeat with same code recursive single func that will cache

  CODE_PLACE uint32_t ThisFunc00001( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) {
  static char szPi[PI_DIGITS_SZ];
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  // Serial.printf( "\npi>>%s\n\n", szPi );
  uint32_t outVar = ThisFunc00000( inVar, priorPiSum, knownPiSum );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "\nPI FAIL String pi>>%s in %s\n\n", szPi, __FUNCTION__ );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++;
  else
    Serial.printf( "\nPI FAIL pi SUMS >>%lu %lu %lu in %s\n\n", myPi, priorPiSum, *knownPiSum, __FUNCTION__ );
  return outVar;
  }

  // FINAL CALL
  CODE_PLACE uint32_t ThisFunc00000( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) {
  static char szPi[PI_DIGITS_SZ];
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  // Serial.printf( "\npi>>%s\n\n", szPi );
  uint32_t outVar = 0; //= ThisFunc00002( inVar, priorPiSum, knownPiSum );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "\nPI FAIL String pi>>%s in %s\n\n", szPi, __FUNCTION__ );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++;
  else
    Serial.printf( "\nPI FAIL pi SUMS >>%lu %lu %lu in %s\n\n", myPi, priorPiSum, *knownPiSum, __FUNCTION__ );
  return outVar;
  }
*/
