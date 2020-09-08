#include "Persona.h"


Persona::Persona(string _nombre, int _edad)
{
    nombre= _nombre;
    edad= _edad;
}

void Persona::mostrar()
{
    cout<<"Nombre: "<<this->nombre<<endl;
    cout<<"Edad  : "<<this->edad<< endl;
}

//destructor virtual
Persona::~Persona()
{
        cout<<"Se destruye persona"<<endl;
}
