#ifndef ALU_H
#define ALU_H

#include <stdbool.h>
#include <stdint.h>
#include <stdarg.h>

#include "ALU.c"

public:
    uint32_t ALU(uint32_t ALUop, uint32_t *SData, uint32_t *TData);
    bool getZero();
    
private:
    bool ALU_Zero;

#endif
