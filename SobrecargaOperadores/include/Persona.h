#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <stdlib.h>
using namespace std;


class Persona
{
    //otra manera de sobrecarga
    //friend Persona operator+(Persona &p1, Persona &p2);

    friend int operator+(Persona &p, const int valor);

    private:
        string nombre;
        string apellido;
    public:

        static int cont;

        Persona(string, string);

        string getNombre() const;
        string getApellido() const;
        void setNombre(string);
        void setApellido(string);

        Persona operator+(Persona &p);

        //otra manera de hacer casi lo mismo
        //Persona& operator+(Persona &p);
};



#endif // PERSONA_H
