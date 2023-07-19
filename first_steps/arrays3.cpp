#include <iostream>

//funcao para perguntar o tamanho da array e após isso pedir para preenchê-la

int main(){
    int tamanho;

    std::cout << "Informe o tamanho do vetor: " << std::endl;
    std::cin >> tamanho;

    std::string vetor[tamanho];

    for(int i = 0; i < tamanho; i++){
        std::cout << "Informe o valor da posicao: " << i << std::endl;
        std::cin >> vetor[i];
    }

    std::cout << "Vetor: \n" << std::endl;
    for(int j =0; j < tamanho; j++){
        std::cout << vetor[j] << std::endl;
    }


    return 0;
}