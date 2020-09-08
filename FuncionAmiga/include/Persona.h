#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <stdlib.h>
using namespace std;

class Persona
{
    //esta función modifica la edad pero SOLO en la función,
    //al volver al main se reestablece la que tenía
    friend void modificar(Persona p, int nuevaEdad);

    //en cambio en esta función, al pasar por referencia al objeto,
    //se modifica interiormente ese objeto, es decir que al volver al main queda con la edad nueva
    friend void modificarConReferencia(Persona &p, int nuevaEdad);

    private:
        int edad;
    public:
        Persona();
        int getEdad();


};

#endif // PERSONA_H
