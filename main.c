/*

EECS 643 Project 2: CPU Simulation

File Name: main.c

Description: This project is done to simulate the components of a 
				CPU and how they interact. 

Created by: Jake Suddock
			Jeanette Rusli

Last Updated: October 21, 2015 @ 14:00

*/

#include "stdbool.h"
#include "stdint.h"
#include "stdarg.h"

#include "RegFile.h"
//#include "Cache.h"
//#include "MainMemory.h"
//#include "ALU.h"


int main(int argc, char const *argv[])
{
	int i;
	// Initialize the register array.
	for(i = 0; i < 32; i++) {
		RegMem[i] = 0;
	}
	return 0;
}