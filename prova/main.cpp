#include <iostream>
#include <vector>

using namespace std;

class Veiculo{
private:
    string placa;

public:
    Veiculo(string placa){
        this->placa = placa;
    }

    string getPlaca(){
        return this->placa;
    }

    virtual string toString(){}
};

class Carro : public Veiculo{
private:
    float valor;

public:
    Carro(string placa, float preco) :
        Veiculo(placa), valor(preco)
    {

    }

    float getValor(){
        return this->valor;
    }

    string toString(){
        return "Carro: " + getPlaca() + " : " + to_string(getValor());
    }
};

class Caminhao : public Veiculo{
private:
    int maxCarga;

public:
    Caminhao(string placa, int maxCarga) :
        Veiculo(placa), maxCarga(maxCarga)
    {

    }

    int getMaxCarga(){
        return this->maxCarga;
    }

    string toString(){
        return "Caminhão: " + getPlaca() + " : " + to_string(maxCarga);
    }
};

int main()
{    
    Carro carro1("AAA-0000", 10000);
    Carro carro2("BBB-1111", 20000);
    Caminhao caminhao1("ZZZ-2222", 10);
    Caminhao caminhao2("GGG-4563", 100);

    vector<Veiculo*> vet;
    vet.push_back(&carro1);
    vet.push_back(&carro2);
    vet.push_back(&caminhao1);
    vet.push_back(&caminhao2);

    for(Veiculo* aux : vet){
        cout << aux->toString() << endl;
    }

    return 0;
}










