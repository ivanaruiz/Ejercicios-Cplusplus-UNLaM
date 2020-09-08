#ifndef PERRO_H
#define PERRO_H
#include "Animal.h"

class Perro: public Animal
{
    public:
        Perro(string);  //acá sí uso public asi luego lo puedo llamar del main
        ~Perro();

    //notar que no sobreescribí el método hablar
    //por tanto en caso de llamarlo desde el main, se ejecuta el de clase base Animal
};

#endif // PERRO_H
