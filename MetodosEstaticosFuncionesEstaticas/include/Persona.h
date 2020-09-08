#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <stdlib.h>
using namespace std;


class Persona
{
    private:

        static int cont; //pasamos el contador de public a private
        string nombre;
        string apellido;

    public:

        Persona(string, string);

        string getNombre();
        string getApellido();

        //metodo estatico. inicializa el contador
        static void setContador();

        //metodo estatico que devuelve el contador
        static int getContador();
};



#endif // PERSONA_H
