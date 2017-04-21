#ifndef CONTATO_H
#define CONTATO_H
#include <iostream>
#include <vector>
#include <regex>
#include <algorithm>
#include "telefone.h"

using namespace std;

class Contato{

private:
    string nome;
    string email;
    vector<Telefone> lista_de_telefones;
    vector<Telefone> favoritos;

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

    bool addFavorito(Telefone *telefone){
        if(telefone != NULL){
            favoritos.push_back(*telefone);
            return true;
        }
        return false;
    }

    bool rmFavorito(Telefone *telefone){
        int a = 0;
        if(telefone != NULL){
            for(auto i : lista_de_telefones){
                if(i == *telefone){
                    favoritos.erase(favoritos.begin() + a);
                    return true;
                }
                a++;
            }
        }
        return false;
    }

    bool haveMatch(string sub){
        if(this->nome.find(sub) != std::string::npos)
            return true;
        else if(this->email.find(sub) != std::string::npos)
            return true;
        else
            for(Telefone telefone : this->lista_de_telefones)
                if(telefone.getNumero().find(sub) != std::string::npos)
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

    bool addTelefone(string numero, string desc){
        if(verificaNumeros(numero) && verificaDuplicidade(numero, lista_de_telefones)){
            this->lista_de_telefones.push_back(Telefone(numero,desc));
            return true;
        }
        return false;
    }

    bool rmTelefone(string telefone){
        for(int i = 0; i < lista_de_telefones.size(); i++){
            if(lista_de_telefones[i].getNumero() == telefone){
                if(find(favoritos.begin(), favoritos.end(), lista_de_telefones[i]) != lista_de_telefones.end())
                    favoritos.erase(find(favoritos.begin(), favoritos.end(), lista_de_telefones[i]));
                lista_de_telefones.erase(lista_de_telefones.begin() + i);
                return true;
            }
        }

        return false;
    }

    int qtdTelefones(){
        return this->lista_de_telefones.size();
    }

    Telefone* getTelefone(string numero){
        for(int i = 0; i < lista_de_telefones.size(); i++)
            if(lista_de_telefones[i].getNumero() == numero)
                return &lista_de_telefones[i];

        return NULL;
    }

    void showContatos(){
        cout << "Nome: " << this->nome << endl;
        cout << "Email: " << this->email << endl;
        cout << "Lista de telefones: ";
        for(auto i : this->lista_de_telefones)
            cout << "\n\tNumero: " << i.getNumero() << "\n\tDesc: " << i.getDesc() << endl;
    }

    void showFavoritos(){
        cout << "Favoritos: ";
        for(auto i : this->favoritos)
            cout << "\n\tNumero: " << i.getNumero() << "\n\tDesc: " << i.getDesc() << endl;
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

    static bool verificaDuplicidade(string num, vector<Telefone> lista_de_telefones){
        for(auto valor : lista_de_telefones)
            if(num == valor.getNumero())
                return false;
        return true;
    }


};

#endif // CONTATO_H
