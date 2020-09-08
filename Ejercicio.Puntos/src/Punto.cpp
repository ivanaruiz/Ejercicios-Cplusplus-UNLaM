#include "Punto.h"

//el constructor no retorna nada, ni void ni int ni nada
Punto::Punto(int x, int y)
    :x(x), y(y) //inicializo valores
{
}


void Punto::setX(int x)
{
    this->x = x;    //this termina siendo un puntero
}


void Punto::setY(int y)
{
    this->y = y;
}


int Punto::getX() const
{
    //no podria hacer esto por ejemplo x+=10; sin el const sí podria
    return this->x;
}

int Punto::getY() const ///lo hace readOnly a este metodo, no me dejara hacer cambios de variables dentro de ella
{
    return this->y;
}
