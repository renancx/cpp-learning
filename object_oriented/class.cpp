#include <iostream>

class Human{
    public: 
        std::string name;
        std::string job;
        int age;

        void eat(){
            std::cout << "Eating" << std::endl;
        };

        void sleep(){
            std::cout << "Sleeping" << std::endl;
        };
};

int main(){

    Human human1; //human1 is an object

    human1.name = "Renan";
    human1.age = 22;
    human1.job = "boss";

    std::cout << human1.name << std::endl;
    std::cout << human1.age << std::endl;
    std::cout << human1.job << "\n" << std::endl;

    human1.eat();
    human1.sleep();    
}