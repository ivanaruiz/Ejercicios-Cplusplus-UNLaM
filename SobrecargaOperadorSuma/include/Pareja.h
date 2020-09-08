#ifndef PAREJA_H
#define PAREJA_H
#include <iostream>
#include <stdlib.h>
using namespace std;

class Pareja
{
    friend Pareja& operator+(const Pareja &p1, const Pareja &p2);
    friend ostream& operator<<(ostream &salida, const Pareja &p);

    private:
        int a;
        int b;
    public:
        Pareja(int, int);
        Pareja();

        //otra manera de sobrecargar el operador +
        //Pareja& operator+(const Pareja&);

        //otra manera de sobrecargar el operator +
        //Pareja operator+(const Pareja &);
};



#endif // PAREJA_H
