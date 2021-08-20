#include <SD.h>

void xferSD( int copyType ) { // do MediaTransfer with SD
#define destLFS 1
#define destSD 2

	static bool initSD = true;
	Serial.print("Initializing SD card...");
	if ( initSD && !SD.begin(BUILTIN_SDCARD)) { // see if the card is present and can be initialized:
		Serial.println("\n\n SD Card failed, or not present - Cannot do Xfer\n");
	}
	else {
		initSD = false;
		Serial.println("card initialized.\n\n");
		if ( copyType == destSD ) {
			// char szSDdir[] = "/"; // COPY to SD ROOT
			char szSDdir[] = "LFS_CPY/"; // COPY to SD subdirectory
			if ( '/' != szSDdir[0] )
				SD.mkdir( szSDdir );
			makeRootDirsTest(); // BUGBUG DEBUG make extra subdirs and files to show function
			Serial.println("\n STARTING :: LittleFS copy to SD card XFER ...\n\n");
			mediaTransfer( myfs.open("/"), szSDdir, destSD ); // TOO SD
			Serial.println("\n LittleFS copy to SD card XFER COMPLETE.\n\n");
		}
		else {
			char szLFSdir[] = "/";
			char szSDdir[] = "LFS_CPY";
			Serial.println("\n STARTING :: SD card copy to LittleFS XFER ...\n\n");
			mediaTransfer( SD.open(szSDdir), szLFSdir, destLFS );	// FROM SD
			Serial.println("\n SD card copy to LittleFS XFER COMPLETE.\n\n");
		}
	}
}

void mediaTransfer(File dir, char* szDir, int destMedia) {
	char szNewDir[36];
	while (true) {
		File entry =  dir.openNextFile();
		if (! entry) {
			break;
		}
		if (entry.isDirectory()) {
			strcpy( szNewDir, szDir);
			if ( destMedia == destLFS )
				myfs.mkdir( szNewDir );
			else
				SD.mkdir( szNewDir );
			strcat( szNewDir, entry.name());
			if ( destMedia == destLFS ) myfs.mkdir( szNewDir );
			else SD.mkdir( szNewDir );
			strcat( szNewDir, "/");
			mediaTransfer(entry, szNewDir, destMedia);
		} else {
			uint64_t fileSize, sizeCnt = 0, xfSize = 1;
			char mm[512];
			strcpy( szNewDir, szDir);
			strcat( szNewDir, entry.name() );
			File dataFile;
			if ( destMedia == destLFS ) {
				dataFile = myfs.open(szNewDir, FILE_WRITE_BEGIN);
			}
			else {
				dataFile = SD.open(szNewDir, FILE_WRITE_BEGIN);
			}
			if ( !dataFile )
				Serial.print("\td_FILE: NOT open\n");
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
}

void makeRootDirsTest() {
	char szDir[36];
	for ( uint32_t ii = 1; ii <= NUMDIRS; ii++ ) {
		sprintf( szDir, "/%lu_dir", ii );
		myfs.mkdir( szDir );
		sprintf( szDir, "/%lu_dir/aFile.txt", ii ); // BUGBUG DEBUG
		file3 = myfs.open(szDir, FILE_WRITE);
		file3.write( szDir , 12 );
		file3.close();

		sprintf( szDir, "/%lu_dir/TEST", ii ); // BUGBUG DEBUG
		myfs.mkdir( szDir ); // BUGBUG DEBUG
		sprintf( szDir, "/%lu_dir/TEST/bFile.txt", ii ); // BUGBUG DEBUG
		file3 = myfs.open(szDir, FILE_WRITE);
		file3.write( szDir , 12 );
		file3.close();
	}
	filecount = printDirectoryFilecount( myfs.open("/") );  // Set base value of filecount for disk
}
