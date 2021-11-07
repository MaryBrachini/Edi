#ifndef EVENTO_H
#define EVENTO_H

class evento {
public:
    evento();
    evento(const evento& orig);
    virtual ~evento();
    int cod;
    float prec, qtd;

    void lerDados();
    float calcularPreco();
private:

};

#endif

