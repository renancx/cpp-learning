#include <iostream>

void printar(){
    std::cout << "-----------------" << std::endl;
}

int main(){
    int *pNum; //declaracao de ponteiro
    int num, num2;
    pNum = &num; //aponta pNum para num
    *pNum = 10; //atribui valor a num por meio do apontamento
    num2 = 20; //atribui valor a num2
    num2 += *pNum; //atribui valor a num2 por meio do ponteiro

    printar();
    //obtendo valor de variaveis
    std::cout << "Conteudo de num: " << num << std::endl;
    std::cout << "Cndereco de num: " << &num << std::endl;
    std::cout << "Conteudo de num2: " << num2 << std::endl;
    std::cout << "Endereco de num2: " << &num2 << std::endl;

    printar();
    //obtendo valor de ponteiros
    std::cout << "\nConteudo de pNum: " << pNum << std::endl;
    std::cout << "Conteudo do apontamento de pNum: " << *pNum << std::endl;
    std::cout << "Endereco de pNum: " << &pNum << std::endl;
}