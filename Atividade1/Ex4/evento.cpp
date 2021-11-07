#include "evento.h"
#include <iostream>
#include<math.h>

evento::evento() {
}

evento::evento(const evento& orig) {
}

evento::~evento() {
}

using namespace std;

void evento::lerDados() {

    cout << "Digite o valor A: ";
    cin >> A;
    cout << "Digite o valor B: ";
    cin >> B;
    cout << "Digite o valor C: ";
    cin >> C;
}

float evento::calcularEx() {

    R = pow((A + B), 2);
    S = pow((C + B), 2);
    D = (R + S) / 2;

    return D;
}
