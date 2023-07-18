#include <iostream>
#include <vector>

using salario = float;

typedef std::string text_t; //typedef -> define um tipo de dado
typedef int number_t; 

int main(){
    text_t name = "Renan";
    number_t age = 22;

    salario sal_cliente = 37500.00;

    std::cout << "Hello " << name <<", nice to meet you!" << " Your age is " << age << std::endl;
    std::cout << "Your salary is " << sal_cliente << std::endl;
}