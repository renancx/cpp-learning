#include <iostream>

struct aluno{
    std::string nome;
    double nota;
    int idade;
};

typedef struct aluno Aluno;

int main(){
    Aluno aluno1;
    Aluno aluno2;

    aluno1.nome = "Renan";
    aluno1.nota = 9.9;
    aluno1.idade = 22;

    aluno2.nome = "Camila";
    aluno2.nota = 9.0;
    aluno2.idade = 21;

    std::cout << aluno1.nome << ", " << aluno1.nota << ", " << aluno1.idade << std::endl;
    std::cout << aluno2.nome << ", " << aluno2.nota << ", " << aluno2.idade << std::endl;
}