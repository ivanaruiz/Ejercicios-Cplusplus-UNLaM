#ifndef PERRO_H
#define PERRO_H
#include "Mascota.h"


class Perro: public Mascota
{
    private:
        int paseosDiarios;

    public:
        Perro(string, int, int);

        //este m�todo es propio de Perro
        void darLaPata();

        //estos m�todos derivan de Mascota
        void dormir();
        void comer();
};

#endif // PERRO_H
