#ifndef PILHA_H
#define PILHA_H

class Pilha {
public:
    Pilha();
    Pilha(const Pilha& orig);
    virtual ~Pilha();
    
    struct nodo{
	int elem;
	struct nodo *ant;
    } *topo, *aux;
    
    bool vazio(struct nodo *campo);
    void inserir(void);
    void remover(void);
    void listar(void);
    void menu(void);
    
private:

};

#endif

