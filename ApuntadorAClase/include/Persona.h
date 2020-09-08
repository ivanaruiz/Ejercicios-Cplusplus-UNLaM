#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <stdlib.h>
using namespace std;


class Persona
{
    private:
        string nombre;
        string apellido;
    public:

        static int cont;


        Persona(string, string);
        ~Persona();

        string getNombre();
        string getApellido();

};


#endif // PERSONA_H
