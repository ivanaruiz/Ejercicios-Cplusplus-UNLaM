#include "Persona.h"

Persona::Persona()
{
    this->edad=0;   //pongo edad por default
}
int Persona::getEdad()
{
    return this->edad;
}

void modificar(Persona p,int nuevaEdad)
{
    p.edad= nuevaEdad;
    cout<<"\tEdad cambiada a "<<p.edad;
}

void modificarConReferencia(Persona &p, int nuevaEdad)
{
    p.edad= nuevaEdad;
    cout<<"\tEdad cambiada a "<<p.edad;
}
