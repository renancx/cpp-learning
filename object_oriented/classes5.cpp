#include <iostream>

class AbstractEmpregado{
    public:
        virtual void solicitarPromocao() = 0;
};

class Empregado:AbstractEmpregado { //private is the default
    private: //private can only be accessed by the class itself
        std::string cargo_empregado;
        int idade_empregado;

    protected: //protected is like private, but it can be accessed by the derived class
        std::string nome_empregado;

    public: //public can be accessed by anyone
        void setNome(std::string nome){
            nome_empregado = nome;
        }
        std::string getNome() const{
            return nome_empregado;
        }

        void setCargo(std::string cargo){
            if (cargo != "Boss" && cargo != "CEO"){
                cargo = "Empregado";
            }
            cargo_empregado = cargo;
        }
        std::string getCargo() const{
            return cargo_empregado;
        }

        void setIdade(int idade){
            if (idade <= 0){
                idade = 0;
            }
            else if (idade < 18 && idade > 0){
                cargo_empregado = "Estagiario";
            }
            idade_empregado = idade;
        }
        int getIdade() const{
            return idade_empregado;
        }

    //=============================================================
        void apresentacao(){
            std::cout << "Nome - " << nome_empregado << std::endl;
            std::cout << "Cargo - " << cargo_empregado << std::endl;
            std::cout << "Idade - " << idade_empregado << std::endl;
        };

        // This function is pure virtual, so it must be implemented by the derived class
        void solicitarPromocao(){
            if (idade_empregado > 30){
                std::cout << nome_empregado << " foi promovido!" << std::endl;
                }
            else{
                std::cout << nome_empregado << " nao foi promovido!" << std::endl;
            }
        }

        virtual void trabalhar(){ //virtual is used to make the function polymorphic
        //it means that the function can be overriden by the derived class
        //if the derived class does not override the function, the base class function will be used
            std::cout << nome_empregado << " esta trabalhando como empregado" << std::endl;
        }

        //Constructor
        Empregado(std::string nome, std::string cargo, int idade){
            nome_empregado = nome;
            cargo_empregado = cargo;
            idade_empregado = idade;
        };
};

class Programador: public Empregado { //Programador eh uma classe filho e tem todas as propriedades da classe Empregado
    public:
        std::string linguagem_favorita;

        Programador(std::string nome, std::string cargo, int idade, std::string linguagem)
            :Empregado(nome, cargo, idade)
        {
            linguagem_favorita = linguagem;
        }

        void corrigir_bug(){
            std::cout << nome_empregado << " tem " << getIdade() << " anos, ele esta usando a linguagem " << linguagem_favorita << " para concertar os bugs\n" << std::endl;
        }

        void trabalhar(){ //override the base class function
        //se nao tivesse o virtual na funcao trabalhar() da classe Empregado, essa funcao nao seria chamada
        //se nao tivesse a implementacao dessa funcao na classe Programador, a funcao trabalhar() da classe Empregado seria chamada
            std::cout << nome_empregado << " esta trabalhando como programador " << std::endl;
        }
};

class Professor: public Empregado { //public eh para que as propriedades da classe Empregado sejam publicas para a classe Professor
    public:
        std::string materia_professor;

        Professor(std::string nome, std::string cargo, int idade, std::string materia)
            :Empregado(nome, cargo, idade)
        {
            materia_professor = materia;
        }

        void preparar_aula(){
            std::cout << nome_empregado << " tem " << getIdade() << " anos e esta preparando aula de " << materia_professor << std::endl;
        }

        void trabalhar(){
            std::cout << nome_empregado << " esta trabalhando como professor, ele(a) tem " << getIdade() << " anos" << std::endl;
        }
};

int main(){

    Programador prog1 = Programador("Renan", "Boss", 22, "C++"); 
    //prog1.trabalhar();

    Professor prof1 = Professor("Camila", "Professora", 21, "Enfermagem");
    //prof1.trabalhar();

    //polymorphism
    Empregado *e1 = &prog1;
    Empregado *e2 = &prof1;

    e1->trabalhar();
    e2->trabalhar();
}