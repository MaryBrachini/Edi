/*Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e
mostre-a expressa apenas em dias.*/

#include <iostream>
#include <cstdlib>
#include "evento.h"

using namespace std;

int main(int argc, char** argv) {
    evento objeto;
    objeto.lerDados();

    cout << "A idade da pessoa em dias são: " << objeto.calcularDias();

    return 0;
}

