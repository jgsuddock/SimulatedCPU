# SimulatedCPU
EECS 643 Project

To Do:

ReadFile
	* Read in Hex Line by Line
	* Parse HexToBin
	* Ammend InstructionMem Array with Binary Instructions

I-PROC
	* Update and hold PC
	* Pull OP Code
	* Determine R, I, J
	* Pull Other Necessary Data
		- For R: Rs, Rt, Rd, shamt, funct
		- For I: Rs, Rt, Intermediate
		- For J: Address
	* Call Control
		- Get ALUOp
	* Call ALU with Rs, Rt and ALUOp
	* Based on MemToReg and RegWrite, ResultData will be saved to Rd Address in Register
	* To Next Instruction
Control
	* Determine ALUOp from Funct
	* Return array of RegWrite, ALUOp, and MemToReg
ALU
	* Read in ALUOp
	* Read in ReadData1 and ReadData2
	* Perform Calculation
	* Return ResultData
DataMem (If Time Allows)
	* Read in ReadAddr
	* Read in WriteAddr
	* Read in WriteData
	* Read in MemWrite
	* Read in MemRead
	* Based on MemWrite and MemRead, Do Operation
	* Update MemoryArray if MemWrite
	* Return ReadData if MemRead