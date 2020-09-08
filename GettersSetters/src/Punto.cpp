#include "Punto.h"

//Constructor vacío
Punto::Punto()
{
}

//Establecemos valores a los atributos
void Punto::setPunto(int _x, int _y)
{
    x= _x;
    y= _y;
}

int Punto::getPuntoX()
{
    return this->x;
}

int Punto::getPuntoY()
{
    return this->y;
}
