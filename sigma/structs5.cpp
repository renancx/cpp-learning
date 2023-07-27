#include <iostream>

struct carro {
    std::string marca;
    std::string modelo;
    int ano;
    std::string cor;
};

typedef struct carro Carro;

void pintar(Carro &carro, std::string cor){ //structs devem ser passadas por referência
    carro.cor = cor;
}

int main(){
    Carro c1;

    c1.marca = "Fiat";
    c1.modelo = "Uno";
    c1.ano = 2010;
    c1.cor = "Vermelho";

    pintar(c1, "Azul");

    std::cout << "Marca: " << c1.marca << ", modelo: " << c1.modelo << ", ano: " << c1.ano << ", cor: " << c1.cor << std::endl;
}