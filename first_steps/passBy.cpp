#include <iostream>

void passByValue(int value) { //usado quando voce quer apenas ler o valor da variavel
    value = 100;  // Modifica apenas a copia local da variavel
}

void passByReference(int& value) { //usado para quando voce quer modificar o valor da variavel
    value = 100;  // Modifica o valor da variavel original
}

int main() {
    int x = 10;

    passByValue(x);
    std::cout << "Valor de x apos passByValue: " << x << std::endl;  // Saída: 10 (valor original não foi alterado)

    passByReference(x);
    std::cout << "Valor de x apos passByReference: " << x << std::endl;  // Saída: 100 (valor original foi modificado)

    return 0;
}
