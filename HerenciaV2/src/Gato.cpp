#include "Gato.h"

Gato::Gato(string nombre, int edad, bool jugarConLaser)
    :   Mascota(nombre, edad) , jugarConLaser(jugarConLaser)
{
}


void Gato::cazarRaton()
{
    cout<<"Gato: cazo raton"<<endl;
}

void Gato::dormir()
{
    cout<<"Gato: ";
    Mascota::dormir();
}

void Gato::comer()
{
    cout<<"Gato: ";
    Mascota::comer();
}
