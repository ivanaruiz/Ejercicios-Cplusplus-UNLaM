#ifndef DIVIDIRPORCEROEXCEPTION_H
#define DIVIDIRPORCEROEXCEPTION_H
#include <iostream>
#include <exception>
using namespace std;

//exception ya es una clase base en C++
//el what es un metodo de esa clase
//what me devuelve la cadena de texto con el error que está pasando

class DividirPorCeroException: public exception
{
    public:
        DividirPorCeroException() : exception() {}
        const char *what() throw()
        {
            return "Error de division por cero";
        }
};

#endif // DIVIDIRPORCEROEXCEPTION_H
