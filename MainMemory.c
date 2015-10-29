void MainMemory() {

}

void MemoryRead(uint32_t* addr, uint32_t* RdData) {
  *RdData = *addr;
}

void MemoryWrite(uint32_t* addr, uint32_t* WrtData) {
  *addr = *WrtData;
}
