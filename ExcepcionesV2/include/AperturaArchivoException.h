#ifndef APERTURAARCHIVOEXCEPTION_H
#define APERTURAARCHIVOEXCEPTION_H
#include <iostream>
#include <exception>
using namespace std;

class AperturaArchivoException : public exception
{
    private:
        int motivo;

    public:
        AperturaArchivoException(int motivo) throw() : exception(), motivo(motivo) {}
        const char * what() throw()
        {
            switch(motivo)
            {
                case 1 : return "Excepcion por motivo 1";
                case 2 : return "Excepcion por motivo 2";
            }
            return "Error inesperado";
        }
};

#endif // APERTURAARCHIVOEXCEPTION_H
