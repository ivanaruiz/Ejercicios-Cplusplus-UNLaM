#ifndef PERRO_H
#define PERRO_H
#include "Animal.h"


class Perro: public Animal
{
    private:
        string raza;
    public:
        Perro(int, string, string);
        void comer();
};

#endif // PERRO_H
