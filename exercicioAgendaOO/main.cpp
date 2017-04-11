#include "contato.h"

using namespace std;

class Agenda{
private:
    vector<Contato> contatos;

public:

    Agenda(){}

    bool adicionaContato(Contato other){
        for(auto aux : this->contatos)
            if(other.getNome() == aux.getNome()){
                return false;
            }
        contatos.push_back(other);
        return true;
    }

    bool removerContato(string nome){
        for(int i = 0; (unsigned) i < contatos.size(); i++){
            if(nome == contatos[i].getNome()){
                contatos.erase(contatos.begin() + i);
                return true;
            }
        }
        return false;
    }

    Contato *procurarContato(string nome){
        for(auto &aux : contatos)
            if(nome == aux.getNome())
                return &aux;
        return NULL;
    }

    vector<Contato> procurarPorSubstring(string sub){
        vector<Contato> other;
        for(auto aux : this->contatos)
            if(aux.haveMatch(sub))
                other.push_back(aux);
        return other;
    }

    vector<Contato> pegarContatos(){
        return this->contatos;
    }

};

int main()
{
    int op = -1;
    Agenda agenda;
    string nome, email, telefone;
    while(op){
        cout << "Digite 1 para adicionar contato;" << endl;
        cout << "Digite 2 para remover contato;" << endl;
        cout << "Digite 3 para procurar contato;" << endl;
        cout << "Digite 4 para procurar contato por substring;" << endl;
        cout << "Digite 5 para mostrar todos os contato;" << endl;
        cout << "Digite 6 para adicionar email ao contato;" << endl;
        cout << "Digite 7 para adicionar telefone ao contato;" << endl;
        cout << "Digite 0 para sair;" << endl;
        cin >> op;

        switch(op){
        case 1:
            cout << "Digite o nome do contato: ";
            cin >> nome;
            agenda.adicionaContato(Contato(nome));
            break;

        case 2:
            cout << "Digite o nome do contato: ";
            cin >> nome;
            agenda.removerContato(nome);
            break;

        case 3:
            cout << "Digite o nome do contato: ";
            cin >> nome;
            agenda.procurarContato(nome)->showContatos();
            break;

        case 4:
            cout << "Digite a substring: ";
            cin >> nome;
            for(Contato i : agenda.procurarPorSubstring(nome))
                i.showContatos();
            break;

        case 5:
            for(Contato i : agenda.pegarContatos())
                i.showContatos();
            break;

        case 6:
            cout << "Digite o nome do contato que deseja adicionar o email: ";
            cin >> nome;
            cout << "Digite o email: ";
            cin >> email;
            agenda.procurarContato(nome)->setEmail(email);
            break;

        case 7:
            cout << "Digite o nome do contato que deseja adicionar o telefone: ";
            cin >> nome;
            cout << "Digite o telefone: ";
            cin >> telefone;
            agenda.procurarContato(nome)->addTelefone(telefone);
            break;

        default:
            break;
        }

    }
    return 0;
}
