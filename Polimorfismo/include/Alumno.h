#ifndef ALUMNO_H
#define ALUMNO_H

#include "Persona.h"

class Alumno: public Persona
{
    private:
        float nota;

    public:
        Alumno(string, int, float);
        virtual ~Alumno();  //destructor virtual
        void mostrar();

};

#endif // ALUMNO_H
