#ifndef CLIENTE_H
#define CLIENTE_H

#include "animal.h"

using namespace std;

class Cliente{
private:
    string cpf;
    vector<Animal> animais;

public:
    Cliente(){}

    string getCPF(){
        return this->cpf;
    }

    void setCPF(string cpf){
        this->cpf = cpf;
    }

    bool addAnimal(string nome, string raca){
        Animal animal;
        animal.setNome(nome);
        animal.setRaca(raca);
        animais.push_back(animal);
        return true;
    }

    bool rmAnimal(string nome){
        for(int i = 0; i < (int) animais.size(); i++){
            if(animais[i].getNome() == nome){
                animais.erase(animais.begin() + i) ;
                return true;
            }
        }
        return false;
    }

    Animal* getAnimalNome(string nome){
        for(int i = 0; i < (int) animais.size(); i++)
            if(animais[i].getNome() == nome)
                return &animais[i];

        return NULL;
    }

    vector<Animal> getAnimais(){
        return this->animais;
    }

    void show(){
        cout << "CPF: " << this->cpf << endl;
        cout << "Animais: " << endl;

        for(auto i : animais){
            cout << "Nome: " << i.getNome() << endl;
            cout << "Raça: " << i.getRaca() << endl << endl;
        }


    }
};

#endif // CLIENTE_H
