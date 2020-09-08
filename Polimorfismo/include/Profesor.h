#ifndef PROFESOR_H
#define PROFESOR_H

#include "Persona.h"

class Profesor: public Persona
{
    private:
        int legajo;

    public:
        Profesor(string, int, int);
        virtual ~Profesor();
        void mostrar();


};

#endif // PROFESOR_H
