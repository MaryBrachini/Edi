#ifndef EVENTO_H
#define EVENTO_H

class evento {
public:
    evento();
    evento(const evento& orig);
    virtual ~evento();
    
    void valor();
    float verificar(float x,float y,float z);
private:

};

#endif

