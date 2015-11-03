
#ifndef __REGFILE_H
#define __REGFILE_H

#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdarg.h>

//Defines the Register Size
#define uint32_t RegMemSize 32;

class RegFile {
	public:
		RegFile();
		uint32_t readData(uint32_t addr);
		void writeData(uint32_t addr, uint32_t data);
	
	private:
		uint32_t RegFileArr; //[RegMemSize]
};

#endif
