/* Escreva um algoritmo que leia 3 números inteiros e mostre o maior deles*/

#include <iostream>
#include <cstdlib>
#include "evento.h"

using namespace std;

int main() {
    evento objeto;
    objeto.lerDados();
    cout << "O maior número digitado foi: " << objeto.calcularMaior();

    return 0;
}