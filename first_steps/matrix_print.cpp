#include <iostream>

int main(){
    int A[2][3] = {1, 1, 1,
                   2, 2, 2};

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            std::cout << A[i][j] << " ";
        }
        std::cout << std::endl;
    }
}