#ifndef TREM_H
#define TREM_H
#include <string>
#include <vector>
#include "passageiro.h"
#include "vagao.h"
#include "locomotiva.h"

using namespace std;

class Trem{
private:
    int idTracker{idAux++};
    vector<Vagao*> vagoes;
    Locomotiva *locomotiva;

public:
    Trem(Locomotiva *locomotiva);
    void addVagao(Vagao *vagao);
    bool embarcar(Passageiro *passageiro);
    bool desembarcar(int id);
    Vagao* searchVagao(int id);
    string toString();
};

#endif // TREM_H
