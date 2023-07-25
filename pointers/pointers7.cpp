#include <iostream>

int increment(int a){
    a = a+1;
    std::cout << "Endereco de a na funcao 'increment' = " << &a << std::endl;
    return a;
}

int main(){
    int a = 10;
    increment(a);
    std::cout << "Endereco de a na funcao 'main' = " << &a << std::endl;

}