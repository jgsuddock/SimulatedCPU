void ControlInfo(uint32_t contArr[], uint32_t funct) {
  
  // Switch statement to determine which action to take based on the value
  // of funct.
  switch(funct) {
  case 32: // add
    contArr[0] = 1 // RegDst
    contArr[1] = -1 // Jump
    contArr[2] = -1 // Branch
    contArr[3] = 0 // MemRead
    contArr[4] = 0 // MemToReg
    contArr[5] = 2 // ALUop
    contArr[6] = 0 // MemWrite
    contArr[7] = 0 // ALUSrc
    contArr[8] = 1 // RegWrite
    break;
  case 34: // sub
    contArr[0] = 1 // RegDst
    contArr[1] = -1 // Jump
    contArr[2] = -1 // Branch
    contArr[3] = 0 // MemRead
    contArr[4] = 0 // MemToReg
    contArr[5] = 6 // ALUop
    contArr[6] = 0 // MemWrite
    contArr[7] = 0 // ALUSrc
    contArr[8] = 1 // RegWrite
    break;
  case 36: // and
    contArr[0] = 1 // RegDst
    contArr[1] = -1 // Jump
    contArr[2] = -1 // Branch
    contArr[3] = 0 // MemRead
    contArr[4] = 0 // MemToReg
    contArr[5] = 0 // ALUop
    contArr[6] = 0 // MemWrite
    contArr[7] = 0 // ALUSrc
    contArr[8] = 1 // RegWrite
    break;
  case 37: // or
    contArr[0] = 1 // RegDst
    contArr[1] = -1 // Jump
    contArr[2] = -1 // Branch
    contArr[3] = 0 // MemRead
    contArr[4] = 0 // MemToReg
    contArr[5] = 1 // ALUop
    contArr[6] = 0 // MemWrite
    contArr[7] = 0 // ALUSrc
    contArr[8] = 1 // RegWrite
    break;
  default :
    printf("Invalid function.\n" );
    break;
  }  
  
}
