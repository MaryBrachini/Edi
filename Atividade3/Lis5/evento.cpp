/*Escreva um programa que simule contas bancárias, com as seguintes especificações:
• Ao iniciar o programa vamos criar contas bancárias para três clientes.
• Cada conta terá o nome e o CPF do cliente associado a ela.
• No ato da criação da conta o cliente precisará fazer um depósito inicial.
• Após as contas serem criadas, o sistema deverá possibilitar realizações de saques ou depósitos nas contas.
• Sempre que uma operação de saque ou depósito seja realizada, o sistema deverá imprimir o nome do titular e o
saldo final da conta.*/

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
    for (int i = 0; i < 3; i++) {
        cout << "\nConta " << i + 1 << ": ";
        cout << "Digite o nome: ";
        cin >> this->vetor[i].nome;
        cout << "Digite o CPF: ";
        cin >> this->vetor[i].cpf;
        cout << "Digite o valor do depósito: ";
        cin >> this->vetor[i].saldo;
    }
}

void evento::modificar() {
    int cpf, NaoExiste = 0;
    char opc, opcSistema;
    float saque, dep;

    cout << "\n\nInforme o CPF: ";
    cin >> cpf;
    for (int i = 0; i < 3; i++) {
        if (cpf == this->vetor[i].cpf) {
            do {
                cout << "\n\nNome: " << this->vetor[i].nome;
                cout << "\nSaldo: " << this->vetor[i].saldo;

                cout << "\nDigite S para saques, D para depósitos, ou X para sair: ";
                cin >> opc;
                if (opc == 'S') {
                    cout << "\nQuanto deseja sacar?";
                    cin >> saque;
                    if (this->vetor[i].saldo > saque) {
                        this->vetor[i].saldo -= saque;
                        cout << "\nNome: " << this->vetor[i].nome;
                        cout << "\nSaldo: " << this->vetor[i].saldo;
                    } else {
                        cout << "\nSaldo inválido.";
                    }
                } else if (opc == 'D') {
                    cout << "\nQuanto deseja depositar?";
                    cin >> dep;
                    this->vetor[i].saldo += dep;
                    cout << "\nNome: " << this->vetor[i].nome;
                    cout << "\nSaldo: " << this->vetor[i].saldo;
                }
            } while (opc == 'S' || opc == 'D');
        } else {
            NaoExiste++;
        }
    }
    if (NaoExiste == 3) {
        cout << "\nEste usuário não existe.";
    }
    cout << "\n\nDigite E para encerrar o sistema ou C para continuar: ";
    cin >> opcSistema;
    if (opcSistema == 'C') {
        this->modificar();
    }
}

