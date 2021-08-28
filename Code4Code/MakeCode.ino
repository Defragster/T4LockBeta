
// IntervalTimer EXEC from loop()
void testAlpha() {
  static int ii = 0, kk = 1;
  //  static int ii = 27, kk = 104;
  int nn, mm = 0;
  while ( mm < kk ) {
    nn = mm + ii;
    if ( a1[nn] != a1[130 + nn] ) errAlpha( " a1 #1 fail ", ii, kk );
    if ( a2[nn] != a2[130 + nn] ) errAlpha( " a2 #1 fail ", ii, kk );
    if ( z1[208 - nn] != z1[312 - nn] ) errAlpha( " z1 #1 fail ", ii, kk );
    if ( z2[208 - nn] != z2[312 - nn] ) errAlpha( " z2 #1 fail ", ii, kk );
    mm++;
  }
  if ( ++kk > 104 ) {
    kk = 1;
    if ( ++ii > 104 ) ii = 0;
  }
#if 0
  if ( errAlpha( NULL, 0, 0 ) )
    Serial.print(" --"); // debug
  else
    Serial.print(" +"); // debug
  Serial.printf("Alpha ii==%d kk==%d\t", ii, kk); // debug
#endif
  digitalToggleFast( LED_BUILTIN );
}

#if defined(USB_DUAL_SERIAL)
char szAlpha[] [32] = { "PROGMEM char a1[] = \n\t\"",
                        "PROGMEM char a2[] = \n\t\"",
                        "PROGMEM char z1[] = \n\t\"",
                        "PROGMEM char z2[] = \n\t\""
                      };

void buildAlpha() {
  int ii, jj;
  char base = 'A';
  for ( ii = 0; ii < 2; ii++ ) {
    SerialUSB1.print( szAlpha[ii] );
    for ( jj = 0; jj < 364; jj++ ) {
      SerialUSB1.print( (char)(base + (jj % 26)) );
      if ( 77 == (jj % 88) )
        SerialUSB1.print( "\"\n\t\"" );
    }
    SerialUSB1.println( "123\";" );
    delayMicroseconds( 200 );
    base = 'a';
  }
  base = 'Z';
  for ( ii = 2; ii < 4; ii++ ) {
    SerialUSB1.print( szAlpha[ii] );
    for ( jj = 0; jj < 364; jj++ ) {
      SerialUSB1.print( (char)(base - (jj % 26)) );
      if ( 77 == (jj % 88) )
        SerialUSB1.print( "\"\n\t\"" );
    }
    SerialUSB1.println( "456\";" );
    delayMicroseconds( 200 );
    base = 'z';
  }
}
/* SAMPLE buildALpha Output:
PROGMEM char a1[] = 
  "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ"
  "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJ"
  "KLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRST"
  "UVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCD"
  "EFGHIJKLMNOPQRSTUVWXYZ123";
PROGMEM char a2[] = 
  "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz"
  "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghij"
  "klmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrst"
  "uvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcd"
  "efghijklmnopqrstuvwxyz123";
PROGMEM char z1[] = 
  "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDCBA"
  "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQ"
  "PONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHG"
  "FEDCBAZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDCBAZYXW"
  "VUTSRQPONMLKJIHGFEDCBA456";
PROGMEM char z2[] = 
  "zyxwvutsrqponmlkjihgfedcbazyxwvutsrqponmlkjihgfedcbazyxwvutsrqponmlkjihgfedcba"
  "zyxwvutsrqponmlkjihgfedcbazyxwvutsrqponmlkjihgfedcbazyxwvutsrqponmlkjihgfedcbazyxwvutsrq"
  "ponmlkjihgfedcbazyxwvutsrqponmlkjihgfedcbazyxwvutsrqponmlkjihgfedcbazyxwvutsrqponmlkjihg"
  "fedcbazyxwvutsrqponmlkjihgfedcbazyxwvutsrqponmlkjihgfedcbazyxwvutsrqponmlkjihgfedcbazyxw"
  "vutsrqponmlkjihgfedcba456";
 */
