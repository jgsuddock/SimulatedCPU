#ifndef ALU_H
#define ALU_H

#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdarg.h>
    
Struct ALU {
    bool ALU_Zero;
};

extern ALU_new();
extern uint32_t ALU(uint32_t ALUop, uint32_t *SData, uint32_t *TData);
extern bool getZero();

#endif
