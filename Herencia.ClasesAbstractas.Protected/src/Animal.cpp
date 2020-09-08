#include "Animal.h"

Animal::Animal(string _nombre)
    :   nombre(_nombre)
{

}

Animal::~Animal()
{
}


//desarrollo este metodo porque es virtual pero no es virtual puro
const char * Animal::hablar()
{
    return "??";
}
