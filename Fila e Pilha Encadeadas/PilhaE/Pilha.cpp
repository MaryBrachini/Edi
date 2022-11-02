#include "Pilha.h"
#include <iostream>

using namespace std;

Pilha::Pilha() {
}

Pilha::Pilha(const Pilha& orig) {
}

Pilha::~Pilha() {
}

bool Pilha::vazio(struct nodo *campo) {

    if (campo == NULL)
        return true;
    else
        return false;
}

void Pilha::inserir(void) {
    int x;

    cout << "\nDigite um numero a ser inserido: ";
    cin>>x;

    this->aux = (struct nodo *) malloc(sizeof (aux));
    this->aux->elem = x;
    this->aux->ant = this->topo;
    this->topo = this->aux;
    
   // cout << this->topo->elem;
   // cout<< this->topo->ant;
   // cout<< this->topo->ant->ant->elem;

    cout << this->aux << "\n";
    cout << this->topo << "\n";
    cout << this->aux->ant << "\n";
    cout << this->topo << "\n";
    cout << "\nElemento inserido!\n\n";
}

void Pilha::remover(void) {
    if (!vazio(this->topo)) {
        this->aux = this->topo;
        this->topo = this->topo->ant;
        free(this->aux);
        cout << "\nRemovido com sucesso!\n\n";
    }
}

void Pilha::listar(void) {
    
        nodo *p;
	p = this->topo;
        while (!vazio(p->ant)){
           cout<<"\nnumero "<<p->elem;
           p = p->ant;
        }
        cout<<"\nnumero "<<p->elem<<"\n\n";
}

void Pilha::menu(void) {
    char op;
    int sair = 0;

    topo = NULL;
    for (; sair == 0;) {
        cout << "1 -> Inserir na pilha\n2 -> Remover da pilha\n";
        cout << "3 -> Listar pilha\n4 -> Sair da pilha\n";
        cout << "\nDigite uma opção: ";
        cin>>op;
        switch (op) {
            case '1': inserir();
                break;
            case '2': remover();
                break;
            case '3': listar();
                break;
            case '4': sair = 1;
                break;
            default:
            {
                cout << "Opção invalida! \n";
                break;
            }
        }
    }

}
