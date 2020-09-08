#include "Gato.h"

Gato::Gato(string _nombre)
    :   Animal(_nombre)
{
}

Gato::~Gato()
{
}

//sobreescribo método hablar
const char * Gato::hablar()
{
    return "miau";
}
