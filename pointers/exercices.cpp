#include <iostream>

//exercicio 1 =====================================================
void q1(){
    int n1;
    int n2;

    int *ponteiroN1, *ponteiroN2;

    ponteiroN1 = &n1;
    ponteiroN2 = &n2;

    if(ponteiroN1 > ponteiroN2){
        std::cout << "Ponteiro de n1 tem o endereco maior -> " << ponteiroN1 << std::endl;
        std::cout << "Endereco de n2 -> " << ponteiroN2 << std::endl;
    }
    else {
        std::cout << "Ponteiro de n2 tem o endereco maior -> " << ponteiroN2 << std::endl;
        std::cout << "Endereco de n1 -> " << ponteiroN1 << std::endl;

    };
}

//exercicio 2 =====================================================
void q2(int vetor[]){
    for(int i=0; i<10; i++){
        std::cout << "Valor da posicao " << i << " eh -> " << vetor[i] << std::endl;
    }
}

//exercicio 3 =====================================================
int q3(int vetor[]){
    int aux;
    for(int i=0; i<5; i++){
        std::cout << "Valor da posicao " << i << std::endl;
        std::cin >> vetor[i];
        aux = 2 * vetor[i];
        vetor[i] = aux;
    }

    std::cout << "Vetor final: " <<std::endl;
    for(int j=0; j<5; j++){
        std::cout << vetor[j] << std::endl;
    }
    return aux;
}

//exercicio 4 =====================================================
int q4(int vetor[]){
    int valor;
    std::cout << "Digite o valor" << std::endl;
    std::cin >> valor;

    for(int i=0; i<5; i++){
        vetor[i] = valor;
    }

    std::cout << "\nVetor: " << std::endl;
    for(int j=0; j<5; j++){
        std::cout << vetor[j] << std::endl;
    }

    return valor;
}

int main(){
    
    int vetor[10] = {10, 23, 43, 88, 77, 66, 122, 543, 125, 100};
    int *ponteiro = &vetor[0]; 

    int vetor_q3[5]; 
    int *ponteiro_q3 = &vetor_q3[0];

    //q1();
    //q2(ponteiro);
    //q3(ponteiro_q3);

    int vetor_q4[5];
    int *ponteiro_q4 = &vetor_q4[0];

    q4(ponteiro_q4);
}