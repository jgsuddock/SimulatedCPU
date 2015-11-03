
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdarg.h>

#include "RegFile.h"

RegFile::RegFile() {
	int i;
	for(i = 0; i < RegMemSize; i++) {
		RegMemSize[i] = 0;
	}
}

uint32_t RegFile::readData(uint32_t addr) {
	if(addr > RegMemSize){
		std::cout << "Error: Read addressing out of bounds!";
	} else {
		return RegMem[addr1];
	}
}

void RegFile::writeData(uint32_t addr, uint32_t data) {
	if(addr > RegMemSize){
		std::cout << "Error: Read addressing out of bounds!";
	} else {
		RegMem[addr] = data;
	}
}
