#ifndef EVENTO_H
#define EVENTO_H

struct vamola {
    int i;
    long int mat;
    float n1, n2;
    char nome[40];
};

class evento {
public:

    vamola dadosaluno[2];

    evento();
    evento(const evento& orig);
    virtual ~evento();

    void lerDados();
    void mostrar();

private:
};

#endif
