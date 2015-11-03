main:	main.o Processor.o RegFile.o
	gcc -g main.o Processor.o RegFile.o -o main
main.o:	main.c Processor.o RegFile.o
	gcc -c -g main.c
Processor.o:	Processor.c Processor.h ALU.h ALU.c Control.h Control.c RegFile.o
		gcc -c -g Processor.c
RegFile.o:	RegFile.c RegFile.h
		gcc -c -g RegFile.c
clean:
	rm -f *- *.o main
