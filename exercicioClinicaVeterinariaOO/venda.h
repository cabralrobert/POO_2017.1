#ifndef VENDA_H
#define VENDA_H

#include "servico.h"

class Venda{
private:
    Servico servico;
    Cliente cliente;
    Animal animal;
    float valor;

public:
    Venda(Servico servico, Cliente cliente, Animal animal){
        this->servico = servico;
        this->cliente = cliente;
        this->animal = animal;

        valor = servico.getPreco();
        string raca = animal.getRaca();

        if(raca == "CACHORRO")
            valor *= 1.20;
        if(raca == "GATO")
            valor *= 1.10;
        if(raca == "URSO")
            valor *= 1.90;
    }

    float getValor(){
        return this->valor;
    }

    Servico getServico(){
        return this->servico;
    }

    Cliente getCliente(){
        return this->cliente;
    }

    Animal getAnimal(){
        return this->animal;
    }

    void setServico(Servico servico){
        this->servico = servico;
    }

    void setCliente(Cliente cliente){
        this->cliente = cliente;
    }

    void setAnimal(Animal animal){
        this->animal = animal;
    }
};

#endif // VENDA_H
