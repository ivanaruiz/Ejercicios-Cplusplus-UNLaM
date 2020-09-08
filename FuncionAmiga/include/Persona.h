#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <stdlib.h>
using namespace std;

class Persona
{
    //esta funci�n modifica la edad pero SOLO en la funci�n,
    //al volver al main se reestablece la que ten�a
    friend void modificar(Persona p, int nuevaEdad);

    //en cambio en esta funci�n, al pasar por referencia al objeto,
    //se modifica interiormente ese objeto, es decir que al volver al main queda con la edad nueva
    friend void modificarConReferencia(Persona &p, int nuevaEdad);

    private:
        int edad;
    public:
        Persona();
        int getEdad();


};

#endif // PERSONA_H
