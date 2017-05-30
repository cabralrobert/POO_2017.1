#include <iostream>
#include <vector>
#include "passageiro.h"
#include "locomotiva.h"
#include "vagao.h"
#include "trem.h"

using namespace std;

int main()
{
    Vagao vagao(1);
    Vagao vagao2(2);
    Vagao vagao3(3);

    Trem trem(new Locomotiva(2));
    trem.addVagao(&vagao);
    trem.addVagao(&vagao2);
    trem.addVagao(&vagao3);

    trem.embarcar(new Passageiro("A"));
    trem.embarcar(new Passageiro("B"));
    trem.embarcar(new Passageiro("C"));
    Passageiro pass("D");

    trem.embarcar(&pass);
    cout << trem.toString() << endl;
    trem.desembarcar(1);
    cout << trem.toString() << endl;
    trem.embarcar(&pass);
    cout << trem.toString() << endl;
    return 0;
}









