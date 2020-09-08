#ifndef FECHA_H
#define FECHA_H

#include <iostream>
#include <stdlib.h>
using namespace std;

class Fecha
{
    private:
        int d, m, a;

    public:
        Fecha(int, int, int);   //Constructor1
        Fecha(long);            //Constructor2
        void mostrarFecha();
};

#endif // FECHA_H
