#ifndef EVENTO_H
#define EVENTO_H

class evento {
public:
    evento();
    evento(const evento& orig);
    virtual ~evento();

    void lerDados();
    float calcular(float a, float b, float c);
private:

};

#endif



