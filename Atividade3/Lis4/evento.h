#ifndef EVENTO_H
#define EVENTO_H

struct vamola {
    int cod;
    float prec;
    char nome[40];
};

class evento {
public:

    vamola dados[3];

    evento();
    evento(const evento& orig);
    virtual ~evento();

    void lerDados();
    void mostrar(int i);
    void pesquisar(int i);

private:
};

#endif
