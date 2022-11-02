#include "Fila.h"
#include <iostream>

using namespace std;

Fila::Fila() {
}

Fila::Fila(const Fila& orig) {
}

Fila::~Fila() {
}

void Fila::lerDados() {

    int qtd;

    cout << "Digite a quantidade de elementos: ";
    cin>>qtd;

    int fila[qtd];

    this->menu(qtd, fila);

}

void Fila::menu(int qtd, int fila[]) {

    int opcao = 0, fim = 0;
    while (true) {

        cout << "Digite 1 para inserir o proximo elemento" << endl;
        cout << "Digite 2 para remover um elemento" << endl;
        cout << "Digite 3 para mostrar o resultado" << endl;
        cin>>opcao;

        switch (opcao) {
            case 1: fim = this->inserir(fim, qtd, fila);
                break;
            case 2: fim = this->remover(fila, fim);
                break;
            case 3: this->imprimir(fim, fila);
                break;
            default: break;

        }
    }
}

int Fila::inserir(int fim, int qtd, int fila[]) {

    int val = 0;

    if (fim == qtd)
        cout << "é necessário remover um elemento" << endl;
    else {
        cout << "Digite um elemento a ser inserido na Fila" << endl;
        cin>>val;
        fila[fim] = val;
        fim++;
    }
    return fim;

}

int Fila::remover(int fila[],int fim) {

    for (int j = 0; j < fim; j++) {

        fila[j] = fila[j + 1];
    }
    fim--;
    return fim;
}

void Fila::imprimir(int fim, int fila[]) {

    for (int i = 0; i < fim; i++)
        cout << fila[i] << endl;

}