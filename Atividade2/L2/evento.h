#ifndef EVENTO_H
#define EVENTO_H

class evento {
public:
    evento();
    evento(const evento& orig);
    virtual ~evento();

    void lerDados();
    float calcularMedia(int n1, int n2, int n3,char f);
private:

};

#endif

