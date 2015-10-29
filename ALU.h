
#ifndef ALU_H
#define ALU_H

#include "stdbool.h"
#include "stdint.h"
#include "stdarg.h"

#include "ALU.c"

public:
    void ALU(int funct, uint32_t *SData, uint32_t *TData, uint32_t *DData);
    
private:
    bool ALU_Zero;

#endif
