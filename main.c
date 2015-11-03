/*

EECS 643 Project 2: CPU Simulation

File Name: main.c

Description: This project is done to simulate the components of a 
				CPU and how they interact. 

Created by: Jake Suddock
			Jeanette Rusli

Last Updated: October 21, 2015 @ 14:00

*/

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdarg.h>

#include "Processor.h"

#include "RegFile.h"
//#include "Cache.h"
//#include "MainMemory.h"
//#include "ALU.h"

uint32_t hexToDec (char* hex);

int main(int argc, char const *argv[])
{

	Processor_T proc;
	proc = Processor_new();
	
	RegFile_T RF;
	RF = RegFile_new();

	printReg(RF);

	//
	//Read File
	//
	FILE * iFile;
	int rv;
	int i = 0;

	iFile = fopen("Instructions.txt", "r");

	//Holds hex int for each line read
	uint32_t hex = 0;
	//Instruction Memory
	uint32_t instructions [1000];

	//
	if (iFile == NULL)
		perror ("Error opening file");
	else {
		//Reads First Line as Hex Format.
		rv = fscanf(iFile, "%x", &hex);

		//Once it its the end of the file, it will stop pulling each line.
		while (rv != EOF) {

			printf("%d\n",hex);

			instructions[i] = hex;

			//Reads every line after the first line (Will return EOF at file end)
			rv = fscanf(iFile, "%x", &hex);

			i++;
		}
	
		fclose(iFile);
	}

	execProcessor(proc,RF,instructions[0]);

	printReg(RF);

	return 0;
}
