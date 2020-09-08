#ifndef PERSONAJE_H
#define PERSONAJE_H
#include <iostream>
#include <stdlib.h>

using namespace std;

class Personaje
{
    //esta funcion no es ni privada ni publica
    //pero al ser friend, puede acceder a los atributos privados dentro de la clase
    friend void modificar(Personaje &, int, int);

    private:
        int ataque;
        int defensa;

    public:
        Personaje(int, int);
        ~Personaje();

        void mostrarDatos();
};





#endif // PERSONAJE_H
