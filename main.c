/*

EECS 643 Project 2: CPU Simulation

File Name: main.c

Description: This project is done to simulate the components of a 
				CPU and how they interact. 

Created by: Jake Suddock
			Jeanette Rusli

Last Updated: October 21, 2015 @ 14:00

*/

// Initialization
const int RegMemSize = 32;
const int RegMem[RegMemSize];


int main(int argc, char const *argv[])
{
	int i;
	// Initialize the register array.
	for(i = 0; i < 32; i++) {
		RegMem[i] = 0;
	}
	return 0;
}


// Method to convert binary char array to decimal.
int binToDecimal (char *bin) {

	// Initialization.
	int lengthBin = strlen(bin);
	int decSum = 0;
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

// Method to read/write data on the register array.
// WrtEnb must equal 1 to perform write operation
void RegFile(Rs, Rt, Rd, WrtData, WrtEnb, &SData, &TData) {
	// Convert addresses to decimal.
	int addr1 = binToDecimal(Rs);
	int addr2 = binToDecimal(Rt);

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

// Method to read/write data in memory.
// WrtEnb must equal 1 to perform write operation
void Memory(Addr, WrtEnb, WrtData, &RdData) {
	if(WrtEnb == 0) { //Read operation
		RdData = *Addr;
	}
	else if (WrtEnb == 1) { //Write operation
		*Addr = WrtData;
	}
	else { //Unknown Operation
		std::cout << "Error: Unknown Operation";
	}
}