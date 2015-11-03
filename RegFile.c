/*
 *
 * EECS 643 Project 2: CPU Simulation
 * 
 * File Name: RegFile.c
 * 
 * Description: This project simulates the components of a MIPS
 * 				CPU and how they interact.
 * 
 * Created by: Jake Suddock
 * 			Jeanette Rusli
 * 
 * Last Updated: November 3, 2015 @ 2:00
 * 
 */

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdarg.h>

#include "RegFile.h"

// Holds the Register Array
struct RegFile {
	uint32_t RegMem[32];
}; 

//
// Register Array Initialization
//
RegFile_T RegFile_new(void) {
	// Allocates memory for Register Array
	RegFile_T RF = malloc(sizeof(struct RegFile));
	
	// Initializes Register Array with values
	int i;
	for(i = 0; i < 32; i++) {
		RF->RegMem[i] = i;
	}
	
	return RF;
}

//
// Reads Data from Register Array at Address
//
uint32_t readData(RegFile_T RF, uint32_t addr) {
	// Checks validity of input address
	if(addr > 32){
		printf("Error: Read addressing out of bounds!\n" );
	} else {
		// Returns data at address of register array
		return RF->RegMem[addr];
	}
}

//
// Writes Data to Register Array at Address
//
void writeData(RegFile_T RF, uint32_t addr, uint32_t data) {
	// Checks validity of input address
	if(addr > 32){
		printf("Error: Read addressing out of bounds!\n" );
	} else {
		//Writes data to address of register file
		RF->RegMem[addr] = data;
	}
}

//
// Prints Register Array (Used For DEBUGGING)
//
void printReg(RegFile_T RF) {
	printf("Reg File\n");

	// Prints each index of the register array to screen
	int i;
	for(i = 0; i < 32; i++) {
		printf("%d\n",RF->RegMem[i]);
	}

	printf("END\n\n");
}
