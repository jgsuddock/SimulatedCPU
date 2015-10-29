
#ifndef __MAINMEMORY_H
#define __MAINMEMORY_H

#include "stdbool.h"
#include "stdint.h"
#include "stdarg.h"

#include "MainMemory.c"

#define MainMemSize 1024;

// Define the structure of Main Memory.
// The members include the address and data.
struct MainMem {
  uint32_t addr;
  uint32_t data;
};

public:
  void MemoryRead(uint32_t* addr, uint32_t* RdData);
  void MemoryWrite(uint32_t* addr, uint32_t* WrtData);
  
private:
  struct MainMem Mem[MainMemSize];

#endif
