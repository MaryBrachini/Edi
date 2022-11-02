#ifndef FILA_H
#define FILA_H

class Fila {
public:
    Fila();
    Fila(const Fila& orig);
    virtual ~Fila();
    
    struct nodo{
        int elemento;
        struct nodo *proximo;
    }*auxiliar, *inicio, *fim;
    
    void menu();
    void insere();
    void remove();
    void listar();
    bool vazio(struct nodo *campo);
    
private:

};

#endif /* FILA_H */

