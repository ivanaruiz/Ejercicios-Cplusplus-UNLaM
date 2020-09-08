#include "Cuadrado.h"

Cuadrado::Cuadrado(double _lado)
{
    lado= _lado;
}

string Cuadrado::nombre() const
{
    return "cuadrado";
}

double Cuadrado::area() const
{
    return lado*2;
}

double Cuadrado::perimetro() const
{
    return lado*4;
}
