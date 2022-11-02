#include <iostream>
#include "Fila.h"

using namespace std;

Fila::Fila() {
}

Fila::Fila(const Fila& orig) {
}

Fila::~Fila() {
}

void Fila::menu(){
    char opcao;
    int sair = 0;
    
    for(;sair == 0;){
        cout<<"\nDigite 1 para inserir";
        cout<<"\nDigite 2 para remover";
        cout<<"\nDigite 3 para listar elementos";
        cout<<"\nDigite 4 para sair\n->";
        cin>>opcao;
        
        switch(opcao){
            case '1': insere();
                     break;
            case '2': remove();
                     break;
            case '3': listar();
                     break;
            case '4': sair = 1; break;
            default: {
                cout << "Opção inválida: ";
                break;
            }           
         }    
    }
}

void Fila::insere(){
    int x;
    cout<<"Digite o elemento a ser inserido: ";
    cin >> x;
    
    this -> auxiliar = (struct nodo *) malloc (sizeof(this->auxiliar));
    auxiliar -> elemento = x;
    auxiliar -> proximo = NULL;

    if (inicio == 0)
        inicio = auxiliar;
    else{
        fim -> proximo = auxiliar;
    }
    fim = auxiliar;

     cout << this-> auxiliar -> elemento << " Inserido com sucesso!\n\n";
}

void Fila::remove(){
    if(!vazio(this->inicio)){
        this->auxiliar = this->inicio;
        this->inicio = this->inicio->proximo;
        free(this->auxiliar);
        cout << "\nRemoção feita com sucesso.";
    }else{
        cout << "\nA lista já está vazia.";
    }
}

void Fila::listar(){
    if(!vazio(this->inicio)){
        nodo *fila;
        fila = this->inicio;
        cout << "Elementos: ";
        while(!vazio(fila->proximo)){
            cout << "  " << fila->elemento;
            fila = fila->proximo;
        }
        //Último nodo:
        cout << "  " << fila->elemento;    
    }else{
        cout << "\nA fila está vazia.";
    }
}

bool Fila::vazio(struct nodo *campo){
    if(campo == NULL){
        return true;
    }else{
        return false;
    }
}
