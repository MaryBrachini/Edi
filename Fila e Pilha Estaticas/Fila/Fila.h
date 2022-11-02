#ifndef FILA_H
#define FILA_H

class Fila {
public:
    Fila();
    Fila(const Fila& orig);
    virtual ~Fila();
    
    void lerDados();
    void menu(int qtd, int fila[]);
    int inserir (int fim, int qtd, int fila[]);
    int remover(int fila[],int fim);
    void imprimir(int fim, int fila[]);
    
private:

};

#endif 

