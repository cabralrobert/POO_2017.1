#include "trem.h"

Trem::Trem(Locomotiva *locomotiva){
    this->locomotiva = locomotiva;
}

void Trem::addVagao(Vagao *vagao){
    if(locomotiva->getMaxVagoes() > (int)vagoes.size())
        vagoes.push_back(vagao);
}

bool Trem::embarcar(Passageiro *passageiro){
//    for(Vagao* a : vagoes){
//        if(a->getEspacosLivres() > 0){
//            a->embarcar(passageiro);
//            passageiro->setId(idTracker);
//            idTracker = idAux++;
//            return true;
//        }
//    }
    return false;
}

bool Trem::desembarcar(int id){
    for(Vagao* a : vagoes){
        if(a->desembarcar(id))
            return true;
    }
    return false;
}

Vagao* Trem::searchVagao(int id){
    for(Vagao* a : vagoes){
        if(a->searchPassageiro(id) != NULL){
            return a;
        }
    }
    return NULL;
}

string Trem::toString(){
    string value;
    value = "Trem {";
    for(Vagao* a : vagoes){
        value += "\t" + a->toString() + "\n";
    }
    value += "}";
    return value;
}
