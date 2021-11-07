/*Crie uma função que receba três valores, 'a', 'b' e 'c', que são os coeficientes de uma equação do
segundo grau e retorne o valor do delta, que é dado por 'b² – 4ac'*/

#include <cstdlib>
#include <iostream>
#include "evento.h"

evento::evento() {
}

evento::evento(const evento& orig) {
}

evento::~evento() {
}
using namespace std;

void evento::lerDados() {
    float a, b, c;


    cout << "Digite o coeficiente a: ";
    cin >> a;
    cout << "Digite o coeficiente b: ";
    cin >> b;
    cout << "Digite o coeficiente c: ";
    cin >> c;
    cout << "Delta: " << this->calcular(a, b, c);
}

float evento::calcular(float a, float b, float c) {
    float delta;

    delta = (b * b)-(4 * a * c);
}
