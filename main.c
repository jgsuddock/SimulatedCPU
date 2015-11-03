/*

EECS 643 Project 2: CPU Simulation

File Name: main.c

Description: This project is done to simulate the components of a 
				CPU and how they interact. 

Created by: Jake Suddock
			Jeanette Rusli

Last Updated: October 21, 2015 @ 14:00

*/

#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdarg.h>

#include "Processor.h"

//#include "RegFile.h"
//#include "Cache.h"
//#include "MainMemory.h"
//#include "ALU.h"

uint32_t hexToDec (char* hex);

int main(int argc, char const *argv[])
{

	Processor proc = new Processor();

	FILE * iFile;
	int rv;
	int i = 0;

	iFile = fopen("Instructions.txt", "r");

	uint32_t hex = 0;
	uint32_t instructions [1000];

	if (iFile == NULL) 
		perror ("Error opening file");
	else {

		rv = fscanf(iFile, "%x", &hex);

		while (rv != EOF) {

			printf("%d\n",hex);

			instructions[i] = hex;

			rv = fscanf(iFile, "%x", &hex);

			i++;
		}
	
		fclose(iFile);
	}

	proc.execProcessor(instructions[0]);

	return 0;
}