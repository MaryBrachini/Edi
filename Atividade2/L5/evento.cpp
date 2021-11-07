/*Faça uma função que recebe por parâmetro o raio de uma esfera e calcula o seu volume (v = 4/3
 * PI * R^3)*/

#include "evento.h"
#include<iostream>
#include<math.h>

evento::evento() {
}

evento::evento(const evento& orig) {
}

evento::~evento() {
}

using namespace std;

void evento::raio() {
    float r;

    cout << "Informe o raio da esfera: ";
    cin >> r;
    cout << "Volume: " << this->vol(r);

}

float evento::vol(float r) {
    float vol;

    vol = (3 / 4)*3.14 * pow(r, 3);
    
    return vol;
}
