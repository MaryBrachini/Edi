/*O custo ao consumidor de um carro novo é a soma do custo de fábrica com a
percentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que
a percentagem do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo
que leia o custo de fábrica de um carro e escreva o custo ao consumidor*/

#include <iostream>
#include <cstdlib>
#include "evento.h"

using namespace std;

int main(int argc, char** argv) {
    evento objeto;
    objeto.lerDados();

    cout << objeto.calcularCusto();

    return 0;
}
