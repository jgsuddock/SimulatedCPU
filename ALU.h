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
    
// Method for ALU operations.
// The input includes ALUop to determine the ALU action, value of SData, and
// value of TData. 
// The result of the ALU operation will then be returned.
uint32_t ALU(uint32_t ALUop, uint32_t SData, uint32_t TData);
bool getZero();

#endif
