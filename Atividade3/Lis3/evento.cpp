/*- Implemente a pesquisa de pessoas por meio do CPF. Programar com a pesquisa sequencial
e pesquisa binária*/

#include "evento.h"
#include <iostream>

evento::evento() {
}

evento::evento(const evento& orig) {
}

evento::~evento() {
}

using namespace std;

void evento::lerDados(){
    int i = 0;
    char opcao;
    
    do{
        cout << "Informe seu nome: ";
        cin >> this->vetor[i].nome;
        cout << "Informe sua altura em metros: ";
        cin >> this->vetor[i].altura;
        cout << "Informe o seu peso em quilos: ";
        cin >> this->vetor[i].peso;
        cout << "Informe o CPF: ";
        cin >> this->vetor[i].cpf;
        cout << "Informe o sexo (M ou F): ";
        cin >> this->vetor[i].sexo;
        cout << "\nContinuar cadastrando? (S para sim, N para não): ";
        cin >> opcao;
        i++;  
    }while(opcao == 'S' && i < 3);
    
    this->ordBolha(i);
    
    long int cpf;
    cout << "\n\nInforme um CPF para buscar: ";
    cin >> cpf;
    if ((this->pesquisaB(i, cpf)) != -1)
        cout << "CPF encontrado.";
    else
        cout << "CPF inexistente.";
}

void evento::pesquisaS(int i, long int cpf){
    for (int c = 0; c < i; c++){
        if(cpf == this->vetor[c].cpf)
            cout << "CPF encontrado!";
    }
}

int evento::pesquisaB(int i, long int cpf){
    int inferior, superior, meio;
    inferior = 0;
    superior = i - 1;
    
    while(inferior <= superior){
        meio = (inferior + superior) / 2;
        if (cpf == this->vetor[meio].cpf)
            return meio;
        else if (cpf < this->vetor[meio].cpf)
            superior = meio - 1;
        else
            inferior = meio + 1;
    }
    return -1;
}

void evento::ordBolha(int i){
    int contador, j, t;
    for (contador = i - 1; contador >= 1; contador--){
        for (j = 0; j < contador; j++){
            if (this->vetor[j].cpf > this->vetor[j+1].cpf){
                t = this->vetor[j].cpf;
                this->vetor[j].cpf = this->vetor[j+1].cpf;
                this->vetor[j+1].cpf = t;
            }
        }
    }
    
}
