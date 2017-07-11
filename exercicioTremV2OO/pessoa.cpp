#include "pessoa.h"

Pessoa::Pessoa(string nome) : Passageiro(){
    this->nome = nome;
}

string Passageiro::toString(){
    return (to_string(id) + ":" + "nome");
}
