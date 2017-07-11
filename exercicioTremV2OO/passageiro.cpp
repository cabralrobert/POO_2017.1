#include "passageiro.h"

using namespace std;

Passageiro::Passageiro():
    id(idAux)
{    
}

void Passageiro::setId(int id){
    this->id = id;
}

int Passageiro::getId(){
    return this->id;
}

string Passageiro::toString(){
    return (to_string(id) + ":" + "TIPO A IMPLEMENTAR");
}
