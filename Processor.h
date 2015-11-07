/*
 *
 * EECS 643 Project 2: CPU Simulation
 * 
 * File Name: Processor.h
 * 
 * Description: This project simulates the components of a MIPS
 * 				CPU and how they interact.
 * 
 * Created by:  Jake Suddock
 * 			        Jeanette Rusli
 * 
 * Last Updated: November 3, 2015 @ 2:00
 * 
 */

#ifndef __PROCESSOR_H
#define __PROCESSOR_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdarg.h>

#include "RegFile.h"
#include "ALU.h"
#include "Control.h"
#include "MainMemory.h"

typedef struct Processor *Processor_T;

// Method to create new processor and initialize its members.
// It will then return the newly created processor.
// The result of the ALU operation will then be returned.
extern Processor_T Processor_new(void);

// Method to execute the given instruction.
// The input includes the currently used processor, register file, and instruction.
extern void execProcessor(Processor_T P, RegFile_T RF, MainMem_T M, uint32_t instr);

// Method to execute R-type instructions.
// The input includes currently used processor, register file, and instruction.
extern void executeRType(Processor_T P, RegFile_T RF, uint32_t instr);
extern void executeIType(Processor_T P, RegFile_T RF, MainMem_T M, uint32_t instr, uint32_t op);
extern void executeJType(Processor_T P, RegFile_T RF, uint32_t instr);

// Method to get the current value of PC.
extern uint32_t getPC(Processor_T P);

#endif
