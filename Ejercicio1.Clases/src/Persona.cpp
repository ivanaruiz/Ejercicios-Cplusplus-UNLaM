#include "Persona.h"

//inicializamos el constructor
Persona::Persona(int _edad, string _nombre)
{
    edad   = _edad;
    nombre = _nombre;
}

//m�todos
void Persona::leer()
{
    cout<<"Soy "<<this->nombre<<" y estoy leyendo un libro"<<endl;
}

//notar que desde los m�todos p�blicos puedo acceder a los atributos privados
//dentro de la misma clase
void Persona::correr()
{
    cout<<"Soy "<<this->nombre<<" y estoy corriendo y tengo "<<this->edad<< " anios"<<endl;
}
