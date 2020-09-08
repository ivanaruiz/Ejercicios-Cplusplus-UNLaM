#include "Persona.h"

Persona::Persona(string _nombre, int _edad)
    :   nombre(_nombre), edad(_edad)
{
}

Persona::~Persona()
{
    cout << "\ndestruyo: "<<this->nombre <<"\n"<<endl;
}

void Persona::dormir(int horas)
{
    cout << "Persona "<<this->nombre<<" duerme horas: "<<horas<<endl;
}
