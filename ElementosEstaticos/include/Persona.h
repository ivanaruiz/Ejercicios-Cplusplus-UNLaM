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
        //variable unica para todos los objetos que se construyan de las clases
        static int cont;   //contador de personas creadas
        //es decir todas las personas creadas van a tener este mismo contador

        Persona(string, string);
        ~Persona();

        string getNombre();
        string getApellido();
};


#endif // PERSONA_H
