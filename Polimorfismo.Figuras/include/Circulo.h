#ifndef CIRCULO_H
#define CIRCULO_H

#define PI 3.1415

#include "Figura.h"

//clase hija y concreta
class Circulo: public Figura
{
    private:
        double radio;
    public:
        Circulo(double);

        //ac� tambi�n sobreescribo los m�todos virtuales de la clase padre Figura
        string nombre() const;
        double area() const;
        double perimetro() const;

};

#endif // CIRCULO_H
