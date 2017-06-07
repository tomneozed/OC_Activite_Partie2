all: main.o
	g++ main.o -o Programme

main.o : main.cpp
	g++ -c main.cpp -o main.o 
