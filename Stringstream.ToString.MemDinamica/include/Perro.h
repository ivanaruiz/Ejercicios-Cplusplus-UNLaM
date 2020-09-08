#ifndef PERRO_H
#define PERRO_H
#include <iostream>
#include <stdlib.h>
#include <string>
#include <sstream>  //esto es porque usé una variable de tipo stringstream
using namespace std;


class Perro
{
    //vamos a sobrecargar nuestro operador de salida<<
    //recibe los dos parametros por referencia, por eso usa el ampersan
    friend ostream& operator<<(ostream &, Perro&);

    private:
        string nombre;
        int edad;

    public:
        Perro(string, int);
        string getNombre();
        string toString();  //para que nos muestre los datos de nuestro objeto
};

#endif // PERRO_H
