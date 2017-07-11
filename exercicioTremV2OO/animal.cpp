#include "animal.h"

Animal::Animal(string especie, string peso) : Passageiro()
{
    this->especie = especie;
    this->peso = peso;
}

string Animal::toString(){
    return (to_string(id) + ":" + especie + ":" + peso);
}
