#include <iostream>

int main(){
    int a = 30; // goes to stack
    int *p;
    p = &a; // goes to stack
    std::cout << p << std::endl;
    std::cout << *p << std::endl;
    std::cout << &p << "\n\n" << std::endl;

    p = new int; // goes to heap
    *p = 10;
    std::cout << p << std::endl;
    std::cout << *p << std::endl;
    std::cout << &p << "\n\n" << std::endl;
    delete p;
    std::cout << p << std::endl;
    return 0;
}