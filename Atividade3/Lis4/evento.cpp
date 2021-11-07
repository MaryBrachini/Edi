/*Escrever um programa que cadastre vários produtos. Em seguida, imprima uma lista com o
código e nome da cada produto. Por último, consulte o preço de um produto através de seu código*/

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
    int qtd, i;

    cout << "Digite a quantidade de produtos: ";
    cin>>qtd;

    for (int i = 0; i <= qtd; i++) {
        cout << "Digite o nome do produto : ";
        cin>>this->dados[i].nome;
        cout << "Digite o codigo: ";
        cin>>this->dados[i].cod;
        cout << "Digite o preco: ";
        cin>>this->dados[i].prec;

        this->mostrar(i);
        this->pesquisar(i);
    }

    void evento::mostrar(int i) {
        for (int j = 0; j <= i; j++) {
            cout << "Nome: " << this->dados[j].nome << endl;
            cout << "Codigo" << this->dados[j].cod << endl;
        }
    }

    void evento::pesquisar(int i) {
        int cod;

        cout << "Digite o codigo para pesquisar: ";
        cin>>cod;

        for (int j = 0; j <= i; j++) {
            if (cod == this->dados[j].cod) {
                cout << "Codigo: " << this->dados[j].cod << endl;
                cout << "Preco: " << this->dados[j].prec << endl;
            }
        }
    }