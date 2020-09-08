#include "Personaje.h"

Personaje::Personaje(int a, int d)
{
    ataque = a;
    defensa= d;
}

Personaje::~Personaje()
{
}

void Personaje::mostrarDatos()
{
    cout<<"Ataque:  "<<ataque<<endl;
    cout<<"Defensa: "<<defensa<<endl;
}


//lo siguiente no forma parte de la clase,
//sin embargo podra acceder a los miembros privados y publicos de la clase
void modificar(Personaje &p, int att, int def)
{
    p.ataque  += att;
    p.defensa += def;
}
