#ifndef PASSAGEIRO_H
#define PASSAGEIRO_H
#include <string>

static int idAux = 1;

using namespace std;

class Passageiro{
private:
    string nome;
    int id;

public:
    Passageiro(string nome);
    string getNome();
    void setId(int id);
    int getId();
    void setNome(string nome);
    void setNome(int id);
    string toString();

};

#endif // PASSAGEIRO_H
