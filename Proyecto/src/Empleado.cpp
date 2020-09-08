#include "Empleado.h"

//constructores que derivan de la clase Persona
Empleado::Empleado()
{
}

Empleado::Empleado(string _nya, string _domicilio, string _localidad, string _fec_nac, long _dni, char _sexo, float _sueldo)
{
    sueldo= _sueldo;
}


Empleado::~Empleado()
{
    cout<<"se destruyo empleado "<< endl;
}


void Empleado::setSueldo(float suel)
{
    this->sueldo= suel;
}
float Empleado::getSueldo()
{
    return this->sueldo;
}
