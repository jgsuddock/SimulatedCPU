
#ifndef __REGFILE_H
#define __REGFILE_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdarg.h>

//Defines the Register Size
//#define uint32_t RegMemSize 32;

typedef struct RegFile *RegFile_T;

extern RegFile_T RegFile_new(void);
extern uint32_t readData(RegFile_T RF, uint32_t addr);
extern void writeData(RegFile_T RF, uint32_t addr, uint32_t data);
extern void printReg(RegFile_T RF);

#endif
