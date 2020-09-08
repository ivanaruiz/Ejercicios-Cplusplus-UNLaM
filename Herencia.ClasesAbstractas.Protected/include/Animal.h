#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <stdlib.h>
using namespace std;


class Animal
{
    //miembros protected: que no pueden ser accedidos desde fuera de clase,
    //pero sí pueden ser accedidos por sus clases derivadas
    //es decir del main no puede acceder, pero sí de una clase hija (herencia)
    protected:
        string nombre;
        Animal(string);

    public:
        ~Animal();
        //virtual es un modificador
        //al usar virtual quiere decir que este metodo puede ser reemplazado (sobreescrito) por una clase derivada
        virtual const char * hablar();    //ojo no es virtual puro
        //entonces debo desarrollar su funcion en Animal.cpp, aunque luego en una hija puedo (o no) sobreescribirla
        //si fuera virtual puro (es decir virtual string hablar()=0 ) no tendria que desarrollar este metodo en Animal.cpp
        //pero sí deberia reescribirlo en la clase hija

        //ojo esta clase aun no es abstracta porque no usé el virtual puro

        //también podría haber usado:
        //virtual string hablar() const;
};

#endif // ANIMAL_H
