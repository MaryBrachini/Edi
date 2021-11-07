/*Escrever um programa que cadastre o nome, a altura, o peso, o cpf e sexo de algumas pessoas.
Localize uma pessoa por meio do seu CPF e imprimir o seu IMC*/

#include "evento.h"
#include <iostream>
#include<math.h>

evento::evento() {
}

evento::evento(const evento& orig) {
}

evento::~evento() {
}

using namespace std;

void evento::lerDados() {
    int cont = 0, cpf, qtd;

    for (int i = 0; i <= qtd; i++) {

        cout << "Digite a quantidade de pessoas" << endl;
        cin>> qtd;

        cout << "Digite o nome: ";
        cin>>this->dados[cont].nome;
        cout << "Digite a altura: ";
        cin>>this->dados[cont].alt;
        cout << "Digite o peso: ";
        cin>>this->dados[cont].peso;
        cout << "Digite o cpf: ";
        cin>>this->dados[cont].cpf;
        cout << "Digite o sexo F ou M: ";
        cin>>this->dados[cont].sexo;
        cont++;

    }

    cout << "Digite o CPF para pesquisar" << endl;
    cin>> cpf;
    this->mostrar(cpf, cont);

}

void evento::mostrar(int cpf, int cont) {
    float imc;
    int cont2;
    for (int j = 0; j <= cont; j++) {
        if (cpf == this ->dados[j].cpf) {
            imc = this ->dados[j].peso / pow(this ->dados[j].alt, 2);
            cont2 = j;
        }
    }

    cout << "\nCPF: " << this ->dados[cont2].cpf;
    cout << "\nNome: " << this ->dados[cont2].nome;
    cout << "\nO valor do IMC: " << imc;

}