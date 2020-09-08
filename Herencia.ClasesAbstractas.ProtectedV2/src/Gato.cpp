#include "Gato.h"

Gato::Gato(string _nombre)
    :   Animal(_nombre)
{
}

Gato::~Gato()
{
}

//Sobreescribí el metodo virtual puro hablar, entonces esta clase no es clase abstracta
const char * Gato::hablar()
{
    return "miau";
}
