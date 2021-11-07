#include "evento.h"
#include <cstdlib>
#include <iostream>

evento::evento() {
}

evento::evento(const evento& orig) {
}

evento::~evento() {
}

using namespace std;

void evento::valor() {
    float x, y, z;

    cout << "Informe o valor de x: ";
    cin >> x;
    cout << "Informe o valor de y: ";
    cin >> y;
    cout << "Informe o valor de z: ";
    cin >> z;
    this->verificar(x, y, z);

}

float evento::verificar(float x, float y, float z) {
    float xy, xz, yz;

    xy = x + y;
    xz = x + z;
    yz = y + z;

    if (x < yz && y < xz && z < xy) {
        if ((x == y)&&(y == z)) {
            cout << "Triângulo Equilátero ";
        } else if ((x == y)&&(x == z)) {
            cout << "Triângulo Isósceles ";
        } else {
            cout << "Triângulo o Escaleno ";
        }
    } else {
        cout << "Não é um triângulo";
    }
}
