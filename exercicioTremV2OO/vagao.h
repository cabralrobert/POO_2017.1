#ifndef VAGAO_H
#define VAGAO_H
#include <string>
#include "passageiro.h"
#include <vector>

using namespace std;

class Vagao{
protected:
    vector<Passageiro*> passageiros;
public:
    Vagao();
    int getNumPassageiros();
    virtual bool embarcar(Passageiro* passageiro);
    bool desembarcar(int id);
    Passageiro *searchPassageiro(int id);
    string toString();
};

#endif // VAGAO_H
