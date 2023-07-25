#include <iostream>

int sumOfElements(int array[]){
    int aux = 0;
    for(int i=0; i<5; i++){
        aux += array[i];
    }
    std::cout << "Soma dos elementos da array = " << aux << std::endl;
    return aux;
}

int main(){
    int array[] = {1,2,3,4,5};
    int *p = array;

    sumOfElements(p);
    //ou sumOfElements(array);
}