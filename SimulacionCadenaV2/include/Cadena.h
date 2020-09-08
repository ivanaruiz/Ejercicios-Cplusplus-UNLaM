#ifndef CADENA_H
#define CADENA_H
#include <iostream>
#include <stdlib.h>
using namespace std;


class Cadena
{
    friend ostream& operator<<( ostream & salida, const Cadena &c);
    friend Cadena operator+(const string, const Cadena &);

    public:
        Cadena();
        Cadena(string);
        Cadena(const Cadena&);
        Cadena& operator+(const string);

    private:
        string cad;
};


#endif // CADENA_H
