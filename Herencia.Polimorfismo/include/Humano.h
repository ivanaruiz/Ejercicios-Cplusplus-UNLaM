#ifndef HUMANO_H
#define HUMANO_H
#include "Animal.h"

class Humano: public Animal
{
    private:

    public:
        Humano(int, string);
        void comer();
};

#endif // HUMANO_H
