// Method to read into the memory.
// It will update the value of RdData.
void MemoryRead(uint32_t* addr, uint32_t* RdData) {
  
  int i;
  
  // Loop to find the element in Main Memory that has the address.
  for(i = 0; i < 1024; i++) {
    if(Mem[i].addr == addr) {
      // Update the value of RdData with the value in Main Memory.
      *RdData = Mem[i].data; 
    }
  }
  
}

// Method to write into the memory.
// It will write the value of WrtData in Main Memory.
void MemoryWrite(uint32_t* addr, uint32_t* WrtData) {
  
  int i;
  
  // Loop to find the element in Main Memory that has the address.
  for(i = 0; i < 1024; i++) {
    if(Mem[i].addr == addr) {
      // Write the value of WrtData into Main Memory.
      Mem[i].data = *WrtData;
    }
  }
  
}
