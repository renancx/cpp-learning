#include <iostream>
//outra maneira inclui usar ternary operators

int main() {
    int age;

    std::cout << "Whats your age?" << std::endl;
    std::cin >> age;

    if(age < 18){
        std::cout << "Muito novo" << std::endl;
    }
    else if(age >= 18 && age < 60){
        std::cout << "Adulto" << std::endl;
    }
    else{
        std::cout << "Idoso" << std::endl;
    }

}