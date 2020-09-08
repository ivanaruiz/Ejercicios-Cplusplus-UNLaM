#ifndef FIGURA_H
#define FIGURA_H
#include <iostream>
#include <stdlib.h>
using namespace std;

//Clase base, y abstracta
class Figura
{
    private:
        //no declaro atributos pues como Cuadrado y Circulo derivan de esta clase,
        //no tienen atributos en común
        //por lo tanto dejamos que cada subclase declare sus atributos

    public:
        //metodos virtuales, no existe el codigo, es un metodo abstracto, el = 0 me hace la clase abstracta
        //la palabra virtual me activa el polimorfismo
        virtual string nombre() const = 0;
        virtual double perimetro() const = 0;
        virtual double area() const = 0;
};

//el const = 0 me indica que no tiene codigo ese método
//esto lo convierte en una clase abstracta (a Figura), no puedo instanciar objetos de esta clase
//con tal que tenga un solo metodo virtual puro, ya me lo convierte en clase abstracta
//pero sí puedo crear clases concretas q heredan de Figura, por ej clase Cuadrado

#endif // FIGURA_H
