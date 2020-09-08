#ifndef COMPLEJO_H
#define COMPLEJO_H
#include <iostream>
#include <stdlib.h>
using namespace std;


class Complejo
{
        //p7= 1+p6; //este tipo de caso siempre es friend
        //puesto que el 1, el objeto llamador, no pertenece a la clase
        friend Complejo operator+(const float &, const Complejo &);

        //friend Complejo operator+(const Complejo &, const Complejo &);

    public:
        Complejo();
        Complejo(float, float);
        ~Complejo();

        //operador asignacion
        Complejo& operator=(const Complejo &p);

        //metodo para sumarle un flotante a un objeto creado, ojo que este me altera el objeto llamador creado
        //Complejo& operator+(const float &);
        //otra manera de hacer lo mismo que el metodo anterior, pero sin alterar el objeto llamador
        //p5= p1+5;
        Complejo operator+(const float &);

        //otra sobrecarga del operador+
        //p6= p1+p2;
        //Complejo& operator+(const Complejo &p);
        Complejo operator+(const Complejo &p);

        void mostrarValores();
    private:
        float real;
        float imag;
};

#endif // COMPLEJO_H
