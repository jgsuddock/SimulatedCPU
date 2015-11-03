#ifndef PROCESSOR_H
#define PROCESSOR_H

#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdarg.h>

#include "RegFile.h"
#include "ALU.h"
#include "Control.h"

struct Processor {
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
        struct RegFile *RF;
        struct ALU *A;
};

extern Processor Processor_new();
extern void execProcessor(uint32_t instr);
extern void executeRType(uint32_t instr);
extern void executeIType(uint32_t instr);
extern void executeJType(uint32_t instr);
extern uint32_t getPC();

#endif
