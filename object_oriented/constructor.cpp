#include <iostream>

class Student{
    public:
        std::string name;
        std::string course;
        int age;

        Student(std::string name, std::string course, int age){
            this->name = name; 
            this->course = course; 
            this->age = age;
        }

        void study(){
            std::cout << "Studying" << std::endl;
        }

        void sleep(){
            std::cout << "Sleeping" << std::endl;
        }
};

int main(){

    Student student1("Renan", "Computer Science", 22);

    std::cout << student1.name << std::endl;
    std::cout << student1.course << std::endl;
    std::cout << student1.age << "\n" << std::endl;

    student1.study();
    student1.sleep();

}