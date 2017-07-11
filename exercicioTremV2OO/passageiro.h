#ifndef PASSAGEIRO_H
#define PASSAGEIRO_H
#include <string>

static int idAux = 1;

using namespace std;

class Passageiro{
private:    
    int id;

public:
    Passageiro();
    void setId(int id);
    int getId();    
    string toString();

};

#endif // PASSAGEIRO_H
