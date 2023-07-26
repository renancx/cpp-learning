#include <iostream>

void walk(int steps){
    if(steps > 0){
        std::cout << "Walking forward" << std::endl;
        walk(steps - 1);
    }
}

int main(){
    walk(10);
    return 0;
}

// advantages of recursion 
// less code and is cleaner
// useful for sorting and searching algorithms