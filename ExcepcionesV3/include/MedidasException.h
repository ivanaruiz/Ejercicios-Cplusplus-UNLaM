#ifndef MEDIDASEXCEPTION_H
#define MEDIDASEXCEPTION_H
#include <iostream>
#include <exception>
using namespace std;

class MedidasException: public exception
{
    private:
        int motivo;

    public:
        MedidasException(int motivo) throw() :  exception(), motivo(motivo) {}
        const char * what() throw()
        {
            switch(motivo)
            {
                case 1: return "1. La base y altura no pueden ser menores o iguales a 0";
                case 2: return "2. La base no puede ser menor o igual a 0";
                case 3: return "3. La altura no puede ser menor o igual a 0";
            }
            return "*ERROR INESPERADO*";
        }
};

#endif // MEDIDASEXCEPTION_H


