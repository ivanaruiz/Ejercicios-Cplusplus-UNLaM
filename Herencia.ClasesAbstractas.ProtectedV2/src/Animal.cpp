#include "Animal.h"

Animal::Animal(string _nombre)
    :   nombre(_nombre)
{
}

Animal::~Animal()
{
}

string Animal::getNombre()
{
    return this->nombre;
}

