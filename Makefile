main:	main.o Processor.o RegFile.o ALU.o Control.o MainMemory.o
	gcc -g main.o Processor.o RegFile.o ALU.o Control.o MainMemory.o -o main
main.o:	main.c Processor.o RegFile.o MainMemory.o
	gcc -c -g main.c
Processor.o:	Processor.c Processor.h RegFile.o ALU.o Control.o MainMemory.o
		gcc -c -g Processor.c
RegFile.o:	RegFile.c RegFile.h
		gcc -c -g RegFile.c
ALU.o:	ALU.c ALU.h
	gcc -c -g ALU.c
Control.o:	Control.c Control.h
		gcc -c -g Control.c
MainMemory.o:	MainMemory.c MainMemory.h
	gcc -c -g MainMemory.c
clean:
	rm -f *- *.o main
