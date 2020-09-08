#include "Alumno.h"
#include "Persona.h"

Alumno::Alumno(string _nombre, int _edad, float _nota)
    :   Persona(_nombre, _edad) , nota(_nota)
{

}


void Alumno::mostrar()
{
    Persona::mostrar();
    cout<<"Nota final: "<< this->nota <<endl;
}


Alumno::~Alumno()
{
    cout<<"Se destruye alumno"<<endl;
}
