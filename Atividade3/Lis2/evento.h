#ifndef EVENTO_H
#define EVENTO_H

struct vamos {
    long int cpf;
    float alt, peso;
    char nome[40], sexo;
};

class evento {
public:

    vamos dados[2];

    evento();
    evento(const evento& orig);
    virtual ~evento();

    void lerDados();
    void mostrar(int cpf,int cont);
    

private:
};

#endif

