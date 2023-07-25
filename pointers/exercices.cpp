#include <iostream>

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

void q2(int vetor[]){
    for(int i=0; i<10; i++){
        std::cout << "Valor da posicao " << i << " eh -> " << vetor[i] << std::endl;
    }
}

int main(){

    int vetor[10] = {10, 23, 43, 88, 77, 66, 122, 543, 125, 100};
    int *ponteiro = &vetor[0]; 

    //q1();
    //q2(ponteiro);

}