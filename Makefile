main:	main.o Processor.o
	gcc -g main.o Processor.o -o main
main.o:	main.c Processor.o
	gcc -c -g main.c
Processor.o:	Processor.c Processor.h RegFile.h RegFile.c ALU.h ALU.c Control.h Control.c
		gcc -c -g Processor.c
clean:
	rm -f *- *.o Lab4
