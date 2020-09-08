#include "Name.h"


Name::Name(int x, int y, int corazones, int vidas)
{
    this->x = x;
    this->y = y;
    this->corazones = corazones;
    this->vidas = vidas;
}

Name::~Name()
{
}

int Name::getX()
{
    return this->x;
}

int Name::getY()
{
    return this->y;
}

void Name::decrecerCorazones()
{
    corazones--;
}

int Name::getVidas()
{
    return this->vidas;
}


