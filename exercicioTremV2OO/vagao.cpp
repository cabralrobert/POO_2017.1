#include "vagao.h"

Vagao::Vagao(){

}


virtual bool Vagao::embarcar(Passageiro* passageiro) = 0;

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
    string value;
    for(Passageiro *aux : passageiros)
        value += aux->toString();
    return value;
}
