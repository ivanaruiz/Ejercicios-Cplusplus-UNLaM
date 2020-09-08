#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <stdlib.h>
using namespace std;

class Persona
{

    private:
        string nombre;
        int edad;

    public:
        Persona(string, int);

        //destructor virtual
        virtual ~Persona();

        //el metodo para usar polimorfismo
        virtual void mostrar();
};

#endif // PERSONA_H
