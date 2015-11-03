/*
 *
 * EECS 643 Project 2: CPU Simulation
 * 
 * File Name: RegFile.h
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

#ifndef __REGFILE_H
#define __REGFILE_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdarg.h>

//Defines the Register Size
//#define uint32_t RegMemSize 32;

// Structure that holds the register array
typedef struct RegFile *RegFile_T;

// Register File Initialization
extern RegFile_T RegFile_new(void);
// Reads Data from Register Array at Address
extern uint32_t readData(RegFile_T RF, uint32_t addr);
// Writes Data to Register Array at Address
extern void writeData(RegFile_T RF, uint32_t addr, uint32_t data);
// Prints Register Array (Used For DEBUGGING)
extern void printReg(RegFile_T RF);

#endif
