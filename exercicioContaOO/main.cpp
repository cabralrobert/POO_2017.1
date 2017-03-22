#include <iostream>
#include <vector>

using namespace std;

class Conta{
private:
    int numero;
    float saldo;
    vector<float> operacoes;

public:
    Conta(int numero, float saldo = 0.0){
        this->numero = numero;
        this->saldo = saldo;
        operacoes.push_back(saldo);
    }

    bool saque(float value){
        if(value > 0 && value <= this->saldo){
            this->saldo -= value;
            operacoes.push_back(-value);
            return true;
        }
        return false;
    }

    bool deposito(float value){
        if(value > 0){
            this->saldo += value;
            operacoes.push_back(value);
            return true;
        }
        return false;
    }

    float consultarSaldo(){
        return this->saldo;
    }

    bool transferencia(Conta &other, float value){
        if(value > 0 && value <= this->saldo){
            saque(value);
            other.deposito(value);
        }
    }

    vector<float> extrato(){
        return this->operacoes;
    }
};

int main()
{
    Conta robert(02410);
    Conta mateus(02411);

    if(robert.deposito(20))
        cout << "20 depositado" << endl;
    else
        cout << "Erro no deposito" << endl;

    if(robert.transferencia(mateus, 10))
        cout << "10 transferido" << endl;
    else
        cout << "Erro na transferencia" << endl;

    cout << "Saldo Robert: " << robert.consultarSaldo() << endl;
    cout << "Saldo Mateus: " << mateus.consultarSaldo() << endl;


    for(auto valor : robert.extrato())
        cout << valor << endl;

    return 0;
}






