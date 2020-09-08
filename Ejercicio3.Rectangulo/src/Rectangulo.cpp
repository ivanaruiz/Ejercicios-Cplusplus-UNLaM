#include "Rectangulo.h"

Rectangulo::Rectangulo(float base, float altura)
{
    this->base   = base;
    this->altura = altura;
}

float Rectangulo::perimetro()
{
    return this->base*2 + this->altura*2;
}

float Rectangulo::area()
{
    return this->base * this->altura;
}

float Rectangulo::getBase()
{
    return this->base;
}

float Rectangulo::getAltura()
{
    return this->altura;
}
