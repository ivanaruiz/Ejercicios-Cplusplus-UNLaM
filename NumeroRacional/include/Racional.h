#ifndef RACIONAL_H
#define RACIONAL_H
#include <iostream>
#include <stdlib.h>
using namespace std;


class Racional
{
        friend ostream& operator<<(ostream &salida, const Racional &);
        friend Racional operator+(const int &, const Racional &);       //ej r1= 10+r1

    private:
        int numerador;
        int denominador;

    public:
        Racional();
        Racional(int,int);
        ~Racional();
        Racional mostrarRacional();

        Racional& operator+(const int);        //ej r1=r1+10
        Racional& operator-=(const int);      //ej r1-=5
        Racional& operator=(const Racional &);  //ej r1=r2

        Racional& operator*(const Racional &);
        Racional& operator/(const Racional &);
        Racional& operator+=(const Racional &);
        Racional& operator-(const Racional &);

        Racional& operator ++();    //preincremento
        Racional operator ++(int);  //postincremento

        Racional& simplificar();
};

#endif // RACIONAL_H