char varHeader[] =   "char szPi[PI_DIGITS_SZ];";
char FuncHeader[][120] = {
  "DATA_PLACE char szMyPi",
  "[]=\"314159265358979323846264338327950288419716939937510582097494\";",
  "CODE_PLACE uint32_t ThisFunc", // insert f# here
  ""
};
char repeatCode[][120] = {
  "( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { ",
  "  uint32_t outVar = ThisFunc", // insert f# here
  ""
};
char EndFunc[] = "  uint32_t outVar = 0;";
char repeatCode2[][120] = {
  "( inVar, priorPiSum, knownPiSum );",
  "  uint32_t myPi = seePi( PI_DIGITS, szPi );",
  "  if ( strcmp( szPi, szPiDigits ) )",
  "    Serial.printf( \"%cPI FAIL szPiDigits String pi>>%s in %s%c%c\",13, szPi, __FUNCTION__,13,13 );",
  "  if ( strcmp( szPi, szMyPi", // insert f# here
  ""
};

char repeatCode3[][120] = {
  ") )",
  "    Serial.printf( \"%cPI FAIL szMyPi String pi>>%s in %s%c%c\",13, szPi, __FUNCTION__,13,13 );",
  "  if ( myPi == priorPiSum && myPi == *knownPiSum )",
  "    outVar++; ",
  "  else",
  "    Serial.printf( \"%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c\",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );",
  "  return outVar;",
  "}",
  ""
};

void MakeCode( uint32_t repeat ) {
  uint jj;
  uint kk;
  if ( repeat < 2 ) {
    SerialUSB1.println( " !!! \t Must call with repeat of TWO or more! \t !!! " );
    return;
  }
  SerialUSB1.println();
  SerialUSB1.println();
  SerialUSB1.println( varHeader );
  SerialUSB1.println();
  for ( uint ii = 1; ii < repeat; ii++ ) {
    jj = 0;
    SerialUSB1.print( FuncHeader[jj++] );
    SerialUSB1.printf( "%u", ii );
    SerialUSB1.println( FuncHeader[jj++] );
    SerialUSB1.print( FuncHeader[jj++] );

    SerialUSB1.printf( "%u", ii ); // insert f# here
    jj = 0;
    kk = 0;
    while ( repeatCode[jj][0] != 0 ) {
      if ( jj > 0 )
        SerialUSB1.println();
      SerialUSB1.print( repeatCode[jj] );
      jj++;
      kk++;
      delayMicroseconds(10);
    }
    delayMicroseconds(100);
    if ( ii < repeat - 1 )
      SerialUSB1.printf( "%u", ii + 1 );  // insert f#++ here
    else
      SerialUSB1.printf( "%u", 0 ); // insert f# here
    jj = 0;
    while ( repeatCode2[jj][0] != 0 ) {
      if ( jj > 0 )
        SerialUSB1.println();
      SerialUSB1.print( repeatCode2[jj] );
      jj++;
    }

    SerialUSB1.printf( "%u", ii ); // insert f# here
    jj = 0;
    while ( repeatCode3[jj][0] != 0 ) {
      SerialUSB1.println( repeatCode3[jj] );
      jj++;
    }
    SerialUSB1.println();
  }
  delayMicroseconds(100);
  // Terminate list
  SerialUSB1.println( "// Terminate Function Here" );
  jj = 0;
  SerialUSB1.print( FuncHeader[jj++] );
  SerialUSB1.printf( "%u", 0 ); // insert f# ZERO here
  SerialUSB1.println( FuncHeader[jj++] );
  SerialUSB1.print( FuncHeader[jj++] );

  SerialUSB1.printf( "%u", 0 ); // insert f# ZERO here
  jj = 0;
  kk--;
  while ( kk > jj ) {
    SerialUSB1.println( repeatCode[jj] );
    jj++;
    delayMicroseconds(10);
  }
  SerialUSB1.println( EndFunc );
  jj = 1;
  while ( repeatCode2[jj][0] != 0 ) {
    if ( jj > 0 )
      SerialUSB1.println();
    SerialUSB1.print( repeatCode2[jj] );
    jj++;
    delayMicroseconds(10);
  }
  SerialUSB1.printf( "%u", 0 ); // insert f# ZERO here
  jj = 0;
  while ( repeatCode3[jj][0] != 0 ) {
    SerialUSB1.println( repeatCode3[jj] );
    jj++;
  }
  SerialUSB1.println();
}
#endif

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
