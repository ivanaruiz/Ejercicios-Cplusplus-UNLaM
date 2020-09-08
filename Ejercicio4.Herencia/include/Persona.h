#ifndef PERSONA_H
#define PERSONA_H
#include <stdlib.h>
#include <iostream>
using namespace std;


//clade padre
class Persona
{
    private:
        string nombre;
        int edad;
    public:
        Persona(string, int);
        void mostrarPersona();
};

#endif // PERSONA_H
