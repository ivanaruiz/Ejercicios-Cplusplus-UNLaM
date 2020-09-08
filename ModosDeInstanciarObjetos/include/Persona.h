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

        //uso destructor ya que voy a crear objetos con memoria dinámica
        ~Persona();
        string getNombre() const;
        int getEdad() const;

};

#endif // PERSONA_H
