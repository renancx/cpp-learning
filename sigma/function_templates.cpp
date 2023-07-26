#include <iostream>

template <typename Teste>

Teste max(Teste x, Teste y){
    if (x > y){
        return x;
    }
    return y;
}

int main(){
    std::cout << max(3, 5) << std::endl;
    std::cout << max(3.0, 5.0) << std::endl;
    std::cout << max(3.0f, 5.0f) << std::endl;
    std::cout << max('a', 'b') << std::endl;
    std::cout << max("abc", "abd") << std::endl;
    return 0;
}