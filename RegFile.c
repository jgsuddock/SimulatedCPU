
//Register File
typedef uint32_t RegFile[RegMemSize];

void RegFile_RW(RegFile currRegFile, uint32_t Rs, uint32_t Rt, uint32_t Rd, WrtData, WrtEnb, &SData, &TData) {
	
}

//
// Method to convert binary char array to unsigned integer.
//
uint32_t binToDecimal (char *bin) {

	// Initialization.
	uint32_t lengthBin = strlen(bin);
	uint32_t decSum = 0;
	int i;

	// Calculate decimal value.
	for(i = 0; i < lengthBin; i++) {
		decSum = decSum * 2;		
		if(bin[i] == '1') {
			decSum++;
		}
	} 

	return decSum;

}