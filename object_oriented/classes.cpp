#include <iostream>

struct empresa{
    std::string nome_empresa;
    int id_empresa;
};

typedef struct empresa Empresa;

class Empregado { //quando voce quer adicionar um novo empregado, essa classe vai ser o molde para ele
    public:    
        std::string nome_empregado;
        Empresa empresa_empregado;

        Empregado(std::string nome, Empresa empresa){
            this->nome_empregado = nome;
            this->empresa_empregado = empresa;
        };
};

int main(){

    Empregado empregado1("Renan", {"Google", 1});

    std::cout << empregado1.nome_empregado << std::endl;
    std::cout << empregado1.empresa_empregado.nome_empresa << std::endl;
    std::cout << empregado1.empresa_empregado.id_empresa << std::endl;
}