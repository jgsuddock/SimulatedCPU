
#ifndef MAINMEMORY_H
#define MAINMEMORY_H

#include "stdbool.h"
#include "stdint.h"
#include "stdarg.h"

#include "MainMemory.c"

#define MainMemSize 1024;

public:
  void MemoryRead(uint32_t* addr, uint32_t* RdData);
  void MemoryWrite(uint32_t* addr, uint32_t* WrtData);
  
private:
  uint32_t MainMem[MainMemSize];

#endif
