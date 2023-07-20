#include <iostream>

int main(){

    std::string nomes[] = {"Renan", "Gorila", "Macaco", "Chimpanze"};

    for(std::string nome : nomes){
        std::cout << nome << std::endl;
    }
    return 0;
}