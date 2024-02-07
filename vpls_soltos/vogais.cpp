#include <iostream>
#include <string>

void Pecorrer(std::string p, int& A, int& E, int& I, int& O, int& U){
    for(int i = 0; i< p.size(); ++i){
        if (p[i] == 'a'){
            A++;
        }
        if (p[i] == 'e'){
            E++;
        }
        if (p[i] == 'i'){
            I++;
        }
        if (p[i] == 'o'){
            O++;
        }
        if (p[i] == 'u'){
            U++;
        }
    }
}
int main(){
    int a = 0;
    int e = 0;
    int i = 0;
    int o = 0;
    int u = 0;
    std::string palavra;
    std::cin>> palavra;
    Pecorrer(palavra, a, e, i, o, u);
    if(a != 0){
    std::cout<< "a " << a << std::endl;
    }
    if(e != 0){
    std::cout<< "e " << e << std::endl;
    }
    if(i != 0){
    std::cout<< "i " << i << std::endl;
    }
    if(o != 0){
    std::cout<< "o " << o << std::endl;
    }
    if(u != 0){
    std::cout<< "u " << u << std::endl;
    }
    return 0;
}


//

