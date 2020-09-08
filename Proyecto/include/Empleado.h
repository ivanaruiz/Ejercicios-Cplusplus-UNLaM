#ifndef EMPLEADO_H
#define EMPLEADO_H

#include "Persona.h"

//clase hija, hereda de Persona
class Empleado:public Persona
{
    public:
        //tendr� los mismos constructores que clase Padre
        //en este caso no agrega sus propios atributos, pero podr�a haberlo hecho
        Empleado();
        Empleado(string, string, string, string, long, char, float);
        ~Empleado();

        //m�todos de esta clase sola
        void setSueldo(float);
        float getSueldo();

    private:
        float sueldo;
};

#endif // EMPLEADO_H
