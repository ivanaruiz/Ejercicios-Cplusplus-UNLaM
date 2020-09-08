#ifndef PUNTO_H
#define PUNTO_H
#include <iostream>
#include <stdlib.h>
using namespace std;


class Punto
{
    private:
        int x, y;
    public:
        Punto();
        void setPunto(int, int);
        int getPuntoX();
        int getPuntoY();
};

#endif // PUNTO_H
