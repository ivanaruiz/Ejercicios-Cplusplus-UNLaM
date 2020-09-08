#ifndef ALUMNO_H
#define ALUMNO_H

#include "Persona.h"


//clase hija, el public significa que puede acceder a todo lo p�blico de la clase Persona
//hereda de la clase Persona.
class Alumno : public Persona
{
    private:
        string codigoAlumno;
        float notaFinal;
    public:
        //en el constructor no solo tendr� sus atributos, sino tambi�n los de Persona
        Alumno(string, int, string, float);
        void mostrarAlumno();
};


#endif // ALUMNO_H
