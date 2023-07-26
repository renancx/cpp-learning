#include <iostream>

struct atleta{
    std::string nome;
    std::string esporte;
    int idade;
    double altura;
};

typedef struct atleta Atleta;

int maisVelho(Atleta a1[]){
    int maior;
    for(int i = 0; i < 3; i++){
        if(a1[i].idade>maior){
            maior = a1[i].idade;
        }
    }
    return maior;
}

double maisAlto(Atleta a1[]){
    double maior;
    for(int i = 0; i < 3; i++){
        if(a1[i].altura>maior){
            maior = a1[i].altura;
        }
    }
    return maior;
}

int main(){
    Atleta a1[3];

    for(int i = 0; i < 3; i++){
        std::cout << "Digite o nome do atleta: ";
        std::cin >> a1[i].nome;
        std::cout << "Digite o esporte do atleta: ";
        std::cin >> a1[i].esporte;
        std::cout << "Digite a idade do atleta: ";
        std::cin >> a1[i].idade;
        std::cout << "Digite a altura do atleta: ";
        std::cin >> a1[i].altura;
    }

    std::cout << "O atleta mais velho tem " << maisVelho(a1) << " anos." << std::endl;
    std::cout << "O atleta mais alto tem " << maisAlto(a1) << " metros." << std::endl;
}