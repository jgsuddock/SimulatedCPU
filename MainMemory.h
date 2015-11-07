/*
 *
 * EECS 643 Project 2: CPU Simulation
 * 
 * File Name: MainMemory.h
 * 
 * Description: This project simulates the components of a MIPS
 * 				CPU and how they interact.
 * 
 * Created by: Jake Suddock
 * 			Jeanette Rusli
 * 
 * Last Updated: November 3, 2015 @ 2:00
 * 
 */

#ifndef __MAINMEMORY_H
#define __MAINMEMORY_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdarg.h>

typedef struct MainMem *MainMem_T;

extern MainMem_T MainMem_new(void);
extern uint32_t MemoryRead(MainMem_T M, uint32_t addr);
extern void MemoryWrite(MainMem_T M, uint32_t addr, uint32_t WrtData);

#endif
