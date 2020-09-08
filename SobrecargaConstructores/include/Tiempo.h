#ifndef TIEMPO_H
#define TIEMPO_H

#include <iostream>
#include <stdlib.h>


using namespace std;

class Tiempo
{
    private:
        int horas;
        int minutos;
        int segundos;
    public:
        Tiempo(int, int, int);
        Tiempo(int);
        void mostrarTiempo();
};

#endif // TIEMPO_H
