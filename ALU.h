/*
 *
 * EECS 643 Project 2: CPU Simulation
 * 
 * File Name: ALU.h
 * 
 * Description: This project simulates the components of a MIPS
 * 				CPU and how they interact.
 * 
 * Created by:  Jake Suddock
 * 			    Jeanette Rusli
 * 
 * Last Updated: November 3, 2015 @ 2:00
 * 
 */

#ifndef ALU_H
#define ALU_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdarg.h>
    
uint32_t ALU(uint32_t ALUop, uint32_t SData, uint32_t TData);
bool getZero();

#endif
