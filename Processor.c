/*
 *
 * EECS 643 Project 2: CPU Simulation
 * 
 * File Name: Processor.c
 * 
 * Description: This project simulates the components of a MIPS
 * 				CPU and how they interact.
 * 
 * Created by: 	Jake Suddock
 *		Jeanette Rusli
 * 
 * Last Updated: November 3, 2015 @ 2:00
 * 
 */

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdarg.h>

#include "Processor.h"
#include "RegFile.h"
#include "ALU.h"
#include "Control.h"

// Define the structure of Processor.
// Processor will hold the Program Counter (PC) and
// all the control information in an array.
struct Processor {
        uint32_t PC;
        // The control information include RegDst, Jump, Branch,
        // MemRead, MemToReg, ALUop, MemWrite, ALUSrc, and RegWrite.
        // These information will determine inputs and outputs of methods.
        // They are stored in that order in an array.
        uint32_t conArr[9];
}; 

// Method to create new processor and initialize its members.
// It will then return the newly created processor.
// The result of the ALU operation will then be returned.
Processor_T Processor_new(void) {
	// Allocate memory for the new Processor.
	Processor_T P = malloc(sizeof(struct Processor));
  	// Initialize its members, which include PC and conArr 
  	// (array for control information).
  	P->PC = 0;
  	int i;
	for(i = 0; i < 9; i++) {
		P->conArr[i] = 0;
	}
	return P; // Return the newly created processor.
}

// Method to execute the given instruction.
// The input includes the currently used processor, register file, and instruction.
void execProcessor(Processor_T P, RegFile_T RF, uint32_t instr) {
	P->PC++; // Increment the PC every time it executes an instruction.
	uint32_t type = instr >> 26; // Get the op-code to know the type of instruction.
	
	// Switch statement to determine which action to take based on the instruction type.
	// There are 3 types: R, I, and J.
	switch(type) {
  	case 0: // R type
    	executeRType(P, RF, instr); // Execute the instruction based on the type.
    	break;
  	default :
	    printf("Invalid instruction.\n" );
	    break;
	}
}

// Method to execute R-type instructions.
// The input includes currently used processor, register file, and instruction.
void executeRType(Processor_T P, RegFile_T RF, uint32_t instr) {
	// Get all the parts of instructions using shift operation.
	uint32_t rs = (instr << 6) >> 27;	// Get the source address.
	uint32_t rt = (instr << 11) >> 27;	// Get the target address.
	uint32_t rd = (instr << 16) >> 27;	// Get the destination address.
	uint32_t shamt = (instr << 21) >> 27;	// Get the shamt value.
	uint32_t funct = (instr << 26) >> 26;	// Get the value of function.
	
	// Read the data in source and target address from Register File.
	uint32_t data1 = readData(RF,rs);	
	uint32_t data2 = readData(RF,rt);
	
	// Get the control information based on the value of function.
	ControlInfo(P->conArr,funct);
	// Get the result of the ALU operation.
	uint32_t result = ALU(P->conArr[5],data1,data2);
	// Based on the control information (RegWrite), determine if the result needs to be 
	// written back in the register file.
	if(P->conArr[8] == 1) {
		writeData(RF,rd,result); // Write result in destination address.
	}
}

void executeIType(Processor_T P, RegFile_T RF, uint32_t instr) {
	
}

void executeJType(Processor_T P, RegFile_T RF, uint32_t instr) {
	

}

// Method to get the current value of PC.
uint32_t getPC(Processor_T P) {
	return P->PC;
}
