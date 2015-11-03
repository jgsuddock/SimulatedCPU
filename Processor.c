
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdarg.h>

#include "Processor.h"
#include "RegFile.h"
#include "ALU.h"
#include "Control.h"

Processor_T Processor_new(void) {
	Processor_T P = malloc(sizeof(Processor));
  	P->PC = 0;
  	P->RF = RegFile_new();
  	P->A = ALU_new();
  	int i;
	for(i = 0; i < 9; i++) {
		P->conArr[i] = 0;
	}
	return P;
}

void execProcessor(uint32_t instr) {
	P->PC++;
	uint32_t type = instr >> 26;
	switch(type) {
  	case 0: // R type
    	executeRType(instr);
    	break;
  	default :
	    printf("Invalid instruction.\n" );
	    break;
	}
}

void executeRType(uint32_t instr) {
	uint32_t rs = (instr << 6) >> 27;
	uint32_t rt = (instr << 11) >> 27;
	uint32_t rd = (instr << 16) >> 27;
	uint32_t shamt = (instr << 21) >> 27;
	uint32_t funct = (instr << 26) >> 26;
	
	uint32_t data1 = readData(rs);
	uint32_t data2 = readData(rt);
	
	ControlInfo(conArr,funct);
	uint32_t result = ALU(conArr[5],data1,data2);
	if(P->conArr[8] == 1) {
		writeData(rd,result);
	}
}

void executeIType(uint32_t instr) {
	
}

void executeJType(uint32_t instr) {
	

}

uint32_t getPC() {
	return P->PC;
}
