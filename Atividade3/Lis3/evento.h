#ifndef EVENTO_H
#define EVENTO_H

class evento {
public:

    struct vamo {
        char nome[40], sexo;
        float peso, altura;
        long int cpf;
    } vetor[3];

    evento();
    evento(const evento& orig);
    virtual ~evento();

    void lerDados();
    void pesquisaS(int i, long int cpf);
    int pesquisaB(int i, long int cpf);
    void ordBolha(int i);
private:
};

#endif

