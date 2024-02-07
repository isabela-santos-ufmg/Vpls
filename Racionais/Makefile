#linkagem 
main: main.o racional.o
	c++ $^ -o main
#objetos 
main.o: main.cpp racional.h
	c++ -c main.cpp -o $@

racional.o: racional.cpp racional.h
	c++ -c racional.cpp -o $@ 
	
clear: 
	rm - f main main.o racional.o