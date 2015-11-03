#ifndef ALU_H
#define ALU_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdarg.h>
    
typedef struct ALU *ALU_T;

extern ALU_T ALU_new(void);
extern uint32_t ALU(uint32_t ALUop, uint32_t SData, uint32_t TData);
extern bool getZero();

#endif
