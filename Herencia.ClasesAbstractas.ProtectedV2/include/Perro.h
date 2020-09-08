#ifndef PERRO_H
#define PERRO_H
#include "Animal.h"

//clase abstracta puesto que no sobreescribí el método virtual puro de la clase padre Animal
//LA ABSTRACCION ES UNA CUALIDAD QUE SE HEREDA
//LA UNICA FORMA DE ROMPER LA ABSTRACCION QUE SE HEREDA ES DECLARANDO LOS METODOS ABSTRACTOS EN LAS HIJAS
class Perro: public Animal
{
    public:
        Perro(string);
        ~Perro();
};

#endif // PERRO_H
