#include "Circulo.h"

Circulo::Circulo(double _radio)
{
    radio= _radio;
}

string Circulo::nombre() const
{
    return "circulo" ;
}

double Circulo::area() const
{
    return PI*radio*radio;
}

double Circulo::perimetro() const
{
    return 2*PI*radio;
}
