/*Elabore um algoritmo que dada a idade de um nadador classifica-o em uma das
seguintes categorias:
infantil A = 5 - 7 anos 
infantil B = 8-10 anos
juvenil A = 11-13 anos
juvenil B = 14-17 anos
adulto = maiores de 18 anos*/

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
    cout << "Qual a idade do nadador?";
    cin >> id;
}

int evento::calcularIdade() {

    if ((id >= 5)&&(id <= 7))
        cout << "A cadegoria do nadador é infantil A";
    else if ((id >= 8)&&(id <= 10))
        cout << "A cadegoria do nadador é infantil B";
    else if ((id >= 11)&&(id <= 13))
        cout << "A cadegoria do nadador é juvenil A";
    else if ((id >= 14)&&(id <= 17))
        cout << "A cadegoria do nadador é juvenil B";
    else
        cout << "A cadegoria do nadador é adulto";

}

