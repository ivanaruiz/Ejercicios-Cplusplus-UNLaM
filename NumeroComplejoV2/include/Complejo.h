#ifndef COMPLEJO_H
#define COMPLEJO_H
#include <iostream>
#include <stdlib.h>
using namespace std;

class Complejo
{
        //los operadores de flujo de entrada y salida son siempre friend
        friend ostream& operator <<(ostream& salida, const Complejo &p);
        friend istream& operator >>(istream& entrada, Complejo &p);

    public:

        //métodos suma, producto y resta
        Complejo suma(const Complejo &);
        Complejo producto(const Complejo &);
        Complejo resta(const Complejo &);

        //constructores y destructor
        Complejo(float, float);
        Complejo();
        ~Complejo();

        //setters y getters
        void setReal(float);
        void setImag(float);

        float getReal() const;
        float getImag() const;

    private:
        float real;
        float imag;
};

#endif // COMPLEJO_H
