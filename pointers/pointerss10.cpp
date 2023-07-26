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

    //static memory = Memory allocated during compile time

    //dynamic memory = Memory allocated during runtime
    //use the 'new' operator to allocate memory in the heap rather than the stack
    //useful when you don't know how much memory you need
    //makes your program more flexible, especially when accepting user input
}