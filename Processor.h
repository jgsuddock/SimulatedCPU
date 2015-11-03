#ifndef PROCESSOR_H
#define PROCESSOR_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdarg.h>

#include "RegFile.h"
#include "ALU.h"
#include "Control.h"

typedef struct Processor {
        uint32_t PC;
        // RegDst
        // Jump
        // Branch
        // MemRead
        // MemToReg
        // ALUop
        // MemWrite
        // ALUSrc
        // RegWrite
        uint32_t conArr[9];
        struct RegFile_T *RF;
        struct ALU_T *A;
} *Processor_T;

extern Processor_T Processor_new(void);
extern void execProcessor(uint32_t instr);
extern void executeRType(uint32_t instr);
extern void executeIType(uint32_t instr);
extern void executeJType(uint32_t instr);
extern uint32_t getPC();

#endif
