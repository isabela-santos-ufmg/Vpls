#linkagem 
main: main.o fila_de_prioridade.o
	c++ $^ -o main
#objetos 
main.o: main.cpp fila_de_prioridade.h
	c++ -c main.cpp -o $@

fila_de_prioridade.o: fila_de_prioridade.cpp fila_de_prioridade.h
	c++ -c fila_de_prioridade.cpp -o $@ 
	
clear: 
	rm - f main main.o fila_de_prioridade.o