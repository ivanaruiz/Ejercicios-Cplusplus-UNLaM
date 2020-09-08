#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <stdlib.h>

using namespace std;

//Creamos la clase con sus atributos privados y los m�todos p�blicos

class Persona
{
    private:    //Atributos
        int edad;
        string nombre;
    public:     //M�todos
        Persona(int, string);  //Constructor
        void leer();
        void correr();
};

#endif // PERSONA_H
