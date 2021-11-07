/*Faça uma função que recebe um valor inteiro e verifica se o valor é positivo, negativo ou zero. A
função deve retornar 1 para valores positivos, -1 para negativos e 0 para o valor 0.
*/
#include "evento.h"
#include<iostream>

evento::evento() {
}

evento::evento(const evento& orig) {
}

evento::~evento() {
}

using namespace std;

void evento::lerDados() {


    cout << "Digite um número inteiro: ";
    cin >> n;

}

float evento::calcular() {

    if (n > 0)
        retorno = 1;
    if (n < 0)
       retorno = -1;
    if (n = 0)
       retorno = 0;
    
    return retorno;
}