#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <iostream>
#include <stdlib.h>
using namespace std;


class Empleado
{
    private:
        string nombre;
        string apellido;
    public:
        Empleado();
        ~Empleado();
        Empleado(string nomb);

        void apellidoDefault();
        void setNombre(string nombre, string apellido);
        string getNombre();
};




#endif // EMPLEADO_H
