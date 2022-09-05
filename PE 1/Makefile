#define everything
CXX = g++
CXXFLAGS = -std=c++17 -Wall

#make all
all: main

clean:
	rm main *.o

main: Point.o
	$(CXX) $(CXXFLAGS) main.cpp Point.o -o main

point.o: Point.cpp
	$(CXX) $(CXXFLAGS) -c Point.cpp

	