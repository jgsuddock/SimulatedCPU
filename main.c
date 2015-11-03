/*
 *
 * EECS 643 Project 2: CPU Simulation
 * 
 * File Name: main.c
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

#include "Processor.h"
#include "RegFile.h"

int main(int argc, char const *argv[])
{
	//Initialize Processor (Initialize Processor Control Values)
	Processor_T proc;
	proc = Processor_new();
	
	//Initialize Register File
	RegFile_T RF;
	RF = RegFile_new();

	//Prints the Register
	printf("Initial Register File:\n");
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
		//Reads First Line as Hex Format (Will return value EOF at file end)
		rv = fscanf(iFile, "%x", &hex);

		//Once it its the end of the file, it will stop pulling each line.
		while (rv != EOF) {

			printf("Instruction: %d\n",hex);

			instructions[i] = hex;

			//Reads every line after the first line (Will return value EOF at file end)
			rv = fscanf(iFile, "%x", &hex);

			i++;
		}
		//Closes Instruction File
		fclose(iFile);
	}

	//Decode and Process First Instruction. This function will call other functions based on instruction needs.
	execProcessor(proc,RF,instructions[0]);

	//Prints the Register
	printf("Register File After First Instruction:\n");
	printReg(RF);

	return 0;
}
