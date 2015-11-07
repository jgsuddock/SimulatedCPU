/*
 *
 * EECS 643 Project 2: CPU Simulation
 * 
 * File Name: Control.c
 * 
 * Description: This project simulates the components of a MIPS
 *              CPU and how they interact.
 * 
 * Created by:  Jake Suddock
 *              Jeanette Rusli
 * 
 * Last Updated: November 3, 2015 @ 2:00
 * 
 */

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdarg.h>

#include "Control.h"

// Method to get all the control information.
// The input includes the array that is used to store all the information and
// the value of function. The value of function is the one that determines
// the control information values.
void ControlInfo(uint32_t contArr[], uint32_t funct) {
  
  // Switch statement to determine which action to take based on the value
  // of funct.
  switch(funct) {
  case 32: // add
    contArr[0] = 1; // RegDst
    contArr[1] = -1; // Jump
    contArr[2] = -1; // Branch
    contArr[3] = 0; // MemRead
    contArr[4] = 0; // MemToReg
    contArr[5] = 2; // ALUop
    contArr[6] = 0; // MemWrite
    contArr[7] = 0; // ALUSrc
    contArr[8] = 1; // RegWrite
    break;
  case 34: // sub
    contArr[0] = 1; // RegDst
    contArr[1] = -1; // Jump
    contArr[2] = -1; // Branch
    contArr[3] = 0; // MemRead
    contArr[4] = 0; // MemToReg
    contArr[5] = 6; // ALUop
    contArr[6] = 0; // MemWrite
    contArr[7] = 0; // ALUSrc
    contArr[8] = 1; // RegWrite
    break;
  case 35: // load
    contArr[0] = 0; // RegDst
    contArr[1] = -1; // Jump
    contArr[2] = -1; // Branch
    contArr[3] = 1; // MemRead
    contArr[4] = 1; // MemToReg
    contArr[5] = 2; // ALUop
    contArr[6] = 0; // MemWrite
    contArr[7] = 1; // ALUSrc
    contArr[8] = 1; // RegWrite
    break;
  case 36: // and
    contArr[0] = 1; // RegDst
    contArr[1] = -1; // Jump
    contArr[2] = -1; // Branch
    contArr[3] = 0; // MemRead
    contArr[4] = 0; // MemToReg
    contArr[5] = 0; // ALUop
    contArr[6] = 0; // MemWrite
    contArr[7] = 0; // ALUSrc
    contArr[8] = 1; // RegWrite
    break;
  case 37: // or
    contArr[0] = 1; // RegDst
    contArr[1] = -1; // Jump
    contArr[2] = -1; // Branch
    contArr[3] = 0; // MemRead
    contArr[4] = 0; // MemToReg
    contArr[5] = 1; // ALUop
    contArr[6] = 0; // MemWrite
    contArr[7] = 0; // ALUSrc
    contArr[8] = 1; // RegWrite
    break;
  case 43: // store
    contArr[0] = -1; // RegDst
    contArr[1] = -1; // Jump
    contArr[2] = -1; // Branch
    contArr[3] = 0; // MemRead
    contArr[4] = -1; // MemToReg
    contArr[5] = 2; // ALUop
    contArr[6] = 1; // MemWrite
    contArr[7] = 1; // ALUSrc
    contArr[8] = 0; // RegWrite
    break;
  default :
    printf("Invalid function.\n" );
    break;
  }  
  
}
