#ifndef EVENTO_H
#define EVENTO_H

class evento {
public:
    evento();
    evento(const evento& orig);
    virtual ~evento();
    int id, meses = 0, dias = 0;

    void lerDados();
    int calcularMeses();
    int calcularDias();
private:

};

#endif

