/*Calcule a média aritmética das 3 notas de um aluno e mostre, além do valor da média,
uma mensagem de "Aprovado", caso a média seja igual ou superior a 6, ou a mensagem
"reprovado", caso contrário.*/

#include "evento.h"
#include <iostream>

evento::evento() {
}

evento::evento(const evento& orig) {
}

evento::~evento() {
}
using namespace std;

void evento::lerDados() {
    cout << "Digite a primeira nota: ";
    cin >> n1;
    cout << "Digite a segunda nota: ";
    cin >> n2;
    cout << "Digite a terceira nota: ";
    cin >> n3;
}

float evento::calcularNota() {

    med = (n1 + n2 + n3) / 3;
    return med;
}

void evento::calcularMsg() {

    if (med >= 6)
        cout << "Aprovado";
    if (med <= 5)
        cout << "Reprovado";
}