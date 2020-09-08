#ifndef PERRO_H
#define PERRO_H
#include "Mascota.h"


class Perro: public Mascota
{
    private:
        int paseosDiarios;

    public:
        Perro(string, int, int);

        //este método es propio de Perro
        void darLaPata();

        //estos métodos derivan de Mascota
        void dormir();
        void comer();
};

#endif // PERRO_H
