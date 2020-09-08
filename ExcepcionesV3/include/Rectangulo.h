#ifndef RECTANGULO_H
#define RECTANGULO_H
#include <iostream>
using namespace std;
#include <stdlib.h>

#include "MedidasException.h"

class Rectangulo
{
    private:
        int base;
        int altura;

    public:
        Rectangulo(int,int);
        int getBase();
        int getAltura();
};

#endif // RECTANGULO_H
