/*Calcule a média aritmética das 3 notas de um aluno e mostre, além do valor da média,
uma mensagem de "Aprovado", caso a média seja igual ou superior a 6, ou a mensagem
"reprovado", caso contrário.*/

#include <iostream>
#include <cstdlib>
#include "evento.h"

using namespace std;

int main(int argc, char** argv) {
    evento objeto;
    objeto.lerDados();

    objeto.calcularMsg();
    cout << "\nA media do aluno é " << objeto.calcularNota();

    return 0;
}
