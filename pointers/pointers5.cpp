#include <iostream>

int main(){
    int x;
    int *p, **p2;

    x = 10; //atribuindo valor a x
    p = &x; //apontando p para x
    p2 = &p; //apontando p2 para p

    std::cout << "Conteudo de x: " << x << std::endl;
    std::cout << "Conteudo de p: " << p << std::endl;
    std::cout << "Conteudo de p2: " << p2 << std::endl;

    std::cout << "\n-------------------\n"<< std::endl;
    std::cout << "Conteudo de x: " << x << std::endl;
    std::cout << "Conteudo de *p: " << *p << std::endl;
    std::cout << "Conteudo de **p2: " << **p2 << std::endl;
}