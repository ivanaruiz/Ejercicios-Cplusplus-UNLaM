#include "Perro.h"

Perro::Perro(int _edad, string _nombre, string _raza)
    :   Animal(_edad, _nombre), raza(_raza)
{
}

void Perro::comer()
{
    Animal::comer();
    cout << " en un platito en el piso" << endl;
}
