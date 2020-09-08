#ifndef ALUMNO_H
#define ALUMNO_H
#include <iostream>
#include <stdlib.h>
using namespace std;

class Alumno

{
    friend Alumno operator+(Alumno &, Alumno &);


    public:
        Alumno(int);
        ~Alumno();
        void setNota(int);
        int getNota();

        //la otra opción es:
        //Alumno operator+(const Alumno &);

    private:
        int nota;
};

#endif // ALUMNO_H
