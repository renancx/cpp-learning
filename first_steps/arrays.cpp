#include <iostream>

int main(){
    std::string car[] = {"Mustang", "Mercedes", "Lambo", "BMW"}; //arrays deve ser do mesmo tipo

    int size = sizeof(car) / sizeof(car[0]);

    for(int i = 0; i < size; i++){
        std::cout << car[i] << std::endl;
    }

    return 0;
}
