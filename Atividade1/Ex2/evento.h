#ifndef EVENTO_H
#define EVENTO_H

class evento {
public:
    evento();
    evento(const evento& orig);
    virtual ~evento();
    int n1 = 0, n2 = 0, n3 = 0, nm = 0;

    void lerDados();
    int calcularMaior();
private:

};

#endif

