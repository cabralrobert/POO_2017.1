#include "passageiro.h"

using namespace std;

Passageiro::Passageiro(string nome):
    id(idAux)
{
    this->nome = nome;
}

string Passageiro::getNome(){
    return this->nome;
}

void Passageiro::setId(int id){
    this->id = id;
}

int Passageiro::getId(){
    return this->id;
}

void Passageiro::setNome(string nome){
    this->nome = nome;
}

void Passageiro::setNome(int id){
    this->id = id;
}

string Passageiro::toString(){
    return (to_string(id) + ":" + nome);
}
