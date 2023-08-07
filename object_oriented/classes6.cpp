#include <iostream>

class Pessoa{
    private:
        std::string nome;
        int idade;
        
    public:
        std::string getName() const{
            return nome;
        }
        void setName(std::string name){
            nome = name;
        }

        int getIdade() const{ 
            return idade;
        }
        void setIdade(int age){
            idade = age;
        }

        void andar();
};

// member function definition outside the class (using the scope resolution operator :: )
void Pessoa::andar(){
    std::cout << "A pessoa chamada " << getName() << " esta caminhando" << std::endl;
}

int main(){
    Pessoa p1;
    p1.setIdade(15);
    p1.setName("Renan");
    p1.andar();
}