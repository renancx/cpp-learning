#include <iostream>

class Empregado{ //private is the default
private: 
    int id = 3;

public:
    std::string nome_empregado;
    std::string cargo_empregado;
    int idade_empregado;

    void apresentacao(){
        std::cout << "Nome - " << nome_empregado << std::endl;
        std::cout << "Cargo - " << cargo_empregado << std::endl;
        std::cout << "Idade - " << idade_empregado << std::endl;
    };

    Empregado(std::string nome, std::string cargo, int idade){
        nome_empregado = nome;
        cargo_empregado = cargo;
        idade_empregado = idade;

    };
};

int main(){
    Empregado empregado1("Renan", "Boss", 22);

    //empregado1.nome_empregado= "Renan";
    //empregado1.cargo_empregado = "Boss";
    //empregado1.idade_empregado = 22;

    empregado1.apresentacao();
}