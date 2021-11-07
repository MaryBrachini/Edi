/*Faça uma função que recebe um valor inteiro e verifica se o valor é positivo, negativo ou zero. A
função deve retornar 1 para valores positivos, -1 para negativos e 0 para o valor 0.
*/

#include <cstdlib>
#include<iostream>
#include "evento.h"


using namespace std;

int main(int argc, char** argv) {
    evento objeto;
    objeto.lerDados();
     cout << "\nA O valor retornado é: " <<objeto.calcular();
    
    return 0;
}

