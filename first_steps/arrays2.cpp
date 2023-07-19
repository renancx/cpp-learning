#include <iostream>

//funcao que vai retornar a posicao do numero digitado
int buscarElemento(int vetor[], int size, int valor_numeros) {
    for(int i = 0; i < size; i++){
        if(vetor[i] == valor_numeros){
            return i;
        }
    }
    return -1; // -1 significa que um valor não foi encontrado
}

//funcao que vai retornar a posicao da string digitada
int buscarComidas(std::string comidas[], int size_comidas, std::string valor_comidas) {
    for(int i = 0; i < size_comidas; i++){
        if(comidas[i] == valor_comidas){
            return i;
        }
    }
    return -1; // -1 significa que um valor não foi encontrado
}

int main(){
    //declaracao da array de numeros
    int vetor[] = {12, 34, 56, 78, 90, 11, 33, 55, 77, 99};
    int size = sizeof(vetor)/sizeof(vetor[0]);
    int valor_numeros;
    int index_numeros;

    //declaracao da array de strings
    std::string comidas[] = {"Pizza", "Batata Frita", "Hamburger"};
    int size_comidas = sizeof(comidas)/sizeof(comidas[0]);
    std::string valor_comidas;
    int index_comidas;

    //input e output
    std::cout << "Informe o numero" << std::endl;
    std::cin >> valor_numeros;
    std::cout << "Informe a comida" << std::endl;
    std::getline(std::cin >>  std::ws, valor_comidas);

    //chamada de funcao e output equivalente ao resultado encontrado para a array de int
    index_numeros = buscarElemento(vetor, size, valor_numeros);
    if(index_numeros == -1){
        std::cout << "\nO numero nao esta na array\n";
    }
    else {
        std::cout << "\nO numero esta na posicao " << index_numeros << std::endl;
    }

    //chamada de funcao e output equivalente ao resultado encontrado para a array de string
    index_comidas = buscarComidas(comidas, size_comidas, valor_comidas);
    if(index_comidas == - 1){
        std::cout << "A comida nao esta na array\n" << std::endl;
    }
    else {
        std::cout << "A comida esta na posicao " << index_comidas << std::endl;
    }

    return 0;
}