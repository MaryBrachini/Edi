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
#include "evento.h"

evento::evento() {
}

evento::evento(const evento& orig) {
}

evento::~evento() {
}

using namespace std;

void evento::lerDados() {

    cout << "=====================================" << endl;
    cout << "      Tabela de codigos e preços     " << endl;
    cout << "=====================================" << endl;
    cout << "     Codigos      |       Preços     " << endl;
    cout << "      1001        |        6,45      " << endl;
    cout << "      1324        |        6,45      " << endl;
    cout << "      6548        |        2,37      " << endl;
    cout << "      0987        |        5,32      " << endl;
    cout << "      7623        |        6,45      " << endl;
    cout << "=====================================" << endl;

    cout << "Qual o codigo do produto? ";
    cin >> cod;
    cout << "Qual a quantidade de produto? ";
    cin >> qtd;
}

float evento::calcularPreco() {

    if (cod = '1001') {
        prec = qtd * 6.45;
    }
    if (cod = '1324') {
        prec = qtd * 6.45;
    }
    if (cod = '6548') {
        prec = qtd * 2.37;
    }
    if (cod = '0987') {
        prec = qtd * 5.32;
    }
    if (cod = '7623') {
        prec = qtd * 6.45;
    }
    return prec;
}
