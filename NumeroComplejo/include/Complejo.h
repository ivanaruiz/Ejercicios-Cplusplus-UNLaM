#ifndef COMPLEJO_H
#define COMPLEJO_H
#include <iostream>
#include <stdlib.h>
using namespace std;

class Complejo
{
    friend Complejo operator+(Complejo &, Complejo &);
    friend Complejo operator-(Complejo &, Complejo &);


    private:
        float real;
        float imag;

    public:

        Complejo(float, float); //tengo dos constructores
        Complejo();

        void setReal(float);
        void setImag(float);

        float getReal();
        float getImag();

        //otras opciones para realizar la sobrecarga de operadores + y -
//      Complejo operator+(const Complejo &);
//      Complejo operator-(const Complejo &);
};

#endif // COMPLEJO_H
