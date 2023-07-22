#include <iostream>
#include <stdlib.h>

int main(){
    int number = 2;
    int *pNum = &number;

    std::cout << "Valor da variável: " << *pNum << std::endl;
    std::cout << "Endereço do ponteiro: " << pNum << std::endl;

}