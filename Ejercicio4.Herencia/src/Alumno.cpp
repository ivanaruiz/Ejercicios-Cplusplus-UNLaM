#include "Alumno.h"

//solo pide el codigoAlumno y notaFinal, lo otra lo toma de Persona
Alumno::Alumno(string _nombre, int _edad, string _codigoAlumno, float _notaFinal)
    : Persona(_nombre, _edad), codigoAlumno(_codigoAlumno), notaFinal(_notaFinal)
{
}



void Alumno::mostrarAlumno()
{
    mostrarPersona();   //notar que llamo a un método de Persona
    cout<<"Codigo alumno: "<<codigoAlumno<<endl;
    cout<<"Nota final: "<<notaFinal<<endl;
}
