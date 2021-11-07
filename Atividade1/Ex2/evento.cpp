/* Escreva um algoritmo que leia 3 números inteiros e mostre o maior deles*/

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
    cout << "Digite o terceiro número: ";
    cin >> n3;
}

int evento::calcularMaior() {

    if (n1 > nm)
        nm = n1;
    if (n2 > nm)
        nm = n2;
    if (n3 > nm)
        nm = n3;
    


    return nm;
}