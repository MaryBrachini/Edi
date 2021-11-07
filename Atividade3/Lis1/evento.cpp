/*Escrever um programa que cadastre o nome, a matrícula e duas notas de vários alunos.
Em seguida imprima a matrícula, o nome e a média de cada um deles.*/

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

    for (int i = 0; i <= 2; i++) {
        cout << "Digite seu nome : ";
        cin>>this->dadosaluno[i].nome;
        cout << "Digite sua matricula : ";
        cin>>this->dadosaluno[i].mat;
        cout << "Digite nota 1 : ";
        cin>>this->dadosaluno[i].n1;
        cout << "Digite nota 2 : ";
        cin>>this->dadosaluno[i].n2;
    }
}

void evento::mostrar() {
    for (int i = 0; i <= 2; i++) {
        cout <<"Nome: "<< this->dadosaluno[i].nome << endl;
        cout <<"Numero da matricula: "<< this->dadosaluno[i].mat << endl;
        cout <<"Nota 1: "<< this->dadosaluno[i].n1 << endl;
        cout <<"Nota 2: "<< this->dadosaluno[i].n2 << endl;
        cout <<"Media: "<< (this->dadosaluno[i].n1 + this->dadosaluno[i].n2) / 2;
    }
}