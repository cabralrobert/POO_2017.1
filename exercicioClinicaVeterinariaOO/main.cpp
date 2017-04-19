#include <iostream>
#include <vector>
#include <unistd.h>
#include "cliente.h"
#include "venda.h"
#include "servico.h"
#include "animal.h"

using namespace std;

class ClinicaVeterinaria{
private:
    vector<Venda> vendas;
    vector<Cliente> clientes;
    vector<Servico> servicos;
    float saldo;
    int i;

public:
    ClinicaVeterinaria(){
        this->saldo = 0.0;
    }

    float getSaldo(){
        return this->saldo;
    }

    bool addCliente(string cpf){
        Cliente cliente;
        for(auto i : clientes)
            if(i.getCPF() == cpf)
                return false;

        cliente.setCPF(cpf);
        clientes.push_back(cliente);
        return true;
    }

    bool rmCliente(string cpf){
        for(int i = 0; i < (int)clientes.size(); i++){
            if(clientes[i].getCPF() == cpf){
                clientes.erase(clientes.begin() + i);
                return true;
            }
        }
        return false;
    }

    Cliente *getCliente(string cpf){
        for(int i = 0; i < (int) clientes.size(); i++)
            if(clientes[i].getCPF() == cpf)
                return &clientes[i];

        return NULL;
    }

    bool addServico(string nome, float preco){
        Servico serv;
        serv.setNome(nome);
        serv.setPreco(preco);
        servicos.push_back(serv);
        return true;
    }

    Servico* getServico(string nome){
        for(int i = 0; i < (int)servicos.size(); i++)
            if(servicos[i].getNome() == nome)
                return &servicos[i];
        return NULL;
    }

    bool rmServico(string nome){
        for(int i = 0;i < (int) servicos.size();i++){
            if(servicos[i].getNome() == nome){
                servicos.erase(servicos.begin() + i);
                return true;
            }
        }
        return false;
    }

    bool venderServico(string servico, string cpf, string animal){

        Cliente* clie = getCliente(cpf);;
        Servico* serv = getServico(servico);
        if(serv != NULL && clie != NULL){
            Animal* anim = clie->getAnimalNome(animal);
            if(anim != NULL){
                Venda venda(*serv, *clie, *anim, i);
                i = venda.getI();
                saldo += venda.getValor();
                vendas.push_back(venda);
                return true;
            }
            return false;
        }

        return false;
    }

    void showServicos(){
        for(auto aux : servicos){
            cout << "\nNome do serviço: " << aux.getNome() << "\n" <<
                    "Preço do serviço: " << aux.getPreco() << endl << endl;
        }
    }

    void mostrarVendas(){
        for(auto aux : vendas){
            cout << "\nNome do animal: " << aux.getAnimal().getNome() << "\n" <<
                    "Raça do animal: " << aux.getAnimal().getRaca() << "\n" <<
                    "CPF do cliente: " << aux.getCliente().getCPF() << "\n" <<
                    "Nome do serviço: " << aux.getServico().getNome() << "\n" <<
                    "Valor do serviço: " << aux.getValor() << endl << endl;
        }
    }
};

int main()
{
    ClinicaVeterinaria cv;
    int op = -1;
    string cpf,nome,raca;
    float preco;
    Cliente* cliente;

    while(op){
        cout << "\nDigite 1 para adicionar cliente;" << endl;
        cout << "Digite 2 para remover cliente;" << endl;
        cout << "Digite 3 para procurar cliente;" << endl;
        cout << "Digite 4 para adicionar um serviço;" << endl;
        cout << "Digite 5 para remover um serviço;" << endl;
        cout << "Digite 6 para adicionar animal ao cliente;" << endl;
        cout << "Digite 7 para remover animal do cliente;" << endl;
        cout << "Digite 8 para mostrar todos os serviços;" << endl;
        cout << "Digite 9 para consultar saldo;" << endl;
        cout << "Digite 10 para vendar um serviço;" << endl;
        cout << "Digite 11 para mostrar todas as vendas;" << endl;
        cout << "Digite 0 para sair;" << endl;
        cout << "\nDigite a opção: ";
        cin >> op;

        switch(op){
        case 1:
            cout << "Digite o cpf do cliente: ";
            cin >> cpf;
            if(cv.addCliente(cpf))
                cout << "\nAdicionado!\n";
            else
                cout << "\nNão Adicionado!\n";

            sleep(2);
            system("clear");
            break;

        case 2:
            cout << "Digite o cpf do cliente: ";
            cin >> nome;
            if(cv.rmCliente(cpf))
                cout << "\nCliente removido\n" << endl;
            else
                cout << "\nCliente não removido\n" << endl;

            sleep(2);
            system("clear");
            break;

        case 3:
            cout << "Digite o cpf do cliente: ";
            cin >> cpf;
            cout << "\n";
            cliente = cv.getCliente(cpf);
            if(cliente != NULL){
                cliente->show();
                cout << "\n";
            }else
                cout << "Cliente não encontrado\n" << endl;

            sleep(2);
            system("clear");
            break;

        case 4:
            cout << "Digite o nome do serviço: ";
            cin >> nome;
            cout << "Digite o preço do serviço: ";
            cin >> preco;

            if(cv.addServico(nome,preco))
                cout << "\nAdicionado\n" << endl;
            else
                cout << "\nNão adicionado\n" << endl;

            sleep(2);
            system("clear");
            break;

        case 5:
            cout << "Digite o nome do serviço: ";
            cin >> nome;
            if(cv.rmServico(nome))
                cout << "\nRemovido\n" << endl;
            else
                cout << "\nNão removido\n" << endl;
            sleep(2);
            system("clear");
            break;

        case 6:
            cout << "\nDigite o cpf do cliente: ";
            cin >> cpf;
            cout << "\nDigite o nome do animal: ";
            cin >> nome;
            cout << "\nDigite a raça do animal: ";
            cin >> raca;


            cliente = cv.getCliente(cpf);
            if(cliente != NULL){
                if(cliente->addAnimal(nome, raca))
                    cout << "\nAnimal adicionado!\n" << endl;
            }else
                cout << "\nAnimal não adicionado!\n" << endl;

            sleep(2);
            system("clear");
            break;

        case 7:
            cout << "\nDigite o cpf do cliente: ";
            cin >> cpf;
            cout << "\nDigite o nome do animal: ";
            cin >> nome;

            cliente = cv.getCliente(cpf);

            if(cliente != NULL){
                if(cliente->rmAnimal(nome))
                    cout << "\nAnimal removido!\n" << endl;
            }else
                cout << "\nAnimal não removido!\n" << endl;

            sleep(2);
            system("clear");
            break;

        case 8:
            cv.showServicos();

            sleep(5);
            system("clear");
            break;

        case 9:
            cout << "O saldo é: " << cv.getSaldo() << endl;

            sleep(2);
            system("clear");
            break;

        case 10:
            cout << "Digite o nome do serviço: ";
            cin >> nome;
            cout << "Digite o CPF do cliente: ";
            cin >> cpf;
            cout << "Digite o nome do animal: ";
            cin >> raca;

            if(cv.venderServico(nome,cpf,raca))
                cout << "\nVendido!";
            else
                cout <<"\nNão vendido";

            sleep(2);
            system("clear");
            break;

        case 11:
            cv.mostrarVendas();

            sleep(5);
            system("clear");
            break;

        default:
            break;
        }



    }


    return 0;
}
