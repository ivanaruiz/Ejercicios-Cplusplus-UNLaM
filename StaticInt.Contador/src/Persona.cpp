#include "Persona.h"

//aca inicializamos la variable static
int Persona::contador = 0;

//constructor
Persona::Persona(string _nombre, string _apellido)
    :   nombre(_nombre), apellido(_apellido)
{
    this->contador++;
}

//getters
string Persona::getNombre()
{
    return this->nombre;
}


string Persona::getApellido()
{
    return this->apellido;
}
