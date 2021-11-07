/*. Faça um algoritmo que leia as 3 notas de um aluno e calcule a média final deste aluno.
Considerar que a média é ponderada e que o peso das notas é: 2,3 e 5, respectivamente. */

#include <iostream>
#include <cstdlib>
#include "evento.h"

using namespace std;

int main(int argc, char** argv) {
    evento objeto;
    objeto.lerDados();
    cout << objeto.calcularEx();

    return 0;
}

