#include "Promedio.h"

Promedio::Promedio()
{
    this->suma = 0;     //inicializo los atributos
    this->ce   = 0;
}

void Promedio::agrgarElemento(int n)
{
if(this->ce==100)   //si llega a 100 elementos, que no devuelva nada
    {
    return;
    }

this->suma+=n;
this->ce++;
}


double Promedio::getPromedio() const
{
return this->suma/this->ce;
}

