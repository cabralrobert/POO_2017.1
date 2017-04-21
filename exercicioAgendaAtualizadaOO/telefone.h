#ifndef TELEFONE_H
#define TELEFONE_H
#include <vector>

using namespace std;

class Telefone{
private:
    string numero;
    string descricao;

public:
    Telefone(string numero, string desc){
        this->numero = numero;
        this->descricao = desc;
    }

    void setNumero(string num){
        this->numero = num;
    }

    void setDesc(string desc){
        this->descricao = desc;
    }

    string getNumero(){
        return this->numero;
    }

    string getDesc(){
        return this->descricao;
    }

    friend bool operator==(const Telefone &t1, const Telefone &t2){
        return(t1.numero == t2.numero &&
               t1.descricao == t2.descricao);
    }

    friend bool operator!=(const Telefone &t1, const Telefone &t2){
        return(t1.numero != t2.numero ||
               t1.descricao != t2.descricao);
    }

};

#endif // TELEFONE_H
