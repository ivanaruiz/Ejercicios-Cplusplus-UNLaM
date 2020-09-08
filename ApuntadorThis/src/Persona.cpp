#include "Persona.h"


int Persona::cont=0;


Persona::Persona(string nom, string ape)
        {
            this->nombre=nom;
            this->apellido=ape;
            this->cont++;
        }



string Persona::getNombre()
{
    return this->nombre;
}


string Persona::getApellido()
{
    return this->apellido;
}
