#ifndef FECHA_H
#define FECHA_H
#include <iostream>
#include <stdlib.h>
using namespace std;


class Fecha
{
    public:
        Fecha();                //constructor por defecto
        Fecha(int,int,int);     //constructor
        Fecha(const Fecha &);   //constructor de copia
        ~Fecha();
        void mostrarFecha();

    private:
        int d, m, a;
};

#endif // FECHA_H
