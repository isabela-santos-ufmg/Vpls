#include <iostream>
#include<vector>

int main(){
    int l1;
    int l2;
    int c2;
    // cria matriz a : l1xl2 matriz b: l2xc2  matriz resultado: l1xc2
    std::cin >> l1 >> l2 >> c2;
    std::vector<std::vector<int>> matriz_a(l1, std::vector<int>(l2));
    std::vector<std::vector<int>> matriz_b(l2, std::vector<int>(c2));
    std::vector<std::vector<int>> matriz_resultado(l1, std::vector<int>(c2));

    // adiciona valores nas matrizes 
    for(int i = 0; i< l1; i++){
        for(int j = 0; j< l2; j++){
            std::cin >> matriz_a[i][j];
        }
    }
    for(int i = 0; i< l2; i++){
        for(int j = 0; j< c2; j++){
            std::cin >> matriz_b[i][j];
        }
    }
    // multiplica matrizes 
    // explicação: primeiro pecorre cada elemento da matriz resultado(l1 linhas e c2 colunas) 
    // para cada um dos elementos fará l2 somas entre elementos de a e de b 
    // a = 3x5 b = 5x3 e resultado = 3x3 -> fará 3 vezes para cada linha, 3 vezes para cada coluna e em cada vez fará 5 somas
    
    for(int k = 0; k< l1; k++){
        for(int i = 0; i < c2; i++){
            for(int j = 0; j < l2; j++){
                matriz_resultado[k][i] += matriz_a[k][j] * matriz_b[j][i];
            }
        }
    }
    // imprimir resultado
    for(int i = 0; i< l1; i++){
        for(int j = 0; j< c2; j++){
            std::cout << matriz_resultado[i][j] << " ";
        } std::cout << std::endl;
    }
    return 0;
}