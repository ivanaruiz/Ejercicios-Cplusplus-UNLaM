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

        static int cont;    //notar que esta variable de contador la hacemos pública
                            //ya que no pertenece a una Persona en particular
        Persona(string, string);
        string getNombre();
        string getApellido();

};


#endif // PERSONA_H
