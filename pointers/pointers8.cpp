#include <iostream>

int main(){
    int array[] = {2, 4, 5, 8, 1};
    //Existem duas formas de acessar o endereco do primeiro elemento da array
    std::cout << "Endereco do primeiro elemento da array = " << array << std::endl;
    std::cout << "Endereco do primeiro elemento da array = " << &array[0] << "\n" << std::endl;

    //Existem duas formas de acessar o valor do primeiro elemento da array
    std::cout << "Primeiro elemento da array = " << array[0] << std::endl;
    std::cout << "Primeiro elemento da array = " << *array << std::endl;
}