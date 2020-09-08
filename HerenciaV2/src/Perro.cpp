#include "Perro.h"

Perro::Perro(string nombre, int edad, int paseosDiarios)
    :   Mascota(nombre, edad) , paseosDiarios(paseosDiarios)    //PRESTAR ATENCION
{
}


void Perro::darLaPata()
{
    cout <<"Perro: doy la pata "<<endl;
}

//estos métodos derivan de Mascota.
//notar que llamo a la función padre Mascota
void Perro::comer()
{
    cout <<"Perro: ";
    Mascota::comer();
}

void Perro::dormir()
{
    cout <<"Perro: ";
    Mascota::dormir();
}
