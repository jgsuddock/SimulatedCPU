/*
 *
 * EECS 643 Project 2: CPU Simulation
 * 
 * File Name: ALU.c
 * 
 * Description: This project simulates the components of a MIPS
 *        CPU and how they interact.
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

#include "ALU.h"

static bool ALU_Zero = false;

// Method for ALU operations.
// The input includes ALUop to determine the ALU action, value of SData, and
// value of TData. 
// The result of the ALU operation will then be returned.
uint32_t ALU(uint32_t ALUop, uint32_t SData, uint32_t TData) {
  
  ALU_Zero = false; // Reset the state of ALU_Zero.
  uint32_t result; // Variable to hold the result of the operation.
  
  // Switch statement to determine which action to take based on the value
  // of ALUop.
  switch(ALUop) {
  case 0: // Bitwise AND
    result = SData & TData;
    break;
  case 1: // Bitwise OR
    result = SData | TData;
    break;
  case 2: // Addition
    result = SData + TData;
    break;
  case 6: // Subtraction
    result = SData - TData;
    if(result == 0) {
      ALU_Zero = true; // Update ALU_Zero.
    }
    break;
  default :
    printf("Invalid operation.\n" );
    break;
  }
  return result;  // Return the result of ALU operation.
}

// Method to get the current value of ALU_Zero.
bool getZero() {
  return ALU_Zero;
}
