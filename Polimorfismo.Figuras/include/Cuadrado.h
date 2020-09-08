#ifndef CUADRADO_H
#define CUADRADO_H

#include "Figura.h"

class Cuadrado: public Figura
{
    private:
        double lado;

    public:
        Cuadrado(double lado);
        string nombre() const;  //sobreescribo los metodos, asi esta clase la hago concreta y no abstracta
        double perimetro() const ;
        double area() const;
};

//Si no sobreescribiera esos m�todos, entonces esta clase ser�a tambi�n abstracta.

#endif // CUADRADO_H
