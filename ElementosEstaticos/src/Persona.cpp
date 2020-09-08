#include "Persona.h"

//Inicializamos el contador (la variable estatica)
//No lo puedo inicializar dentro de la clase
int Persona::cont=0;


Persona::Persona(string nom, string ape)
{
    nombre=nom;
    apellido=ape;
    cont++;     //con cada persona creada e inicializada, aumenta el contador
}


Persona::~Persona()
{
}


string Persona::getNombre()
{
    return this->nombre;
}


string Persona::getApellido()
{
    return this->apellido;
}
