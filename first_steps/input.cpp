#include <iostream>
//www.cplusplus.com/reference/string/string/


int main(){
    //cout << insertion operator
    //cin >> extraction operator
    std::string nome;
    std::string name;

    std::cout << "Qual o seu nome? " << std::endl;
    std::cin >> name;

    std::cout << "Qual o seu nome completo? " << std::endl;
    std::getline(std::cin >> std::ws, nome); //para pegar strings com espaço (pega toda a linha)


    std::cout << "Seu nome completo eh " << nome << std::endl;
    std::cout << "Seu nome eh " << name << std::endl;
    return 0;
}