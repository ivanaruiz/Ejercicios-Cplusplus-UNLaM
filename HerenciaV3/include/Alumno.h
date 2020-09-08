#ifndef ALUMNO_H
#define ALUMNO_H

#include "Persona.h"

//subclase
class Alumno: public Persona
{
    public:
        Alumno(string, int, int);
        ~Alumno();

    private:
        int legajo;
};

#endif // ALUMNO_H
