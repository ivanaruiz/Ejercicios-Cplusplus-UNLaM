#include "Persona.h"

//Constructor de la clase Persona
Persona::Persona(string _nombre, int _edad)
    :   nombre(_nombre), edad(_edad)
{
}


void Persona::mostrarPersona()
{
    cout<<"Nombre: "<<nombre<< endl;
    cout<<"Edad: "<<edad<<endl;
}
