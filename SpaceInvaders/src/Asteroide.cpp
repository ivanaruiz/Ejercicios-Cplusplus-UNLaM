#include "Asteroide.h"

Asteroide::Asteroide(int x, int y)
{
    this->x = x;
    this->y = y;
}

int Asteroide::getX()
{
    return this->x;
}

int Asteroide::getY()
{
    return this->y;
}
