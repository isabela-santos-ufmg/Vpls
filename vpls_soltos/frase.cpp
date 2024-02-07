#include <iostream>
#include <string>
#include <map>
int main(){
    int valor_maior = 1;
    std::string maior;
    std::string frase;
    std::map<std::string, int> mapa;
    std::cout<< "Digite a frase desejada e Ctrl+D para encerrar"<< std::endl;
    while(std::cin >> frase){
            mapa[frase]++;
    }
    std::cout << std::endl;
    for(auto x: mapa){
		if(x.second > valor_maior){
            valor_maior = x.second;
            maior = x.first;
        }
	}
    std::cout << "A string de maior ocorrência foi " << maior << " aparecendo " << valor_maior << " vezes" << std::endl;
    return 0;
}