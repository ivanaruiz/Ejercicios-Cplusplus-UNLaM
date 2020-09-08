#ifndef MASCOTA_H
#define MASCOTA_H
#include <iostream>
#include <stdlib.h>
using namespace std;


class Mascota
{
    private:
        string nombre;
        int edad;

    public:
        Mascota(string, int);

        void dormir();
        void comer();


};

#endif // MASCOTA_H
