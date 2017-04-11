#ifndef CONTATO_H
#define CONTATO_H
#include <iostream>
#include <vector>
#include <regex>
#include <algorithm>

using namespace std;

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

    bool haveMatch(string sub){
        if(this->nome.find(sub) != std::string::npos)
            return true;
        else if(this->email.find(sub) != std::string::npos)
            return true;
        else
            for(string telefone : this->lista_de_telefones)
                if(telefone.find(sub) != std::string::npos)
                    return true;
        return false;
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
        auto iterador = std::find(lista_de_telefones.begin(), lista_de_telefones.end(), numero);

        if(iterador == lista_de_telefones.end())
            return false;

        lista_de_telefones.erase(iterador);
        return true;
    }

    int qtdTelefones(){
        return this->lista_de_telefones.size();
    }

    void showContatos(){
        cout << "Nome: " << this->nome << endl;
        cout << "Email: " << this->email << endl;
        cout << "Lista de telefones: " << endl;
        for(auto i : this->lista_de_telefones)
            cout << i << endl;
    }

    static bool validaEmail(string& email)
    {
       regex pattern
          ("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");

       return regex_match(email, pattern);
    }

    static bool verificaNumeros(string num){
        int i = 0;
        while(num[i] != '\0'){
            if(num[i] < '0' || num[i] > '9')
                return false;

            i++;
        }
        return true;
    }

    static bool verificaDuplicidade(string num, vector<string> lista_de_telefones){
        for(auto valor : lista_de_telefones)
            if(num == valor)
                return false;
        return true;
    }


};

#endif // CONTATO_H
