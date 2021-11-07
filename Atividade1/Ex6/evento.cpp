/*O custo ao consumidor de um carro novo é a soma do custo de fábrica com a
percentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que
a percentagem do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo
que leia o custo de fábrica de um carro e escreva o custo ao consumidor*/
#include "evento.h"
#include <iostream>

evento::evento() {
}

evento::evento(const evento& orig) {
}

evento::~evento() {
}

using namespace std;

void evento::lerDados() {
    cout << "Digite o preço do carro: ";
    cin >> prec;
}

float evento::calcularCusto() {

    cust = prec + (prec * 0.28)+(prec * 0.45);

    return cust;
}