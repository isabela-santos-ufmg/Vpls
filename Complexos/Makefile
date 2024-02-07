#linkagem 
main: main.o complexo.o
	c++ $^ -o main
#objetos 
main.o: main.cpp complexo.h
	c++ -c main.cpp -o $@

complexo.o: complexo.cpp complexo.h
	c++ -c complexo.cpp -o $@ 
	
clear: 
	rm - f main main.o complexo.o