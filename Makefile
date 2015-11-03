main:	main.o Processor.o
	g++ -g -std=c++11 main.o Processor.o -o main
main.o:	main.c Processor.o
	g++ -c -g -std=c++11 main.c
Processor.o:	Processor.c Processor.h RegFile.h RegFile.c ALU.h ALU.c Control.h Control.c
		g++ -c -g -std=c++11 Processor.c
clean:
	rm -f *- *.o Lab4
