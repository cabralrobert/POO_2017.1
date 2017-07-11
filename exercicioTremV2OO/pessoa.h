#ifndef PESSOA_H
#define PESSOA_H

#include "passageiro.h"

class Pessoa : Passageiro {
private:
    string nome;

public:
    Pessoa(string nome);
    string toString();
};

#endif // PESSOA_H
