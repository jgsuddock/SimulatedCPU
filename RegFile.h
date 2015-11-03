
#ifndef REGFILE_H
#define REGFILE_H

#include <stdbool.h>
#include <stdint.h>
#include <stdarg.h>

#include "RegFile.c"

//Defines the Register Size
#define uint32_t RegMemSize 32;

public:
	void RegFile_RW(char* Rs, char* Rt, char* Rd, WrtData, WrtEnb, &SData, &TData);

private:
	uint32_t binToDecimal (char *bin);

#endif
