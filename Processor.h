#ifndef PROCESSOR_H
#define PROCESSOR_H

#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdarg.h>

#include "RegFile.h"
#include "ALU.h"
#include "Control.h"

public:
    Processor();
    void execProcessor(uint32_t instr);
    void executeRType(uint32_t instr);
    void executeIType(uint32_t instr);
    void executeJType(uint32_t instr);
    uint32_t getPC();
    
private:
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

#endif
