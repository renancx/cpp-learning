#include <iostream>

class Pizza{
    public:
        std::string topping1;
        std::string topping2;

        Pizza(std::string topping1, std::string topping2){
            this->topping1 = topping1;
            this->topping2 = topping2;
        }

        Pizza(std::string topping1){
            this->topping1 = topping1;
        }
};

int main(){
    Pizza pizza1("cheese", "pepperoni");
    Pizza pizza2("cheese");

    std::cout << pizza1.topping1 << std::endl;
    std::cout << pizza1.topping2 << "\n" << std::endl;

    std::cout << pizza2.topping1 << std::endl;
    std::cout << pizza2.topping2 << std::endl; //This will print a random value because the constructor doesn't have a second parameter

}