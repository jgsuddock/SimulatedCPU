
//Register File
typedef uint32_t RegFile[RegMemSize];

void RegFile_RW(RegFile currRegFile, uint32_t Rs, uint32_t Rt, uint32_t Rd, WrtData, WrtEnb, &SData, &TData) {
	// Convert addresses to decimal.
	int addr1 = Rs;
	int addr2 = Rt;

	// Check whether address is valid.
	// Must be within register array bounds to perform any operation.
	if(addr1 > RegMemSize || addr2 > RegMemSize){
		std::cout << "Error: Read addressing out of bounds!";
	}
	else {
		// Read the data from register.
		SData = RegMem[addr1];
		TData = RegMem[addr2];
		
		if (WrtEnb == 1) { // Perform write operation.
			// Convert address to decimal.
			int addr3 = binToDecimal(Rd);

			// Check whether address is valid.
			// Must be within register array bounds to perform any operation.
			if(addr3 > RegMemSize){
				std::cout << "Error: Write addressing out of bounds!";
			}
			else {
				// Write data into the register.
				RegMem[addr3] = WrtData;
			}

		}
	}
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
