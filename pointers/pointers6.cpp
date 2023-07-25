#include <iostream>

int main(){
    int x = 5;
    int *p = &x;
    int **q = &p;
    int ***r = &q;

    std::cout << "x = " << x << std::endl;
    std::cout << "&x = " << &x << std::endl;
    std::cout << "\n*p = " << *p << std::endl;
    std::cout << "p = " << p << std::endl;
    std::cout << "\n**q = " << **q << std::endl;
    std::cout << "q = " << q << std::endl;
    std::cout << "\n***r = " << ***r << std::endl;
    std::cout << "r = " << r << std::endl;

    std::cout << "\n\n&p = " << &p << std::endl;
    std::cout << "&q = " << &q << std::endl;
    std::cout << "&r = " << &r << std::endl;

}