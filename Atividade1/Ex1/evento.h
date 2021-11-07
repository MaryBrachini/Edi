#ifndef EVENTO_H
#define EVENTO_H

class evento {
public:
    evento();
    evento(const evento& orig);
    virtual ~evento();
    int id = 0;

    void lerDados();
    int calcularIdade();
private:

};

#endif

