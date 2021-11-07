/*Escreva uma função que receba dois números inteiros retorne o menor número*/
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
    cout << "Digite o primeiro número: ";
    cin >> n1;
    cout << "Digite o segundo número: ";
    cin >> n2;
}

int evento::calcularMenor() {
        nm = n1;
        
    if (n2 < nm)
        nm = n2;

    return nm;
}