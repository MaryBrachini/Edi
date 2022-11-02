#ifndef DUPLAMENTE_H
#define DUPLAMENTE_H

class Duplamente {
public:
    Duplamente();
    Duplamente(const Duplamente& orig);
    virtual ~Duplamente();
    
     struct nodo{
         struct nodo *anterior;
        int elemento;
        struct nodo *proximo;
       
    }*auxiliar, *inicio, *fim;
    
    void menu();
    void inserir();
    void remover(int tipo);
    void listar();
    void ordBolha();
    bool vazio(struct nodo *campo);
    
private:

};

#endif

