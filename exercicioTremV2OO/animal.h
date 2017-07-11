#ifndef ANIMAL_H
#define ANIMAL_H

#include "passageiro.h"

class Animal : Passageiro
{
protected:
    int id;
    string especie;
    string peso;
public:
    Animal(string especie, string peso);
    string toString();
};

#endif // ANIMAL_H
