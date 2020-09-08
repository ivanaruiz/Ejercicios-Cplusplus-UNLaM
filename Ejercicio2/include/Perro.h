#ifndef PERRO_H
#define PERRO_H

#include <iostream>
#include <stdlib.h>

using namespace std;


class Perro
{
    private:
        string nombre;
        int edad;
        string color;
    public:
        Perro(string, int, string);
        void comer();
};

#endif // PERRO_H
