#ifndef ANIMAL_H
#define ANIMAL_H

using namespace std;

class Animal{
private:
    string nome;
    string raca;

public:
    Animal(){}

    string getNome(){
        return this->nome;
    }

    string getRaca(){
        return this->raca;
    }

    void setNome(string nome){
        this->nome = nome;
    }

    void setRaca(string raca){
        this->raca = raca;
    }
};

#endif // ANIMAL_H
