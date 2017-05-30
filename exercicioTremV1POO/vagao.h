#ifndef VAGAO_H
#define VAGAO_H
#include <string>
#include "passageiro.h"
#include <vector>

using namespace std;

class Vagao{
private:
    int capacidade;
    vector<Passageiro*> passageiros;
public:
    Vagao(int capacidade);
    int getEspacosLivres();
    int getCapacidade();
    bool embarcar(Passageiro* passageiro);
    bool desembarcar(int id);
    Passageiro *searchPassageiro(int id);
    string toString();
};

#endif // VAGAO_H
