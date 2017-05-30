#include "vagao.h"

Vagao::Vagao(int capacidade){
    this->capacidade = capacidade;
}

int Vagao::getEspacosLivres(){
    return this->capacidade - passageiros.size();
}

int Vagao::getCapacidade(){
    return this->capacidade;
}

bool Vagao::embarcar(Passageiro* passageiro){
    if((int)passageiros.size() < capacidade){
        passageiros.push_back(passageiro);
        return true;
    }
    return false;
}

bool Vagao::desembarcar(int id){
    int i = 0;
    for(Passageiro* aux : passageiros){
        if(aux->getId() == id){
            passageiros.erase(passageiros.begin() + i);
            return true;
        }
        i++;
    }
    return false;
}

Passageiro* Vagao::searchPassageiro(int id){
    for(Passageiro *aux : passageiros)
        if(aux->getId() == id)
            return aux;
    return NULL;
}

string Vagao::toString(){
    int j = 0;
    string value;
    value = "[ ";

    for(int i = 0; i < capacidade; i++){
        for(; j < (int)passageiros.size();j++){
            value += passageiros[j]->toString() + " ";
            i++;
        }
        if(i < capacidade)
            value += " _ ";
    }
    value += "]";
    return value;
}
