#ifndef GATO_H
#define GATO_H
#include "Animal.h"

class Gato: public Animal
{
    public:
        Gato(string);
        ~Gato();

        //notar que en esta clase sí voy a sobreeescribir el método hablar en el .cpp
        const char * hablar();
};

#endif // GATO_H
