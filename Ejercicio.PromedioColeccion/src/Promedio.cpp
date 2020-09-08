#include "Promedio.h"

Promedio::Promedio()
{
    this->cant = 0;
    this->acum = 0;
}

void Promedio::agrgarElemento(float elem)
{
    this->acum+= elem;
    this->cant++;
}

float Promedio::getPromedio() const
{
    return this->acum/ this->cant;
}
