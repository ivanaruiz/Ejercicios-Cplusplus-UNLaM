#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <stdlib.h>

using namespace std;

//Creamos la clase con sus atributos privados y los métodos públicos

class Persona
{
    private:    //Atributos
        int edad;
        string nombre;
    public:     //Métodos
        Persona(int, string);  //Constructor
        void leer();
        void correr();
};

#endif // PERSONA_H
