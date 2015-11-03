
#ifndef __REGFILE_H
#define __REGFILE_H

#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdarg.h>

//Defines the Register Size
#define uint32_t RegMemSize 32;
	
struct RegFile {
	uint32_t RegFileArr[RegMemSize];
};

extern RegFile RegFile_new();
extern uint32_t readData(uint32_t addr);
extern void writeData(uint32_t addr, uint32_t data);

#endif
