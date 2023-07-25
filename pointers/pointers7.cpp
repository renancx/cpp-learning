#include <iostream>

int increment(int a){
    a = a+1;
    std::cout << "Endereco de a na funcao 'increment' = " << &a << std::endl;
    return a;
}

int adiciona(int &a){
    a=a+2;
    std::cout << "Endereco de a na funcao 'adciona' = " << &a << std::endl;
    std::cout << "a = " << a << std::endl;
    return a;
}

int main(){
    int a = 10;
    increment(a);
    adiciona(a);
    std::cout << "Endereco de a na funcao 'main' = " << &a << std::endl;

}