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

typedef struct Processor *Processor_T;

extern Processor_T Processor_new(void);
extern void execProcessor(Processor_T P, uint32_t instr);
extern void executeRType(Processor_T P, uint32_t instr);
extern void executeIType(Processor_T P, uint32_t instr);
extern void executeJType(Processor_T P, uint32_t instr);
extern uint32_t getPC(Processor_T P);

#endif
