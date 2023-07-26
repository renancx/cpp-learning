#include <iostream>

template <typename Teste, typename Outro>

auto max(Teste x, Outro y){
    return y < x ? x : y;
}

int main(){
    std::cout << max(3, 5.3) << std::endl;
    std::cout << max(3.0, 5.0) << std::endl;
    std::cout << max(3.0f, 5.0f) << std::endl;
    std::cout << max('a', 'b') << std::endl;
    std::cout << max("abc", "abd") << std::endl;
    return 0;
}