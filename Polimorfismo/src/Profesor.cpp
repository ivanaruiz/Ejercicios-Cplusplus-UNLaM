#include "Profesor.h"

Profesor::Profesor(string _nombre, int _edad, int _legajo)
    :   Persona(_nombre, _edad)  , legajo(_legajo)
{
}


void Profesor::mostrar()
{
    Persona::mostrar();
    cout<<"Legajo: " <<this->legajo<<endl;
}


Profesor::~Profesor()
{
    cout<<"Se destruye profesor"<<endl;
}
