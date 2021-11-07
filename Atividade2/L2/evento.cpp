/*Escreva uma função que receba 3 notas de um aluno e uma letra. Se a letra for A a função
retorna a média aritmética das notas do aluno, se for P, a sua média ponderada (pesos: 5, 3 e 2)*/

#include "evento.h"
#include <cstdlib>
#include <iostream>

evento::evento() {
}

evento::evento(const evento& orig) {
}

evento::~evento() {
}

using namespace std;

void evento::lerDados() {
    int n1,n2, n3;
    char f;
    
    cout << "Digite o primeiro número: ";
    cin >> n1;
    cout << "Digite o segundo número: ";
    cin >> n2;
    cout << "Digite o terceiro número: ";
    cin >> n3;

    cout << "Digite A para uma média aritmética ou P para média ponderada: ";
    cin >> f;
    
    cout << "A media do aluno foi: " << this->calcularMedia(n1,n2,n3,f);
}

float evento::calcularMedia(int n1, int n2, int n3,char f) {
    float med;
    
    if (f == 'A')
        med = (n1 + n2 + n3) / 3;
    if (f == 'P')
        med = ((n1 * 5) + (n2 * 3) + (n3 * 2)) / 10;


    return med;
}