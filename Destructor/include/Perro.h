#ifndef PERRO_H
#define PERRO_H
#include <stdlib.h>
#include <iostream>

using namespace std;

class Perro
{
    private:
        string nombre;
        string raza;

    public:
        Perro(string, string);  //Constructor
        ~Perro();               //Destructor
        void mostrarDatos();
        void jugar();
};

#endif // PERRO_H
