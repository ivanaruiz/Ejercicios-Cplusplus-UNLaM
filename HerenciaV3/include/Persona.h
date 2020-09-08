#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <stdlib.h>
using namespace std;

//clase base
class Persona
{
    public:
        Persona(string, int);
        ~Persona();
        void dormir(int);

    private:
        string nombre;
        int edad;
};

#endif // PERSONA_H
