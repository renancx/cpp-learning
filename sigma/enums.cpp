#include <iostream>

enum DiaDaSemana {
    Domingo,
    Segunda,
    Terca,
    Quarta,
    Quinta,
    Sexta,
    Sabado
};

int main(){

    DiaDaSemana dia = Domingo;

    switch(dia){
        case Domingo:
            std::cout << "Domingo" << std::endl;
            break;
        case Segunda:
            std::cout << "Segunda" << std::endl;
            break;
        case Terca:
            std::cout << "Terca" << std::endl;
            break;
        case Quarta:
            std::cout << "Quarta" << std::endl;
            break;
        case Quinta:
            std::cout << "Quinta" << std::endl;
            break;
        case Sexta:
            std::cout << "Sexta" << std::endl;
            break;
        case Sabado:
            std::cout << "Sabado" << std::endl;
            break;
    }
}