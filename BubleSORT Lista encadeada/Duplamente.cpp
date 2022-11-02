#include <iostream>
#include "Duplamente.h"

using namespace std;

Duplamente::Duplamente() {
}

Duplamente::Duplamente(const Duplamente& orig) {
}

Duplamente::~Duplamente() {
}

void Duplamente::menu() {
    char opc;
    int sair = 0, tipo;

    for (; sair == 0;) {
        cout << "\nDigite 1 para inserir";
        cout << "\nDigite 2 para remover o início da lista";
        cout << "\nDigite 3 para remover o fim da lista";
        cout << "\nDigite 4 para listar elementos";
        cout << "\nDigite 5 para sair\n";
        cin>>opc;

        switch (opc) {
            case '1': inserir();
                break;
            case '2': remover(tipo = 1);
                break;
            case '3': remover(tipo = 0);
                break;
            case '4': listar();
                break;
            case '5': sair = 1;
                break;
            default:
            {
                cout << "Opção inválida: ";
                break;
            }
        } this->ordBolha();
    }
   
}

void Duplamente::inserir() {
    int x;
    cout << "Digite o elemento a ser inserido: ";
    cin >> x;

    this -> auxiliar = (struct nodo *) malloc(sizeof (this->auxiliar));
    auxiliar -> elemento = x;

    if (inicio == 0) {
        auxiliar -> anterior = NULL;
        auxiliar -> proximo = NULL;
        inicio = auxiliar;
    } else {
        auxiliar -> proximo = NULL;
        auxiliar -> anterior = fim;
        fim -> proximo = auxiliar;
    }
    fim = auxiliar;

    cout << this-> auxiliar -> elemento << " Inserido com sucesso!\n\n";
}

void Duplamente::remover(int tipo) {

    if (!vazio(this->inicio)) {
        if (tipo == 1) {//selecionou o tipo se for 1 inicio se nao o fim;
            this->auxiliar = this->inicio;
            this->inicio = this->inicio->proximo;
            free(this->auxiliar);
            cout << "\nRemoção do inicio feita com sucesso.";
        } else {
            this->auxiliar = this->fim;
            this->fim = this->fim->anterior;
            free(this->auxiliar);
            this->fim->proximo = NULL;
            cout << "\nRemoção do fim feita com sucesso.";
        }
    } else {
        cout << "\nA lista já está vazia.";
    }
}

void Duplamente::listar() {

    if (!vazio(this->inicio)) {
        nodo *auxiliar;
        auxiliar = this->inicio;
        cout << "Elementos: ";
        while (!vazio(auxiliar->proximo)) {
            cout << "  " << auxiliar->elemento;
            auxiliar = auxiliar->proximo;
        }
        //Último nodo:
        cout << "  " << auxiliar->elemento;
    } else {
        cout << "\nA auxiliar está vazia.";
    }
}

void Duplamente::ordBolha() {
nodo *vem, *vai, *apoio;
int lista;
vem = this->fim;
while (!vazio(vem)) {
    vai = this->inicio;
    while (!vazio(vai)) {
        apoio = vai->proximo;
        if ((!vazio(apoio)) && (vai->elemento > apoio->elemento)) {
            lista = vai->elemento;
            vai->elemento = apoio->elemento;
            apoio->elemento = lista;
        }
        vai = vai->proximo;
    }
    vem = vem->anterior;
}
}

bool Duplamente::vazio(struct nodo *campo) {
    if (campo == NULL) {
        return true;
    } else {
        return false;
    }
}
