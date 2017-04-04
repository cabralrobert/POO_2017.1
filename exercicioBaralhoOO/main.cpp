#include <iostream>
#include <vector>

using namespace std;

class Deck{
private:
    vector<int> baralho;

public:
    Deck(){}

    vector<int> descartaTodas(){
        auto removidas = baralho;
        baralho.clear();
        return removidas;
    }

    void adicionaBaralho(){
        int i = 0, j = 0;
        while(i < 14){
            while(j < 4){
                baralho.push_back(i);
                j++;
            }
            i++;
        }
    }

    int puxarDoTopo(){
        int topo = baralho.back();
        baralho.pop_back();
        return topo;
    }

    int olharTopo(){
        return baralho.back();
    }

    void adicionaCarta(int carta){
        baralho.push_back(carta);
    }

    bool transferirPara(Deck &other, int qtd){
        int tamanho = baralho.size();

        if(tamanho < qtd)
            return false;
        else
            for(int i = 0; i < qtd; i++)
                other.adicionaCarta(puxarDoTopo());

        return true;
    }

    void transferirTodasPara(Deck &other){

    }

    int qtdCartas(){
        return baralho.size();
    }

    vector<int> getCartas(){
        return baralho;
    }

    void embaralhar(){

    }




};

int main(int argc, char *argv[])
{
    cout << "Hello World!" << endl;
    return 0;
}
