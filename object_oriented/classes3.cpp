#include <iostream>

class Empregado{ //private is the default
    private: 
        std::string nome_empregado;
        std::string cargo_empregado;
        int idade_empregado;

    public:
        //getters and setters
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

        Empregado(std::string nome, std::string cargo, int idade){
            nome_empregado = nome;
            cargo_empregado = cargo;
            idade_empregado = idade;
        };
};

int main(){
    Empregado empregado1("Renan", "Boss", 22);
    Empregado empregado2("Jegue", "Novato", 20);
    Empregado empregado3("Macaco", "CEO", 45);
    Empregado empregado4("Anciao", "CEO", 104);

    empregado1.apresentacao();
    std::cout << std::endl;

    empregado2.apresentacao();
    std::cout << std::endl;

    empregado3.apresentacao();
    std::cout << std::endl;

    empregado4.apresentacao();
    std::cout << std::endl;
 //=====================================================
    std::cout << "=======================" << std::endl;

    empregado1.setCargo("CEO");
    empregado1.apresentacao();
    std::cout << std::endl;

    empregado2.setIdade(17);
    empregado2.apresentacao();
    std::cout << std::endl;

    empregado3.setIdade(101);
    empregado3.apresentacao();
    std::cout << std::endl;

    empregado4.setNome("Gorila");
    empregado4.apresentacao();
    std::cout << std::endl;
}