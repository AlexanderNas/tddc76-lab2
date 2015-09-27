#makefile för lab2

CCC = g++
CCFLAGS = -g -std=c++11 -pedantic -Wall -Wextra -Werror
LDFLAGS = -L/sw/gcc-${GCC4_V}/lib -static-libstdc++

lab2: lab2.o Monetary.o
	$(CCC) $(CCFLAGS) $(LDFLAGS) lab2.o Monetary.o -o lab2

lab2.o: lab2.cc Monetary.h
	$(CCC) $(CCFLAGS) -c lab2.cc

Monetary.o: Monetary.cc Monetary.h
	$(CCC) $(CCFLAGS) -c Monetary.cc

clean:
	@ \rm -f *.o *.cc~ *.h~ makefile~
