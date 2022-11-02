#ifndef PILHA_H
#define	PILHA_H

class Pilha {
public:
    Pilha();
    Pilha(const Pilha& orig);
    virtual ~Pilha();
    
    void lerDados();
    void menu(int qtd, int pilha[]);
    int inserir (int topo, int qtd, int pilha[]);
    int remover(int topo);
    void imprimir(int topo, int pilha[]);

    
private:

};

#endif	/* PILHA_H */
