/*
 *
 * EECS 643 Project 2: CPU Simulation
 * 
 * File Name: MainMemory.c
 * 
 * Description: This project simulates the components of a MIPS
 *        CPU and how they interact.
 * 
 * Created by: Jake Suddock
 *      Jeanette Rusli
 * 
 * Last Updated: November 3, 2015 @ 2:00
 * 
 */
 
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdarg.h>

#include "MainMemory.h"

#define MainMemSize 1024

struct MainMem {
	uint32_t MainMemArr[MainMemSize];
}; 

MainMem_T MainMem_new(void) {
	// Allocates memory for Register Array
	MainMem_T M = malloc(sizeof(struct MainMem));
	
	// Initializes Register Array with values
	int i;
	for(i = 0; i < MainMemSize; i++) {
		M->MainMemArr[i] = 0;
	}
	
	return M;
}

// Method to read into the memory.
// It will update the value of RdData.
uint32_t MemoryRead(MainMem_T M, uint32_t addr) {
  
  // Checks validity of input address
	if(addr > MainMemSize){
		printf("Error: Read addressing out of bounds!\n" );
	} else {
		// Returns data at address of register array
		return M->MainMemArr[addr];
	}
  
}

// Method to write into the memory.
// It will write the value of WrtData in Main Memory.
void MemoryWrite(MainMem_T M, uint32_t addr, uint32_t WrtData) {
  
 	// Checks validity of input address
	if(addr > MainMemSize){
		printf("Error: Write addressing out of bounds!\n" );
	} else {
		//Writes data to address of register file
		M->MainMemArr[addr] = WrtData;
	}
  
}
