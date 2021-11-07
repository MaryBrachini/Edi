/*Um vendedor necessita de um algoritmo que calcule o preço total devido por um
cliente. O algoritmo deve receber o código de um produto e a quantidade comprada e
calcular o preço total, usando a tabela abaixo:
Código do
Produto
Preço
unitário
1001 5,32
1324 6,45
6548 2,37
0987 5,32
7623 6,45*/

#include <iostream>
#include <cstdlib>
#include "evento.h"

using namespace std;

int main(int argc, char** argv) {
    evento objeto;
    objeto.lerDados();
    cout << "O preço da compra é de: " << objeto.calcularPreco() << " reais";

    return 0;
}

