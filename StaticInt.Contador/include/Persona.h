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
        Persona(string, string);
        string getNombre();
        string getApellido();

        //el static int contador lo declaramos público
        //ya que con cada persona creada, debemos incrementarlo
        static int contador;
};

#endif // PERSONA_H
