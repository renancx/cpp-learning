#include <iostream>

int main(){
    const float PI = 3.141; //const -> variavel somente para leitura, nao pode ser alterada 
    int age = 22; //declarar tudo na mesma linha

    float n; //declarar e inicializar em linhas separadas
    n = 3.14;

    bool b = true;
    char c = 'a';

    

    std::string name = "Renan"; //declarar string

    std::cout << "Hello " << name << ", your age is "<< age << std::endl;
    std::cout << "The value of pi is " << PI << std::endl;
    std::cout << "The value of n is " << n << std::endl;
    std::cout << "The value of b is " << b << std::endl;
    std::cout << "The value of c is " << c << std::endl;

    return 0; //return 0 -> everything is ok | return 1 -> something went wrong
}