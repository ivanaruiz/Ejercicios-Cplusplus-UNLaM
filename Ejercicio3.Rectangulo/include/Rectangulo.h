#ifndef RECTANGULO_H
#define RECTANGULO_H
#include <iostream>
#include <stdlib.h>
using namespace std;

class Rectangulo
{
    private:
        float base;
        float altura;
    public:
        Rectangulo(float, float);

        float getBase();
        float getAltura();

        float perimetro();
        float area();
};

#endif // RECTANGULO_H
