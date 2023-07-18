#include <iostream>
#include <cmath>
//www.cplusplus.com/reference/cmath/
//muitas funcoes matematicas uteis para o codigo

int main(){

    const double PI = 3.14159265359;
    double x = 3;
    double y = 4;

    double max = std::max(x, y);
    double min = std::min(x, y);

    std::cout << "O maior numero eh = " << max << std::endl;
    std::cout << "O menor numero eh = " << min << std::endl;

    double pot = pow(x, 2);
    double sqrt = std::sqrt(x);

    std::cout << "O valor de x^2 eh = " << pot << std::endl;
    std::cout << "A raiz de x eh = " << sqrt << std::endl;

    int absoluto = abs(-3);

    std::cout << "O valor absoluto de -3 eh = " << absoluto << std::endl;

    std::cout << "O valor arredondado de pi eh = " << round(PI) << std::endl;

}