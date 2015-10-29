// Method for ALU operations.
// The input includes funct to determine the ALU action, value of SData,
// value of TData, and value of DData. The value of DData will be updated
// after the selected operation was done.
void ALU(int funct, uint32_t *SData, uint32_t *TData, uint32_t *DData) {
  
  uint32_t result; // Variable to hold the result of the operation.
  
  // Switch statement to determine which action to take based on the value
  // of funct.
  switch(funct) {
  case 0: // Addition
    result = *SData + *TData;
    break;
  case 1: // Subtraction
    result = *SData - *TData;
    break;
  case 2: // Bitwise AND 
    result = *SData & *TData;
    break;
  case 3: // Bitwise OR
    result = *SData | *TData;
    break;
  default :
    printf("Invalid operation.\n" );
    break;
  }
  *DData = result;  // Update the value of DData.
}
