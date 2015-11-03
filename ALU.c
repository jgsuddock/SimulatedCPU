ALU() {
  ALU_Zero = false;
}

// Method for ALU operations.
// The input includes funct to determine the ALU action, value of SData,
// value of TData, and value of DData. The value of DData will be updated
// after the selected operation was done.
uint32_t ALU(uint32_t ALUop, uint32_t *SData, uint32_t *TData) {
  
  ALU_Zero = false; // Reset the state of ALU_Zero.
  uint32_t result; // Variable to hold the result of the operation.
  
  // Switch statement to determine which action to take based on the value
  // of funct.
  switch(ALUop) {
  case 0: // Bitwise AND
    result = *SData & *TData;
    break;
  case 1: // Bitwise OR
    result = *SData | *TData;
    break;
  case 2: // Addition
    result = *SData + *TData;
    break;
  case 6: // Subtraction
    result = *SData - *TData;
    if(result == 0) {
      ALU_Zero = true; // Update ALU_Zero.
    }
    break;
  default :
    printf("Invalid operation.\n" );
    break;
  }
  return result;  // Update the value of DData.
}

// Method to get the current value of ALU_Zero.
bool getZero() {
  return ALU_Zero;
}
