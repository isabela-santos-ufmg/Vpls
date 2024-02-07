#linkagem 
vpl_execution: build/Funcionario.o build/Pessoa.o build/Professor.o build/main.o
	c++ $^ -o vpl_execution
#objetos 
build/main.o: src/main.cpp include/*
	c++ -c src/main.cpp -I include/ -o $@

build/Funcionario.o: src/entidades/Funcionario.cpp include/Funcionario.hpp
	c++ -c src/entidades/Funcionario.cpp -I include/ -o $@ 

build/Pessoa.o: src/entidades/Pessoa.cpp include/Pessoa.hpp
	c++ -c src/entidades/Pessoa.cpp -I include/ -o $@

build/Professor.o: src/entidades/Professor.cpp include/Professor.hpp
	c++ -c src/entidades/Professor.cpp -I include/ -o $@

clean: 
	rm - f main build/*
