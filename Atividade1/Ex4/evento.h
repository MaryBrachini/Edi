#ifndef EVENTO_H
#define EVENTO_H

class evento {
public:
    evento();
    evento(const evento& orig);
    virtual ~evento();
    int A, B, C, R, S;
    float D;

    void lerDados();
    float calcularEx();
private:

};

#endif

