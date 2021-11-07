#ifndef EVENTO_H
#define EVENTO_H

class evento {
public:
    evento();
    evento(const evento& orig);
    virtual ~evento();
    
    struct vamo{
        char nome[40];
        long int cpf;
        float saldo;
    }vetor[3];
    
    void lerDados();
    void modificar();
private:

};

#endif
