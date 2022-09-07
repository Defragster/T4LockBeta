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


char szPi[PI_DIGITS_SZ];

DATA_PLACE char szMyPi1[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc1( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc2( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi1) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi2[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc2( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc3( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi2) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi3[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc3( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc4( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi3) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi4[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc4( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc5( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi4) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi5[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc5( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc6( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi5) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi6[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc6( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc7( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi6) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi7[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc7( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc8( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi7) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi8[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc8( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc9( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi8) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi9[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc9( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc10( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi9) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi10[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc10( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc11( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi10) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi11[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc11( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc12( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi11) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi12[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc12( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc13( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi12) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi13[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc13( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc14( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi13) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi14[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc14( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc15( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi14) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi15[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc15( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc16( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi15) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi16[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc16( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc17( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi16) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi17[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc17( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc18( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi17) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi18[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc18( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc19( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi18) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi19[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc19( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc20( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi19) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi20[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc20( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc21( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi20) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi21[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc21( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc22( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi21) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi22[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc22( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc23( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi22) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi23[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc23( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc24( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi23) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi24[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc24( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc25( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi24) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi25[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc25( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc26( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi25) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi26[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc26( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc27( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi26) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi27[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc27( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc28( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi27) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi28[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc28( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc29( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi28) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi29[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc29( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc30( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi29) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi30[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc30( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc31( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi30) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi31[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc31( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc32( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi31) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi32[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc32( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc33( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi32) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi33[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc33( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc34( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi33) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi34[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc34( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc35( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi34) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi35[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc35( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc36( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi35) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi36[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc36( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc37( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi36) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi37[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc37( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc38( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi37) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi38[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc38( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc39( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi38) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi39[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc39( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc40( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi39) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi40[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc40( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc41( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi40) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi41[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc41( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc42( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi41) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi42[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc42( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc43( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi42) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi43[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc43( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc44( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi43) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi44[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc44( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc45( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi44) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi45[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc45( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc46( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi45) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi46[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc46( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc47( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi46) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi47[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc47( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc48( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi47) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi48[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc48( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc49( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi48) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi49[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc49( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc50( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi49) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi50[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc50( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc51( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi50) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi51[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc51( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc52( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi51) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi52[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc52( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc53( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi52) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi53[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc53( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc54( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi53) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi54[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc54( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc55( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi54) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi55[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc55( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc56( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi55) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi56[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc56( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc57( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi56) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi57[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc57( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc58( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi57) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi58[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc58( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc59( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi58) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi59[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc59( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc60( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi59) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi60[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc60( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc61( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi60) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi61[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc61( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc62( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi61) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi62[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc62( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc63( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi62) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi63[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc63( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc64( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi63) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi64[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc64( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc65( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi64) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi65[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc65( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc66( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi65) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi66[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc66( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc67( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi66) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi67[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc67( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc68( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi67) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi68[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc68( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc69( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi68) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi69[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc69( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc70( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi69) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi70[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc70( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc71( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi70) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi71[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc71( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc72( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi71) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi72[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc72( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc73( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi72) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi73[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc73( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc74( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi73) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi74[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc74( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc75( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi74) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi75[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc75( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc76( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi75) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi76[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc76( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc77( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi76) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi77[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc77( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc78( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi77) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi78[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc78( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc79( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi78) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi79[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc79( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc80( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi79) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi80[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc80( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc81( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi80) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi81[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc81( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc82( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi81) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi82[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc82( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc83( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi82) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi83[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc83( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc84( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi83) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi84[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc84( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc85( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi84) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi85[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc85( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc86( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi85) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi86[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc86( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc87( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi86) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi87[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc87( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc88( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi87) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi88[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc88( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc89( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi88) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi89[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc89( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc90( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi89) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi90[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc90( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc91( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi90) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi91[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc91( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc92( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi91) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi92[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc92( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc93( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi92) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi93[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc93( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc94( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi93) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi94[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc94( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc95( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi94) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi95[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc95( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc96( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi95) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi96[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc96( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc97( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi96) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi97[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc97( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc98( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi97) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi98[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc98( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc99( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi98) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi99[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc99( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc100( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi99) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi100[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc100( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc101( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi100) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi101[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc101( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc102( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi101) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi102[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc102( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc103( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi102) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi103[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc103( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc104( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi103) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi104[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc104( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc105( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi104) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi105[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc105( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc106( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi105) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi106[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc106( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc107( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi106) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi107[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc107( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc108( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi107) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi108[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc108( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc109( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi108) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi109[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc109( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc110( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi109) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi110[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc110( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc111( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi110) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi111[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc111( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc112( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi111) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi112[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc112( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc113( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi112) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi113[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc113( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc114( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi113) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi114[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc114( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc115( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi114) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi115[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc115( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc116( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi115) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi116[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc116( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc117( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi116) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi117[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc117( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc118( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi117) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi118[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc118( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc119( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi118) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi119[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc119( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc120( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi119) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi120[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc120( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc121( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi120) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi121[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc121( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc122( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi121) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi122[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc122( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc123( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi122) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi123[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc123( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc124( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi123) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi124[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc124( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc125( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi124) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi125[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc125( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc126( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi125) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi126[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc126( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc127( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi126) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi127[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc127( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc128( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi127) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi128[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc128( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc129( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi128) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi129[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc129( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc130( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi129) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi130[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc130( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc131( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi130) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi131[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc131( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc132( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi131) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi132[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc132( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc133( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi132) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi133[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc133( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc134( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi133) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi134[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc134( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc135( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi134) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi135[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc135( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc136( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi135) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi136[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc136( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc137( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi136) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi137[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc137( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc138( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi137) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi138[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc138( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc139( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi138) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi139[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc139( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc140( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi139) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi140[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc140( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc141( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi140) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi141[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc141( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc142( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi141) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi142[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc142( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc143( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi142) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi143[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc143( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc144( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi143) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi144[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc144( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc145( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi144) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi145[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc145( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc146( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi145) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi146[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc146( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc147( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi146) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi147[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc147( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc148( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi147) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi148[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc148( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc149( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi148) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi149[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc149( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc150( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi149) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi150[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc150( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc151( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi150) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi151[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc151( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc152( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi151) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi152[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc152( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc153( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi152) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi153[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc153( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc154( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi153) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi154[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc154( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc155( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi154) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi155[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc155( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc156( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi155) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi156[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc156( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc157( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi156) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi157[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc157( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc158( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi157) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi158[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc158( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc159( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi158) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi159[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc159( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc160( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi159) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi160[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc160( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc161( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi160) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi161[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc161( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc162( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi161) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi162[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc162( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc163( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi162) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi163[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc163( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc164( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi163) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi164[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc164( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc165( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi164) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi165[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc165( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc166( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi165) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi166[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc166( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc167( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi166) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi167[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc167( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc168( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi167) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi168[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc168( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc169( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi168) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi169[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc169( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc170( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi169) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi170[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc170( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc171( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi170) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi171[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc171( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc172( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi171) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi172[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc172( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc173( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi172) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi173[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc173( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc174( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi173) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi174[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc174( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc175( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi174) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi175[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc175( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc176( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi175) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi176[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc176( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc177( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi176) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi177[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc177( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc178( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi177) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi178[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc178( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc179( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi178) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi179[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc179( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc180( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi179) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi180[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc180( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc181( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi180) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi181[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc181( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc182( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi181) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi182[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc182( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc183( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi182) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi183[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc183( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc184( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi183) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi184[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc184( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc185( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi184) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi185[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc185( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc186( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi185) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi186[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc186( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc187( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi186) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi187[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc187( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc188( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi187) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi188[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc188( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc189( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi188) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi189[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc189( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc190( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi189) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi190[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc190( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc191( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi190) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi191[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc191( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc192( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi191) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi192[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc192( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc193( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi192) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi193[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc193( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc194( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi193) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi194[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc194( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc195( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi194) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi195[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc195( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc196( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi195) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi196[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc196( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc197( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi196) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi197[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc197( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc198( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi197) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi198[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc198( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc199( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi198) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi199[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc199( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc200( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi199) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi200[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc200( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc201( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi200) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi201[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc201( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc202( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi201) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi202[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc202( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc203( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi202) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi203[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc203( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc204( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi203) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi204[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc204( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc205( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi204) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi205[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc205( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc206( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi205) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi206[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc206( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc207( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi206) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi207[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc207( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc208( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi207) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi208[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc208( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc209( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi208) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi209[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc209( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc210( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi209) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi210[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc210( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc211( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi210) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi211[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc211( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc212( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi211) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi212[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc212( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc213( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi212) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi213[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc213( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc214( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi213) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi214[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc214( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc215( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi214) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi215[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc215( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc216( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi215) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi216[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc216( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc217( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi216) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi217[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc217( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc218( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi217) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi218[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc218( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc219( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi218) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi219[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc219( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc220( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi219) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi220[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc220( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc221( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi220) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi221[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc221( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc222( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi221) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi222[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc222( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc223( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi222) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi223[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc223( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc224( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi223) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi224[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc224( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc225( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi224) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi225[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc225( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc226( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi225) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi226[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc226( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc227( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi226) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi227[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc227( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc228( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi227) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi228[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc228( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc229( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi228) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi229[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc229( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc230( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi229) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi230[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc230( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc231( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi230) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi231[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc231( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc232( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi231) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi232[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc232( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc233( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi232) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi233[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc233( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc234( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi233) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi234[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc234( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc235( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi234) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi235[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc235( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc236( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi235) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi236[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc236( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc237( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi236) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi237[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc237( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc238( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi237) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi238[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc238( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc239( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi238) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi239[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc239( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc240( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi239) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi240[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc240( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc241( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi240) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi241[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc241( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc242( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi241) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi242[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc242( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc243( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi242) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi243[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc243( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc244( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi243) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi244[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc244( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc245( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi244) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi245[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc245( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc246( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi245) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi246[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc246( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc247( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi246) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi247[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc247( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc248( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi247) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi248[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc248( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc249( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi248) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi249[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc249( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc250( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi249) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi250[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc250( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc251( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi250) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi251[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc251( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc252( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi251) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi252[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc252( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc253( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi252) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi253[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc253( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc254( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi253) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi254[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc254( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc255( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi254) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi255[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc255( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc256( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi255) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi256[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc256( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc257( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi256) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi257[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc257( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc258( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi257) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi258[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc258( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc259( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi258) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi259[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc259( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc260( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi259) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi260[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc260( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc261( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi260) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi261[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc261( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc262( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi261) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi262[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc262( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc263( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi262) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi263[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc263( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc264( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi263) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi264[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc264( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc265( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi264) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi265[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc265( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc266( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi265) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi266[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc266( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc267( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi266) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi267[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc267( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc268( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi267) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi268[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc268( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc269( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi268) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi269[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc269( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc270( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi269) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi270[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc270( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc271( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi270) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi271[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc271( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc272( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi271) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi272[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc272( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc273( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi272) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi273[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc273( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc274( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi273) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi274[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc274( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc275( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi274) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi275[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc275( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc276( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi275) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi276[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc276( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc277( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi276) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi277[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc277( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc278( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi277) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi278[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc278( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc279( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi278) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi279[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc279( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc280( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi279) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi280[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc280( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc281( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi280) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi281[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc281( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc282( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi281) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi282[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc282( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc283( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi282) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi283[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc283( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc284( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi283) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi284[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc284( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc285( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi284) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi285[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc285( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc286( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi285) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi286[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc286( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc287( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi286) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi287[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc287( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc288( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi287) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi288[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc288( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc289( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi288) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi289[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc289( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc290( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi289) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi290[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc290( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc291( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi290) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi291[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc291( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc292( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi291) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi292[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc292( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc293( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi292) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi293[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc293( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc294( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi293) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi294[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc294( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc295( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi294) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi295[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc295( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc296( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi295) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi296[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc296( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc297( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi296) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi297[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc297( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc298( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi297) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi298[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc298( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc299( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi298) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi299[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc299( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc300( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi299) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi300[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc300( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc301( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi300) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi301[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc301( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc302( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi301) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi302[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc302( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc303( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi302) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi303[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc303( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc304( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi303) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi304[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc304( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc305( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi304) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi305[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc305( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc306( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi305) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi306[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc306( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc307( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi306) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi307[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc307( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc308( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi307) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi308[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc308( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc309( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi308) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi309[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc309( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc310( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi309) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi310[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc310( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc311( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi310) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi311[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc311( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc312( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi311) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi312[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc312( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc313( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi312) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi313[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc313( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc314( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi313) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi314[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc314( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc315( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi314) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi315[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc315( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc316( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi315) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi316[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc316( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc317( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi316) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi317[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc317( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc318( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi317) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi318[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc318( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc319( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi318) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi319[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc319( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc320( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi319) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi320[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc320( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc321( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi320) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi321[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc321( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc322( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi321) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi322[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc322( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc323( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi322) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi323[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc323( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc324( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi323) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi324[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc324( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc325( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi324) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi325[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc325( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc326( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi325) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi326[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc326( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc327( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi326) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi327[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc327( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc328( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi327) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi328[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc328( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc329( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi328) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi329[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc329( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc330( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi329) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi330[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc330( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc331( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi330) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi331[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc331( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc332( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi331) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi332[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc332( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc333( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi332) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi333[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc333( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc334( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi333) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi334[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc334( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc335( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi334) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi335[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc335( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc336( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi335) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi336[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc336( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc337( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi336) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi337[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc337( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc338( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi337) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi338[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc338( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc339( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi338) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi339[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc339( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc340( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi339) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi340[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc340( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc341( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi340) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi341[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc341( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc342( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi341) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi342[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc342( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc343( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi342) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi343[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc343( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc344( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi343) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi344[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc344( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc345( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi344) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi345[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc345( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc346( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi345) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi346[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc346( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc347( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi346) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi347[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc347( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc348( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi347) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi348[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc348( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc349( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi348) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi349[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc349( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc350( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi349) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi350[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc350( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc351( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi350) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi351[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc351( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc352( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi351) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi352[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc352( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc353( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi352) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi353[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc353( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc354( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi353) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi354[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc354( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc355( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi354) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi355[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc355( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc356( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi355) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi356[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc356( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc357( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi356) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi357[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc357( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc358( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi357) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi358[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc358( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc359( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi358) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi359[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc359( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc360( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi359) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi360[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc360( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc361( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi360) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi361[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc361( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc362( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi361) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi362[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc362( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc363( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi362) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi363[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc363( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc364( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi363) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi364[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc364( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc365( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi364) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi365[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc365( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc366( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi365) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi366[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc366( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc367( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi366) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi367[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc367( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc368( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi367) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi368[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc368( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc369( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi368) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi369[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc369( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc370( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi369) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi370[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc370( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc371( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi370) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi371[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc371( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc372( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi371) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi372[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc372( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc373( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi372) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi373[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc373( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc374( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi373) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi374[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc374( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc375( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi374) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi375[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc375( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc376( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi375) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi376[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc376( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc377( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi376) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi377[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc377( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc378( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi377) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi378[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc378( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc379( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi378) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi379[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc379( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc380( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi379) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi380[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc380( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc381( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi380) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi381[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc381( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc382( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi381) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi382[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc382( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc383( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi382) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi383[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc383( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc384( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi383) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi384[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc384( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc385( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi384) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi385[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc385( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc386( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi385) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi386[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc386( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc387( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi386) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi387[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc387( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc388( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi387) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi388[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc388( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc389( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi388) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi389[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc389( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc390( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi389) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi390[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc390( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc391( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi390) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi391[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc391( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc392( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi391) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi392[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc392( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc393( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi392) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi393[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc393( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc394( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi393) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi394[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc394( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc395( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi394) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi395[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc395( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc396( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi395) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi396[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc396( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc397( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi396) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi397[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc397( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc398( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi397) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi398[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc398( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc399( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi398) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi399[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc399( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc400( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi399) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi400[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc400( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc401( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi400) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi401[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc401( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc402( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi401) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi402[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc402( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc403( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi402) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi403[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc403( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc404( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi403) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi404[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc404( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc405( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi404) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi405[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc405( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc406( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi405) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi406[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc406( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc407( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi406) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi407[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc407( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc408( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi407) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi408[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc408( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc409( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi408) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi409[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc409( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc410( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi409) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi410[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc410( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc411( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi410) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi411[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc411( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc412( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi411) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi412[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc412( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc413( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi412) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi413[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc413( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc414( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi413) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi414[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc414( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc415( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi414) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi415[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc415( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc416( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi415) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi416[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc416( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc417( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi416) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi417[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc417( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc418( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi417) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi418[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc418( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc419( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi418) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi419[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc419( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc420( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi419) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi420[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc420( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc421( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi420) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi421[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc421( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc422( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi421) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi422[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc422( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc423( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi422) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi423[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc423( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc424( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi423) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi424[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc424( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc425( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi424) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi425[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc425( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc426( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi425) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi426[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc426( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc427( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi426) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi427[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc427( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc428( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi427) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi428[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc428( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc429( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi428) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi429[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc429( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc430( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi429) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi430[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc430( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc431( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi430) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi431[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc431( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc432( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi431) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi432[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc432( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc433( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi432) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi433[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc433( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc434( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi433) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi434[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc434( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc435( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi434) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi435[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc435( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc436( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi435) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi436[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc436( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc437( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi436) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi437[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc437( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc438( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi437) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi438[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc438( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc439( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi438) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi439[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc439( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc440( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi439) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi440[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc440( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc441( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi440) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi441[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc441( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc442( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi441) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi442[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc442( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc443( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi442) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi443[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc443( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc444( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi443) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi444[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc444( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc445( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi444) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi445[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc445( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc446( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi445) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi446[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc446( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc447( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi446) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi447[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc447( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc448( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi447) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi448[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc448( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc449( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi448) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi449[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc449( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc450( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi449) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi450[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc450( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc451( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi450) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi451[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc451( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc452( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi451) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi452[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc452( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc453( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi452) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi453[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc453( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc454( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi453) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi454[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc454( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc455( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi454) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi455[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc455( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc456( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi455) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi456[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc456( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc457( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi456) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi457[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc457( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc458( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi457) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi458[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc458( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc459( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi458) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi459[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc459( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc460( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi459) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi460[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc460( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc461( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi460) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi461[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc461( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc462( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi461) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi462[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc462( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc463( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi462) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi463[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc463( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc464( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi463) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi464[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc464( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc465( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi464) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi465[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc465( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc466( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi465) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi466[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc466( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc467( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi466) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi467[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc467( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc468( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi467) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi468[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc468( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc469( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi468) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi469[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc469( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc470( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi469) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi470[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc470( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc471( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi470) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi471[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc471( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc472( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi471) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi472[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc472( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc473( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi472) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi473[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc473( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc474( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi473) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi474[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc474( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc475( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi474) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi475[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc475( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc476( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi475) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi476[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc476( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc477( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi476) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi477[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc477( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc478( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi477) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi478[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc478( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc479( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi478) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi479[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc479( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc480( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi479) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi480[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc480( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc481( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi480) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi481[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc481( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc482( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi481) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi482[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc482( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc483( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi482) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi483[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc483( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc484( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi483) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi484[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc484( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc485( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi484) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi485[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc485( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc486( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi485) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi486[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc486( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc487( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi486) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi487[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc487( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc488( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi487) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi488[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc488( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc489( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi488) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi489[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc489( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc490( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi489) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi490[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc490( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc491( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi490) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi491[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc491( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc492( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi491) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi492[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc492( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc493( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi492) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi493[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc493( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc494( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi493) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi494[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc494( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc495( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi494) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi495[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc495( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc496( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi495) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi496[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc496( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc497( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi496) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi497[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc497( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc498( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi497) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi498[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc498( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc499( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi498) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi499[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc499( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc500( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi499) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi500[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc500( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc501( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi500) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi501[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc501( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc502( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi501) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi502[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc502( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc503( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi502) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi503[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc503( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc504( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi503) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi504[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc504( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc505( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi504) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi505[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc505( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc506( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi505) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi506[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc506( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc507( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi506) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi507[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc507( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc508( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi507) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi508[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc508( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc509( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi508) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi509[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc509( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc510( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi509) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi510[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc510( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc511( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi510) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi511[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc511( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc512( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi511) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi512[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc512( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc513( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi512) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi513[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc513( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc514( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi513) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi514[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc514( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc515( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi514) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi515[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc515( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc516( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi515) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi516[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc516( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc517( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi516) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi517[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc517( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc518( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi517) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi518[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc518( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc519( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi518) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi519[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc519( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc520( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi519) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi520[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc520( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc521( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi520) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi521[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc521( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc522( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi521) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi522[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc522( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc523( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi522) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi523[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc523( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc524( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi523) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi524[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc524( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc525( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi524) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi525[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc525( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc526( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi525) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi526[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc526( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc527( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi526) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi527[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc527( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc528( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi527) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi528[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc528( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc529( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi528) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi529[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc529( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc530( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi529) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi530[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc530( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc531( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi530) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi531[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc531( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc532( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi531) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi532[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc532( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc533( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi532) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi533[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc533( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc534( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi533) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi534[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc534( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc535( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi534) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi535[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc535( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc536( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi535) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi536[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc536( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc537( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi536) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi537[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc537( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc538( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi537) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi538[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc538( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc539( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi538) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi539[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc539( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc540( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi539) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi540[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc540( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc541( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi540) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi541[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc541( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc542( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi541) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi542[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc542( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc543( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi542) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi543[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc543( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc544( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi543) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi544[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc544( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc545( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi544) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi545[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc545( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc546( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi545) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi546[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc546( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc547( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi546) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi547[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc547( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc548( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi547) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi548[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc548( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc549( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi548) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi549[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc549( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc550( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi549) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi550[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc550( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc551( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi550) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi551[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc551( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc552( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi551) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi552[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc552( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc553( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi552) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi553[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc553( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc554( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi553) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi554[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc554( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc555( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi554) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi555[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc555( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc556( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi555) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi556[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc556( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc557( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi556) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi557[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc557( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc558( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi557) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi558[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc558( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc559( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi558) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi559[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc559( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc560( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi559) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi560[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc560( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc561( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi560) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi561[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc561( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc562( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi561) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi562[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc562( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc563( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi562) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi563[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc563( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc564( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi563) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi564[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc564( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc565( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi564) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi565[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc565( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc566( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi565) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi566[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc566( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc567( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi566) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi567[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc567( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc568( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi567) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi568[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc568( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc569( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi568) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi569[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc569( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc570( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi569) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi570[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc570( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc571( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi570) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi571[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc571( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc572( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi571) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi572[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc572( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc573( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi572) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi573[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc573( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc574( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi573) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi574[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc574( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc575( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi574) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi575[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc575( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc576( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi575) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi576[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc576( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc577( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi576) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi577[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc577( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc578( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi577) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi578[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc578( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc579( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi578) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi579[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc579( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc580( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi579) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi580[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc580( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc581( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi580) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi581[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc581( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc582( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi581) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi582[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc582( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc583( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi582) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi583[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc583( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc584( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi583) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi584[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc584( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc585( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi584) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi585[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc585( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc586( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi585) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi586[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc586( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc587( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi586) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi587[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc587( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc588( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi587) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi588[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc588( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc589( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi588) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi589[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc589( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc590( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi589) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi590[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc590( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc591( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi590) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi591[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc591( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc592( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi591) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi592[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc592( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc593( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi592) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi593[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc593( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc594( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi593) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi594[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc594( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc595( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi594) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi595[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc595( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc596( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi595) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi596[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc596( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc597( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi596) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi597[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc597( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc598( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi597) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi598[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc598( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc599( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi598) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi599[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc599( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc600( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi599) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi600[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc600( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc601( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi600) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi601[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc601( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc602( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi601) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi602[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc602( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc603( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi602) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi603[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc603( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc604( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi603) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi604[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc604( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc605( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi604) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi605[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc605( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc606( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi605) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi606[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc606( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc607( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi606) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi607[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc607( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc608( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi607) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi608[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc608( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc609( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi608) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi609[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc609( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc610( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi609) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi610[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc610( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc611( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi610) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi611[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc611( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc612( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi611) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi612[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc612( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc613( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi612) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi613[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc613( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc614( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi613) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi614[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc614( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc615( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi614) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi615[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc615( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc616( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi615) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi616[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc616( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc617( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi616) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi617[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc617( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc618( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi617) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi618[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc618( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc619( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi618) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi619[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc619( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc620( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi619) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi620[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc620( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc621( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi620) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi621[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc621( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc622( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi621) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi622[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc622( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc623( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi622) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi623[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc623( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc624( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi623) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi624[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc624( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc625( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi624) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi625[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc625( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc626( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi625) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi626[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc626( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc627( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi626) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi627[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc627( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc628( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi627) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi628[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc628( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc629( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi628) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi629[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc629( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc630( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi629) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi630[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc630( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc631( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi630) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi631[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc631( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc632( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi631) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi632[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc632( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc633( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi632) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi633[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc633( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc634( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi633) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi634[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc634( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc635( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi634) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi635[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc635( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc636( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi635) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi636[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc636( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc637( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi636) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi637[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc637( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc638( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi637) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi638[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc638( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc639( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi638) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi639[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc639( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc640( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi639) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi640[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc640( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc641( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi640) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi641[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc641( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc642( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi641) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi642[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc642( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc643( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi642) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi643[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc643( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc644( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi643) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi644[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc644( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc645( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi644) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi645[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc645( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc646( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi645) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi646[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc646( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc647( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi646) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi647[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc647( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc648( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi647) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi648[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc648( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc649( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi648) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi649[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc649( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc650( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi649) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi650[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc650( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc651( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi650) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi651[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc651( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc652( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi651) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi652[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc652( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc653( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi652) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi653[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc653( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc654( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi653) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi654[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc654( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc655( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi654) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi655[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc655( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc656( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi655) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi656[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc656( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc657( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi656) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi657[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc657( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc658( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi657) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi658[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc658( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc659( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi658) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi659[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc659( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc660( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi659) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi660[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc660( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc661( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi660) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi661[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc661( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc662( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi661) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi662[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc662( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc663( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi662) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi663[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc663( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc664( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi663) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi664[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc664( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc665( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi664) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi665[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc665( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc666( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi665) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi666[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc666( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc667( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi666) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi667[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc667( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc668( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi667) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi668[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc668( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc669( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi668) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi669[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc669( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc670( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi669) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi670[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc670( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc671( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi670) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi671[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc671( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc672( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi671) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi672[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc672( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc673( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi672) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi673[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc673( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc674( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi673) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi674[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc674( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc675( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi674) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi675[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc675( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc676( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi675) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi676[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc676( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc677( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi676) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi677[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc677( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc678( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi677) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi678[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc678( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc679( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi678) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi679[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc679( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc680( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi679) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi680[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc680( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc681( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi680) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi681[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc681( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc682( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi681) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi682[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc682( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc683( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi682) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi683[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc683( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc684( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi683) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi684[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc684( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc685( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi684) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi685[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc685( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc686( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi685) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi686[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc686( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc687( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi686) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi687[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc687( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc688( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi687) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi688[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc688( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc689( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi688) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi689[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc689( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc690( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi689) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi690[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc690( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc691( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi690) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi691[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc691( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc692( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi691) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi692[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc692( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc693( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi692) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi693[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc693( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc694( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi693) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi694[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc694( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc695( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi694) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi695[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc695( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc696( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi695) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi696[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc696( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc697( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi696) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi697[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc697( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc698( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi697) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi698[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc698( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc699( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi698) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi699[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc699( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc700( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi699) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi700[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc700( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc701( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi700) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi701[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc701( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc702( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi701) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi702[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc702( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc703( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi702) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi703[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc703( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc704( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi703) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi704[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc704( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc705( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi704) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi705[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc705( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc706( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi705) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi706[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc706( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc707( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi706) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi707[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc707( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc708( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi707) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi708[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc708( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc709( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi708) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi709[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc709( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc710( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi709) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi710[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc710( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc711( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi710) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi711[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc711( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc712( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi711) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi712[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc712( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc713( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi712) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi713[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc713( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc714( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi713) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi714[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc714( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc715( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi714) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi715[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc715( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc716( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi715) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi716[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc716( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc717( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi716) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi717[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc717( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc718( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi717) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi718[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc718( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc719( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi718) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi719[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc719( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc720( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi719) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi720[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc720( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc721( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi720) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi721[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc721( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc722( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi721) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi722[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc722( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc723( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi722) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi723[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc723( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc724( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi723) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi724[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc724( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc725( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi724) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi725[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc725( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc726( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi725) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi726[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc726( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc727( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi726) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi727[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc727( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc728( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi727) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi728[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc728( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc729( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi728) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi729[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc729( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc730( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi729) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi730[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc730( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc731( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi730) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi731[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc731( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc732( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi731) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi732[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc732( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc733( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi732) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi733[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc733( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc734( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi733) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi734[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc734( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc735( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi734) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi735[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc735( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc736( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi735) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi736[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc736( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc737( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi736) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi737[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc737( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc738( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi737) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi738[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc738( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc739( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi738) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi739[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc739( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc740( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi739) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi740[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc740( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc741( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi740) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi741[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc741( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc742( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi741) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi742[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc742( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc743( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi742) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi743[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc743( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc744( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi743) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi744[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc744( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc745( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi744) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi745[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc745( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc746( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi745) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi746[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc746( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc747( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi746) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi747[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc747( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc748( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi747) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi748[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc748( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc749( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi748) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi749[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc749( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc750( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi749) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi750[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc750( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc751( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi750) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi751[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc751( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc752( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi751) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi752[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc752( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc753( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi752) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi753[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc753( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc754( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi753) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi754[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc754( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc755( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi754) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi755[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc755( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc756( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi755) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi756[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc756( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc757( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi756) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi757[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc757( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc758( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi757) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi758[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc758( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc759( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi758) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi759[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc759( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc760( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi759) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi760[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc760( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc761( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi760) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi761[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc761( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc762( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi761) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi762[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc762( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc763( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi762) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi763[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc763( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc764( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi763) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi764[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc764( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc765( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi764) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi765[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc765( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc766( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi765) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi766[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc766( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc767( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi766) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi767[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc767( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc768( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi767) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi768[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc768( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc769( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi768) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi769[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc769( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc770( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi769) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi770[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc770( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc771( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi770) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi771[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc771( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc772( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi771) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi772[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc772( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc773( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi772) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi773[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc773( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc774( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi773) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi774[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc774( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc775( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi774) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi775[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc775( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc776( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi775) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi776[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc776( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc777( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi776) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi777[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc777( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc778( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi777) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi778[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc778( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc779( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi778) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi779[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc779( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc780( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi779) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi780[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc780( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc781( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi780) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi781[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc781( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc782( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi781) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi782[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc782( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc783( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi782) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi783[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc783( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc784( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi783) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi784[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc784( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc785( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi784) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi785[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc785( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc786( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi785) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi786[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc786( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc787( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi786) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi787[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc787( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc788( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi787) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi788[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc788( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc789( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi788) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi789[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc789( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc790( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi789) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi790[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc790( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc791( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi790) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi791[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc791( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc792( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi791) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi792[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc792( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc793( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi792) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi793[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc793( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc794( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi793) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi794[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc794( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc795( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi794) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi795[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc795( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc796( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi795) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi796[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc796( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc797( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi796) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi797[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc797( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc798( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi797) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi798[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc798( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc799( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi798) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi799[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc799( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc800( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi799) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi800[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc800( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc801( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi800) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi801[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc801( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc802( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi801) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi802[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc802( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc803( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi802) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi803[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc803( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc804( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi803) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi804[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc804( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc805( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi804) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi805[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc805( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc806( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi805) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi806[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc806( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc807( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi806) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi807[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc807( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc808( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi807) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi808[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc808( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc809( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi808) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi809[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc809( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc810( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi809) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi810[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc810( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc811( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi810) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi811[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc811( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc812( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi811) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi812[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc812( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc813( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi812) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi813[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc813( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc814( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi813) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi814[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc814( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc815( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi814) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi815[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc815( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc816( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi815) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi816[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc816( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc817( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi816) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi817[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc817( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc818( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi817) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi818[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc818( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc819( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi818) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi819[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc819( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc820( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi819) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi820[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc820( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc821( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi820) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi821[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc821( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc822( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi821) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi822[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc822( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc823( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi822) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi823[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc823( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc824( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi823) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi824[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc824( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc825( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi824) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi825[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc825( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc826( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi825) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi826[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc826( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc827( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi826) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi827[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc827( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc828( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi827) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi828[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc828( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc829( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi828) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi829[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc829( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc830( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi829) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi830[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc830( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc831( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi830) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi831[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc831( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc832( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi831) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi832[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc832( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc833( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi832) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi833[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc833( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc834( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi833) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi834[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc834( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc835( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi834) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi835[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc835( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc836( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi835) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi836[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc836( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc837( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi836) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi837[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc837( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc838( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi837) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi838[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc838( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc839( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi838) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi839[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc839( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc840( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi839) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi840[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc840( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc841( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi840) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi841[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc841( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc842( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi841) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi842[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc842( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc843( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi842) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi843[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc843( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc844( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi843) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi844[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc844( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc845( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi844) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi845[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc845( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc846( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi845) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi846[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc846( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc847( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi846) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi847[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc847( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc848( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi847) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi848[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc848( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc849( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi848) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi849[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc849( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc850( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi849) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi850[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc850( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc851( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi850) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi851[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc851( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc852( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi851) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi852[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc852( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc853( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi852) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi853[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc853( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc854( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi853) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi854[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc854( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc855( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi854) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi855[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc855( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc856( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi855) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi856[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc856( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc857( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi856) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi857[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc857( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc858( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi857) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi858[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc858( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc859( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi858) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi859[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc859( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc860( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi859) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi860[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc860( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc861( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi860) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi861[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc861( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc862( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi861) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi862[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc862( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc863( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi862) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi863[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc863( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc864( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi863) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi864[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc864( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc865( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi864) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi865[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc865( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc866( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi865) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi866[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc866( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc867( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi866) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi867[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc867( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc868( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi867) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi868[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc868( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc869( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi868) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi869[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc869( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc870( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi869) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi870[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc870( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc871( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi870) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi871[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc871( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc872( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi871) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi872[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc872( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc873( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi872) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi873[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc873( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc874( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi873) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi874[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc874( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc875( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi874) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi875[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc875( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc876( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi875) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi876[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc876( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc877( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi876) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi877[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc877( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc878( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi877) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi878[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc878( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc879( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi878) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi879[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc879( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc880( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi879) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi880[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc880( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc881( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi880) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi881[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc881( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc882( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi881) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi882[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc882( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc883( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi882) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi883[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc883( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc884( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi883) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi884[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc884( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc885( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi884) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi885[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc885( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc886( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi885) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi886[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc886( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc887( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi886) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi887[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc887( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc888( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi887) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi888[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc888( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc889( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi888) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi889[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc889( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc890( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi889) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi890[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc890( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc891( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi890) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi891[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc891( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc892( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi891) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi892[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc892( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc893( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi892) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi893[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc893( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc894( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi893) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi894[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc894( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc895( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi894) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi895[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc895( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc896( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi895) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi896[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc896( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc897( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi896) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi897[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc897( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc898( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi897) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi898[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc898( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc899( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi898) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi899[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc899( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc900( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi899) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi900[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc900( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc901( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi900) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi901[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc901( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc902( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi901) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi902[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc902( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc903( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi902) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi903[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc903( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc904( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi903) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi904[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc904( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc905( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi904) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi905[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc905( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc906( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi905) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi906[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc906( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc907( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi906) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi907[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc907( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc908( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi907) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi908[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc908( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc909( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi908) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi909[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc909( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc910( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi909) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi910[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc910( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc911( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi910) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi911[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc911( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc912( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi911) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi912[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc912( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc913( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi912) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi913[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc913( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc914( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi913) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi914[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc914( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc915( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi914) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi915[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc915( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc916( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi915) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi916[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc916( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc917( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi916) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi917[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc917( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc918( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi917) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi918[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc918( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc919( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi918) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi919[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc919( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc920( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi919) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi920[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc920( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc921( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi920) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi921[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc921( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc922( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi921) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi922[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc922( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc923( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi922) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi923[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc923( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc924( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi923) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi924[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc924( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc925( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi924) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi925[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc925( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc926( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi925) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi926[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc926( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc927( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi926) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi927[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc927( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc928( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi927) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi928[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc928( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc929( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi928) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi929[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc929( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc930( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi929) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi930[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc930( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc931( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi930) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi931[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc931( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc932( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi931) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi932[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc932( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc933( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi932) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi933[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc933( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc934( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi933) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi934[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc934( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc935( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi934) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi935[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc935( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc936( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi935) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi936[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc936( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc937( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi936) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi937[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc937( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc938( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi937) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi938[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc938( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc939( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi938) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi939[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc939( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc940( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi939) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi940[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc940( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc941( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi940) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi941[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc941( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc942( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi941) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi942[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc942( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc943( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi942) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi943[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc943( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc944( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi943) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi944[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc944( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc945( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi944) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi945[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc945( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc946( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi945) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi946[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc946( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc947( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi946) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi947[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc947( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc948( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi947) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi948[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc948( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc949( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi948) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi949[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc949( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc950( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi949) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi950[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc950( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc951( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi950) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi951[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc951( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc952( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi951) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi952[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc952( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc953( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi952) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi953[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc953( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc954( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi953) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi954[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc954( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc955( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi954) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi955[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc955( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc956( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi955) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi956[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc956( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc957( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi956) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi957[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc957( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc958( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi957) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi958[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc958( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc959( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi958) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi959[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc959( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc960( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi959) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi960[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc960( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc961( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi960) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi961[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc961( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc962( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi961) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi962[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc962( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc963( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi962) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi963[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc963( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc964( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi963) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi964[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc964( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc965( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi964) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi965[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc965( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc966( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi965) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi966[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc966( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc967( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi966) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi967[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc967( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc968( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi967) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi968[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc968( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc969( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi968) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi969[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc969( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc970( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi969) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi970[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc970( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc971( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi970) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi971[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc971( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc972( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi971) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi972[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc972( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc973( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi972) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi973[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc973( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc974( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi973) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi974[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc974( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc975( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi974) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi975[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc975( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc976( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi975) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi976[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc976( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc977( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi976) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi977[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc977( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc978( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi977) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi978[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc978( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc979( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi978) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi979[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc979( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc980( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi979) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi980[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc980( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc981( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi980) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi981[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc981( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc982( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi981) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi982[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc982( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc983( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi982) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi983[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc983( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc984( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi983) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi984[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc984( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc985( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi984) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi985[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc985( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc986( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi985) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi986[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc986( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc987( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi986) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi987[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc987( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc988( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi987) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi988[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc988( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc989( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi988) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi989[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc989( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc990( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi989) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi990[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc990( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc991( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi990) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi991[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc991( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc992( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi991) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi992[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc992( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc993( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi992) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi993[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc993( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc994( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi993) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi994[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc994( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc995( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi994) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi995[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc995( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc996( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi995) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi996[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc996( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc997( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi996) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi997[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc997( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc998( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi997) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi998[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc998( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc999( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi998) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi999[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc999( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc0( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi999) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

// Terminate Function Here
DATA_PLACE char szMyPi0[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc0( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = 0;

  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi0) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

