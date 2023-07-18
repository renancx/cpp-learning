#include <iostream>

int main(){
    for(int index = 0; index <= 5; index++){
        if(index == 4) {
            std::cout << "STOP!" << std::endl;
            continue; 
            //break vai parar o código
            //continue vai pular aquele elemento
        }
        std::cout << "There it is -> " << index << std::endl;
    }
    std::cout << "'For' loop ended successfully" << std::endl;
}