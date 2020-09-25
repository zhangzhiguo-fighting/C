
.PHONY: clean

all: main.o haizei/test.0
	g++ -o ./bin/haizei main.o haizei/test.o

main.0: main.cpp
	g++ -I./ -c main.cpp

haizei/test.o: haizei/test.h haizei/test.cc
	g++ -I./ -o haizei/test.o -c haizei/test.cc

clean:
	rm -rf ./a.out *.o
