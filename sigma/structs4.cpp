#include <iostream>

struct cargo {
    int codigo;
    std::string descricao;
};

typedef struct cargo Cargo;

struct funcionario {
    std::string nome_funcionario;
    int idade_funcionario;
    Cargo cargo_funcionario;
};

typedef struct funcionario Funcionario;

int main(){
    funcionario f1;

    f1.nome_funcionario = "Renan";
    f1.idade_funcionario = 22;
    f1.cargo_funcionario = {12, "Boss"};

    std::cout << "nome: " << f1.nome_funcionario << ", idade: " << f1.idade_funcionario << ", codigo: " << f1.cargo_funcionario.codigo << ", cargo: " << f1.cargo_funcionario.descricao << std::endl;
}