/*Elabore um algoritmo que dada a idade de um nadador classifica-o em uma das
seguintes categorias:
infantil A = 5 - 7 anos 
infantil B = 8-10 anos
juvenil A = 11-13 anos
juvenil B = 14-17 anos
adulto = maiores de 18 anos*/

#include <iostream>
#include <cstdlib>
#include "evento.h"

using namespace std;

int main() {
    evento objeto;
    objeto.lerDados();
    objeto.calcularIdade();

    return 0;
}
