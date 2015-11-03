#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdarg.h>

#include "RegFile.h"

struct RegFile {
	uint32_t RegMem[32];
}; 

RegFile_T RegFile_new(void) {
	RegFile_T RF = malloc(sizeof(struct RegFile));
	
	int i;
	for(i = 0; i < 32; i++) {
		RF->RegMem[i] = i;
	}
	
	return RF;
}

uint32_t readData(RegFile_T RF, uint32_t addr) {
	if(addr > 32){
		printf("Error: Read addressing out of bounds!\n" );
	} else {
		return RF->RegMem[addr];
	}
}

void writeData(RegFile_T RF, uint32_t addr, uint32_t data) {
	if(addr > 32){
		printf("Error: Read addressing out of bounds!\n" );
	} else {
		RF->RegMem[addr] = data;
	}
}

void printReg(RegFile_T RF) {
	printf("Reg File\n");
	int i;
	for(i = 0; i < 32; i++) {
		printf("%d\n",RF->RegMem[i]);
	}
	printf("END\n\n");
}
