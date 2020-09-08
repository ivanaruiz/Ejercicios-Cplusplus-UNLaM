#include "Alumno.h"

Alumno::Alumno(int n)
{
    this->nota=n;
}

Alumno::~Alumno()
{
}

void Alumno::setNota(int n)
{
    this->nota= n;
}

int Alumno::getNota()
{
    return this->nota;
}


Alumno operator+(Alumno &a1, Alumno &a2)
{
    Alumno aux(0);
    aux.setNota(a1.getNota()+a2.getNota());
    return aux;

    //también podría haber hecho:
    //return * (new Alumno(a1.nota + a2.nota));
}


//Tambien podría haber hecho
/*
Alumno Alumno::operator+(const Alumno &a)
{
    Alumno aux(0);
    aux.setNota(this->nota + a.nota);
    return aux;
}
*/
