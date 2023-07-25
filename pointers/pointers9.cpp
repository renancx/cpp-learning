#include <iostream>

int sumOfElements(int array[], int size){
    int aux = 0;
    for(int i=0; i<size; i++){
        aux += array[i];
    }
    std::cout << "Soma dos elementos da array = " << aux << std::endl;
    return aux;
}

int main(){
    int array[] = {1,2,3,4,5};
    int *p = array;
    int size = sizeof(array)/sizeof(array[0]);

    sumOfElements(p, size);
    //ou sumOfElements(array);
}