/*Escrever um programa que cadastre o nome, a matrícula e duas notas de vários alunos.
Em seguida imprima a matrícula, o nome e a média de cada um deles.*/

#include <cstdlib>
#include <iostream>
#include "evento.h"

using namespace std;

int main(int argc, char** argv) {
    evento obj;

    obj.lerDados();
    obj.mostrar();

    return 0;
}

