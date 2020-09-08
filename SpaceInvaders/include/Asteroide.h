#ifndef ASTEROIDE_H
#define ASTEROIDE_H

#include "Name.h"

class Asteroide
{
    private:
        int x;
        int y;
    public:
        Asteroide(int, int);
        void pintar();
        void mover();
        void choque(Name &N);
        int getX();
        int getY();
};

#endif // ASTEROIDE_H
