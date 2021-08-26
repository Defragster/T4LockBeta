


char FuncHeader[][120] = {
  "DATA_PLACE char szMyPi",
  "[]=\"314159265358979323846264338327950288419716939937510582097494\";",
  "CODE_PLACE uint32_t ThisFunc", // insert f# here
  ""
};
char repeatCode[][120] = {
  "( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { ",
  "  static char szPi[PI_DIGITS_SZ];",
  "  uint32_t myPi = seePi( PI_DIGITS, szPi );",
  "  uint32_t outVar = ThisFunc", // insert f# here
  ""
};
char EndFunc[] = "  uint32_t outVar = 0;";
char repeatCode2[][120] = {
  "( inVar, priorPiSum, knownPiSum );",
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
