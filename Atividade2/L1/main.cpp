/*Escreva uma função que receba dois números inteiros retorne o menor número*/

#include <cstdlib>
#include "evento.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    evento obj;
    obj.lerDados();
    cout << "O menor número digitado foi: " << obj.calcularMenor();

    return 0;
}

