#include <iostream>

//https://hackingcpp.com/cpp/cheat_sheets.html

int main(){
    void *ponteiro; //declaracao de ponteiro generico

    int numero = 10;
    std::string str = "Opa tudo bom";

    ponteiro = &numero;
    *(int*)ponteiro = 20;

    std::cout << numero << std::endl; //20
    std::cout << *(int*)ponteiro << std::endl; //20
    std::cout << ponteiro << std::endl;

    ponteiro = &str;
    *(std::string*)ponteiro = "Opa tudo bem";

    std::cout << "\n-------------------\n"<< std::endl;
    std::cout << str << std::endl;
    std::cout << "Ponteiro: " << *(std::string*)ponteiro << std::endl;
    std::cout << "Endereco: " << ponteiro << std::endl;

    // eh o mesmo ponteiro mas com tipos diferentes

    /*
    Pode-se concluir então que o ponteiro genérico é poderoso por permitir alternar
    o apontamento entre vários tipos, o que trás várias possibilidades ao programador.
    Além disso, pode-se dizer que a implementação é relativamente simples, pois há pouca
    mudança em relação aos ponteiros de um tipo específico, a única diferença reside no
    fato de que é necessário realizar a conversão do ponteiro genérico ao fazer atribuição,
    ou obter o valor do conteúdo para o qual o ponteiro aponta.
    */
}