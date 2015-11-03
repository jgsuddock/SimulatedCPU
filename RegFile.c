
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdarg.h>

#include "RegFile.h"

RegFile_new() {
	RegFile RF = malloc(sizeof(RegFile));
	
	int i;
	for(i = 0; i < RegMemSize; i++) {
		RF->RegMemSize[i] = 0;
	}
	
	return RF;
}

uint32_t readData(uint32_t addr) {
	if(addr > RegMemSize){
		std::cout << "Error: Read addressing out of bounds!";
	} else {
		return RF->RegMem[addr1];
	}
}

void writeData(uint32_t addr, uint32_t data) {
	if(addr > RegMemSize){
		std::cout << "Error: Read addressing out of bounds!";
	} else {
		RF->RegMem[addr] = data;
	}
}
