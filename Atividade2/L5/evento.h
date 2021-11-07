#ifndef EVENTO_H
#define EVENTO_H

class evento {
public:
    evento();
    evento(const evento& orig);
    virtual ~evento();
   
    
    void raio();
    float vol(float r);
private:
    
    
};

#endif

