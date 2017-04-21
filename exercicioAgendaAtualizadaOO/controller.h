#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "agenda.h"
#include <vector>
#include <stdlib.h>
#include <unistd.h>

class Sistema{
private:
    vector<Agenda> contas;

public:
    Sistema(){}

    bool criarConta(string login, string senha){
        for(auto i : contas)
            if(i.getLogin() == login)
                return false;

        Agenda aux;
        aux.setLogin(login);
        aux.setSenha(senha);
        contas.push_back(aux);
        return true;
    }

    Agenda* fazerLogin(string login, string senha){
        for(Agenda &i : contas)
            if(i.getLogin() == login && i.getSenha() == senha)
                return &i;
        return NULL;
    }

    bool rmConta(string login, string senha){
        for(int i = 0; i < contas.size(); i++)
            if(contas[i].getLogin() == login && contas[i].getSenha() == senha){
                contas.erase(contas.begin() + i);
                return true;
            }
        return false;
    }
};

class GUI{
private:
    Sistema sistema;
    Agenda *agenda;

public:
    GUI(){
    }

    void setAgenda(Agenda * agenda){
        this->agenda = agenda;
    }

    void guiLogin(){
        string login,senha;
        string op = "";
        while(op != "sair"){
            cout << "Opções para usuario: login, cadastro, remover, sair: ";
            cin >> op;

            if(op == "login"){
                    cout << "Login: ";
                    cin >> login;
                    cout << "Senha: ";
                    cin >> senha;
                    agenda = sistema.fazerLogin(login,senha);
                    if(agenda == NULL){
                        cout << "Erro no login!" << endl;
                    else{
                        cout << "Login com sucesso!" << endl;
                        sleep(1);
                        system("clear");
                        guiAccount();
                    }
            }

            else if(op == "cadastro"){
                cout << "Login: ";
                cin >> login;
                cout << "Senha: ";
                cin >> senha;
                if(sistema.criarConta(login,senha))
                    cout << "Cadastro com sucesso!" << endl;sleep(1);system("clear");
                else
                    cout << "Erro no cadastro!" << endl;sleep(1);system("clear");
            }

            else if(op == "remover"){
                cout << "Login: ";
                cin >> login;
                cout << "Senha: ";
                cin >> senha;
                if(sistema.rmConta(login,senha))
                    cout << "Usuario removido com sucesso!" << endl;sleep(1);system("clear");
                else
                    cout << "Erro ao remover usuario!" << endl;sleep(1);system("clear");
            }
        }
    }

    void guiAccount(){
        string nome;
        string op = "";
        vector<Contato> contatos;
        while(op != "sair"){
            cout << "Opções para agenda: addContato, rmContato, updateContato "
                    "\n\t pegarTodos, procurarContato, sair: ";
            cin >> op;

            if(op == "addContato"){
                    cout << "Nome: ";
                    cin >> nome;
                    Contato contato(nome);
                    if(agenda->adicionaContato(contato))
                        cout << "Contato adicionado!" << endl;sleep(1);system("clear");
                    else
                        cout << "Contato não adicionado!" << endl;sleep(1);system("clear");
            }

            else if(op == "rmContato"){
                cout << "Nome: ";
                cin >> nome;
                if(agenda->removerContato(nome))
                    cout << "Removido!" << endl;sleep(1);system("clear");
                else
                    cout << "Não removido!" << endl;sleep(1);system("clear");
            }

            else if(op == "updateContato"){
                cout << "Nome: ";
                cin >> nome;
                Contato *contato = agenda->procurarContato(nome);
                this->guiContato(contato);
            }

            else if(op == "pegarTodos"){
                contatos =  agenda->pegarContatos();
                for(auto i : contatos)
                    i.showContatos();
            }

            else if(op == "procurarContato"){
                cout << "Substring: ";
                cin >> nome;
                contatos = agenda->procurarPorSubstring(nome);
                for(auto i : contatos)
                    i.showContatos();
            }
        }
    }

    void guiContato(Contato *contato){
        string nome, desc;
        Telefone * telefone;
        string op = "";
        while(op != "sair"){
            cout << "Opções para contato: addTelefone, rmTelefone, qtdTelefones, consultarTelefone,"
                    "\n\t setEmail, verContato, favoritar, desfavoritar, pegarFavoritos, sair: ";
            cin >> op;

            if(op == "addTelefone"){
                cout << "Numero: ";
                cin >> nome;
                cout << "Descrição: ";
                cin >> desc;
                if(contato->addTelefone(nome,desc))
                    cout << "Adicionado!" << endl;sleep(1);system("clear");
                else
                    cout << "Não adicionado!" << endl;sleep(1);system("clear");
            }

            else if(op == "rmTelefone"){
                cout << "Numero: ";
                cin >> nome;
                if(contato->rmTelefone(nome))
                    cout << "Telefone não encontrado!" << endl;sleep(1);system("clear");
                else
                    cout << "Telefone removido!" << endl;sleep(1);system("clear");
            }

            else if(op == "qtdTelefones"){
                cout << "Existem " << contato->qtdTelefones() << " cadastrados.";
            }

            else if(op == "consultarTelefone"){
                cout << "Numero: ";
                cin >> nome;
                telefone = contato->getTelefone(nome);
                if(telefone != NULL){
                    cout << "Numero: " << telefone->getNumero()
                         << "\nDescrição: " << telefone->getDesc() << endl;sleep(2);system("clear");
                }else
                    cout << "Telefone não encontrado!" << endl;sleep(1);system("clear");
            }

            else if(op == "setEmail"){
                cout << "Email: ";
                cin >> nome;
                if(contato->setEmail(nome))
                    cout << "Atualizado!" << endl;sleep(1);system("clear");
                else
                    cout << "Não atualizado!" << endl;sleep(1);system("clear");
            }

            else if(op == "verContato"){
                contato->showContatos();
            }

            else if(op == "favoritar"){
                cout << "Numero: ";
                cin >> nome;
                telefone = contato->getTelefone(nome);
                if(telefone != NULL){
                    contato->addFavorito(telefone);
                    cout << "Favorito adicionado!" << endl;sleep(1);system("clear");
                }else
                    cout << "Erro ao adicionar favorito!" << endl;sleep(1);system("clear");
            }

            else if(op == "desfavoritar"){
                cout << "Numero: ";
                cin >> nome;
                telefone = contato->getTelefone(nome);
                if(telefone != NULL){
                    contato->rmFavorito(telefone);
                    cout << "Favorito removido!" << endl;sleep(1);system("clear");
                }else
                    cout << "Erro ao remover favorito!" << endl;sleep(1);system("clear");
            }

            else if(op == "pegarFavoritos"){
                contato->showFavoritos();
            }

        }
    }
};


class Controller{
private:
    Agenda *agenda;

public:

};

#endif // CONTROLLER_H
