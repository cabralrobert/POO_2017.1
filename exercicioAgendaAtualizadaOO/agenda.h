#ifndef AGENDA_H
#define AGENDA_H
#include "contato.h"

class Agenda{
private:
    vector<Contato> contatos;
    string login, senha;
public:

    Agenda(){}

    void setLogin(string login){
        this->login = login;
    }

    void setSenha(string senha){
        this->senha = senha;
    }

    string getLogin(){
        return this->login;
    }

    string getSenha(){
        return this->senha;
    }

    bool adicionaContato(Contato other){
        for(auto aux : this->contatos)
            if(other.getNome() == aux.getNome()){
                return false;
            }
        contatos.push_back(other);
        return true;
    }

    bool removerContato(string nome){
        for(int i = 0; (unsigned) i < contatos.size(); i++){
            if(nome == contatos[i].getNome()){
                contatos.erase(contatos.begin() + i);
                return true;
            }
        }
        return false;
    }

    Contato *procurarContato(string nome){
        for(auto &aux : contatos)
            if(nome == aux.getNome())
                return &aux;
        return NULL;
    }

    vector<Contato> procurarPorSubstring(string sub){
        vector<Contato> other;
        for(auto aux : this->contatos)
            if(aux.haveMatch(sub))
                other.push_back(aux);
        return other;
    }

    vector<Contato> pegarContatos(){
        return this->contatos;
    }

};


#endif // AGENDA_H
