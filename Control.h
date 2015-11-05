/*
 *
 * EECS 643 Project 2: CPU Simulation
 * 
 * File Name: Control.h
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

#ifndef CONTROL_H
#define CONTROL_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdarg.h>

// Method to get all the control information.
// The input includes the array that is used to store all the information and
// the value of function. The value of function is the one that determines
// the control information values.
void ControlInfo(uint32_t contArr[], uint32_t funct);

#endif
