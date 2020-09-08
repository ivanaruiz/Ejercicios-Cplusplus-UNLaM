#include "Mascota.h"

Mascota::Mascota(string nombre, int edad)
    :   nombre(nombre) , edad(edad)
{
}


void Mascota::dormir()
{
    cout<<"Duermo 8 horas"<<endl;
}

void Mascota::comer()
{
    cout<<"Como 200 gr de comida" <<endl;
}
