#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num; //declaracao de uma variavel
    int *pNum; // declaracao de um ponteiro

    num = 33;
    pNum = &num; //pNum aponta para num

    std::cout << pNum << std::endl; //vai printar o endereco
    std::cout << *pNum << std::endl; // vai printar o valor 
    std::cout << num << std::endl; // vai printar o valor
    std::cout << &num << std::endl; // vai printar o endereco
}