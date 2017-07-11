#include "locomotiva.h"

Locomotiva::Locomotiva(int limite){
    this->limiteVagoes = limite;
}

int Locomotiva::getMaxVagoes(){
    return this->limiteVagoes;
}
