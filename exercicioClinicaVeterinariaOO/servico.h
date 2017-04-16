#ifndef SERVICO_H
#define SERVICO_H

class Servico{
private:
    string nome;
    float preco;

public:
    Servico(){}

    string getNome(){
        return this->nome;
    }

    float getPreco(){
        return this->preco;
    }

    void setNome(string nome){
        this->nome = nome;

    }

    void setPreco(float preco){
        this->preco = preco;
    }
};

#endif // SERVICO_H
