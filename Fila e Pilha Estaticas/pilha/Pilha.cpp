#include "Pilha.h"
#include <iostream>

using namespace std;

Pilha::Pilha() {
}

Pilha::Pilha(const Pilha& orig) {
}

Pilha::~Pilha() {
}

void Pilha::lerDados(){

    
    int qtd;
    cout<<"Digite a quantidade de elementos: ";
    cin>>qtd;
    int pilha[qtd];
    this->menu(qtd, pilha);

}

void Pilha::menu(int qtd, int pilha[]){

    int opcao=0, topo=0;
    while(true){
    
        cout<<"Digite 1 para inserir o proximo elemento"<<endl;
        cout<<"Digite 2 para remover um elemento"<<endl;
        cout<<"Digite 3 para mostrar o resultado"<<endl;
        cin>>opcao;
        
        switch(opcao){
             case 1: topo = this->inserir(topo, qtd, pilha);
                     break;
             case 2: topo = this->remover(topo);
                     break;
             case 3: this->imprimir(topo, pilha);
                     break;
             default: break;              
    
         }
    }
}

int Pilha::inserir(int topo, int qtd, int pilha[]){
    
    int val=0;
    
    if(topo == qtd)
        cout<<"é necessário remover um elemento"<<endl;
    else{
        cout<<"Digite um elemento a ser inserido na pilha"<<endl;
        cin>>val;
        pilha[topo]=val;
        topo++;
    }  
    return topo;

}

int Pilha::remover(int topo){
    
    if(topo < 0)
        cout<<"A pilha está vazia"<<endl;
    else
        topo--;
 
    return topo;
}


void Pilha::imprimir(int topo, int pilha[]){

    for(int i=0; i<topo; i++)
        cout<<pilha[i]<<endl;

}