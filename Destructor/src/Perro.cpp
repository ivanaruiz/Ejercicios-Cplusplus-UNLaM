#include "Perro.h"

Perro::Perro(string _nombre, string _raza)
{
    nombre= _nombre;
    raza= _raza;
}

//El destructor no lleva nada dentro
Perro::~Perro()
{
}

void Perro::mostrarDatos()
{
    cout<<"Nombre: "<<nombre << " Raza: "<<raza<<endl;
}

void Perro::jugar()
{
    cout<<"El perro "<<nombre<< " esta jugando\n"<<endl;
}
