#ifndef EVENTO_H
#define EVENTO_H

class evento {
public:
    evento();
    evento(const evento& orig);
    virtual ~evento();
    int n;
    float retorno;

    void lerDados();
    float calcular();

};

#endif



