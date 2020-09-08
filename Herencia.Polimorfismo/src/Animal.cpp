#include "Animal.h"

Animal::Animal(int _edad, string _nombre)
{
    edad = _edad;
    nombre= _nombre;
}



void Animal::comer()
{
    cout << "Yo como";  //esta frase continuara en las clases hijas con polimorfismo
}

//destructor virtual
Animal::~Animal()
{
}
