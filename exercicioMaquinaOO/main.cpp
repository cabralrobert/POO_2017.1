#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Pote{
    string sabor;
    int qtdBolas;
    int posicao;    
};

class Sorvete{
private:
    vector<Pote> potes;
    float saldo;
    int qtdGavetas;

public:
    Sorvete(int qtdGavetas){
        this->qtdGavetas = qtdGavetas;
    }

    bool inserirPote(int gaveta, string sabor, int tamanho){
        Pote pote = {sabor, tamanho, gaveta};

        for(int i = 0;i < potes.size(); i++){
            if(potes[i].posicao == gaveta || gaveta > this->qtdGavetas)
                return false;
        }

        potes.push_back(pote);
        return true;
    }

    bool existePote(int gaveta){
        for(int i = 0;i < potes.size(); i++){
            if(potes[i].posicao == gaveta)
                return true;
        }
        return false;
    }

    string getSabor(int gaveta){
        for(int i = 0;i < potes.size(); i++){
            if(potes[i].posicao == gaveta)
                return potes[i].sabor;
        }

        return "";
    }

    int getQtdBolas(int gaveta){
        for(int i = 0;i < potes.size(); i++){
            if(potes[i].posicao == gaveta)
                return potes[i].qtdBolas;
        }
        return -1;
    }

    bool removerPote(int gaveta){
        for(int i = 0;i < potes.size(); i++){
            if(potes[i].posicao == gaveta){
                potes.erase(potes.begin() + i);
                return true;
            }
        }
        return false;
    }

    bool venderSorvete(string sabor, int qtdBolas){
        for(int i = 0;i < potes.size(); i++){
            if(potes[i].sabor == sabor && potes[i].qtdBolas >= qtdBolas){
                potes[i].qtdBolas -= qtdBolas;
                return true;
            }
        }
        return false;
    }

    void limpaCarrinho(){
        for(int i = 0;i < potes.size(); i++){
            if(potes[i].qtdBolas == 0)
                potes.erase(potes.begin() + i);
        }
    }

};

int main()
{
    Sorvete carrinho(25);
    cout << carrinho.inserirPote(0, "Chocolate", 5) << endl;
    cout << carrinho.existePote(0) << endl;
    cout << carrinho.existePote(1) << endl;
    cout << carrinho.getSabor(0) << endl;
    cout << carrinho.getQtdBolas(0) << endl;
    //cout << carrinho.removerPote(0) << endl;
    cout << carrinho.existePote(0) << endl;
    cout << carrinho.venderSorvete("Chocolate", 3) << endl;
    cout << carrinho.getQtdBolas(0) << endl;
    cout << carrinho.venderSorvete("Chocolate", 3) << endl;
    cout << carrinho.getQtdBolas(0) << endl;
    cout << carrinho.venderSorvete("Chocolate", 2) << endl;
    cout << carrinho.existePote(0) << endl;
    carrinho.limpaCarrinho();
    cout << carrinho.existePote(0) << endl;
    return 0;
}
