#include "Humano.h"

Humano::Humano(int _edad, string _nombre)   :
    Animal(_edad, _nombre)
{
}

void Humano::comer()
{
    Animal::comer();    //notar que llamo a clase base
    cout << " en un mesa sentado en una silla" << endl;
}
