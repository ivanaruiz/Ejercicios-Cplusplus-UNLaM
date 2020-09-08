#include "Perro.h"


Perro::Perro(string _nombre, int _edad, string _color)
    :   nombre(_nombre), edad(_edad), color(_color)
{
}


void Perro::comer()
{
    cout<< "El perro "<< this->nombre << " de "
    <<this->edad<< " anios y color "<<this->color<<  " come Sabrositos."<<endl;
}
