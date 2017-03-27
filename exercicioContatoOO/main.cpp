#include <iostream>
#include <vector>
#include <regex>

using namespace std;

bool validaEmail(const std::string& email)
{
   regex pattern
      ("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");

   return regex_match(email, pattern);
}

bool verificaNumeros(string num){
    int i = 0;
    while(num[i] != '\0'){
        if(num[i] < '0' && num[i] > '9')
            return false;

        i = i + 1;
    }
    return true;
}

bool verificaDuplicidade(string num, vector<string> lista_de_telefones){
    for(auto valor : lista_de_telefones){
        if(num == valor)
            return false;
    }
    return true;
}

class Contato{

private:
    string nome;
    string email;
    vector<string> lista_de_telefones;

public:
    Contato(string nome){
        this->nome = nome;
    }

    void setNome(string nome){
        this->nome = nome;
    }

    string getNome(){
        return this->nome;
    }

    bool setEmail(string email){
        if(validaEmail(email)){
            this->email = email;
            return true;
        }
        return false;
    }

    string getEmail(){
        return this->email;
    }

    bool addTelefone(string numero){
        if(verificaNumeros(numero) && verificaDuplicidade(numero, lista_de_telefones)){
            this->lista_de_telefones.push_back(numero);
            return true;
        }
        return false;
    }

    bool rmTelefone(string numero){
        return true;
    }

    int qtdTelefones(){
        return this->lista_de_telefones.size();
    }

    vector<string> getTelefones(){
        return this->lista_de_telefones;
    }
};

int main()
{

    Contato contato("Robert");
    contato.setEmail("robertcabral@alu.ufc.br");
    cout << "Usuario: " << contato.getNome();
    cout << "\nEmail: " << contato.getEmail() << endl;

    contato.addTelefone("88996638768");
    contato.addTelefone("88996638765");
    contato.addTelefone("88996638268");

    cout << "#########LISTA#######" << endl;

    for(auto valor : contato.getTelefones()){
        cout << valor << endl;
    }

    cout << "Quantidade: " << contato.qtdTelefones() << endl;



    return 0;
}
