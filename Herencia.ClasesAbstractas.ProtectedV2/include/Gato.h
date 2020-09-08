#ifndef GATO_H
#define GATO_H
#include "Animal.h"

//no es clase abstracta puesto que SÍ sobreescribí el método puro virtual hablar de la clase padre Animal
//LA ABSTRACCION ES UNA CUALIDAD QUE SE HEREDA
//LA UNICA FORMA DE ROMPER LA ABSTRACCION QUE SE HEREDA ES DECLARANDO LOS METODOS ABSTRACTOS EN LAS HIJAS
class Gato: public Animal
{
    public:
        Gato(string);
        ~Gato();
        const char * hablar();
};

#endif // GATO_H
