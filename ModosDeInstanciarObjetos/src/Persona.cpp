#include "Persona.h"

Persona::Persona(string _nombre, int _edad)
    : nombre(_nombre) , edad(_edad)
{
}

Persona::~Persona()
{
    cout <<"Se ha destruido el objeto: "<<this->nombre<<endl;
}

string Persona::getNombre() const
{
    return this->nombre;
}

int Persona::getEdad() const
{
    return this->edad;
}
