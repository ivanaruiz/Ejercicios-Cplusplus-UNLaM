#include "Alumno.h"

Alumno::Alumno(string _nombre, int _edad, int _legajo)
    :   Persona(_nombre, _edad) , legajo(_legajo)
{
}

Alumno::~Alumno()
{
}
