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
    cout << "Digite a idade em anos: ";
    cin >> id;
}

int evento::calcularMeses() {
    meses = id * 12;
    return meses;
}

int evento::calcularDias() {
    dias = id * 365;
    return dias;
}


