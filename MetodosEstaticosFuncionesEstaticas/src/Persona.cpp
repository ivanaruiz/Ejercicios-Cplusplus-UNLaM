#include "Persona.h"


int Persona::cont;

//métodos estáticos
void Persona::setContador()
{
    cout<<"Inicializando el contador.."<<endl;
    cont=0;
}

int
 Persona::getContador()
{
    return cont;
}

Persona::Persona(string nom, string ape)
{
    this->nombre   = nom;
    this->apellido = ape;
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


