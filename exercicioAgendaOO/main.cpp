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
            return false;
        }
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
    Contato contato("Robert");
    contato.setEmail("robertcabral@alu.ufc.br");
    contato.addTelefone("88996638768");
    contato.addTelefone("88992317434");
    contato.addTelefone("88992eww7434");
    //contato.showContatos();

    Agenda agenda;
    cout << agenda.adicionaContato(contato) << endl;

    agenda.adicionaContato(Contato("Teste"));
    agenda.adicionaContato(Contato("Teste3"));
    agenda.adicionaContato(Contato("Tesert"));

    vector<Contato> aux;

    aux = agenda.procurarPorSubstring("t");

    for(auto i : aux)
        i.showContatos();

    return 0;
}
