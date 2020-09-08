#ifndef MEDIDASEXCEPTION_H
#define MEDIDASEXCEPTION_H
#include <exception>
#include <iostream>
using namespace std;

class MedidasException: public exception
{
    private:
        int motivo;

    public:
        MedidasException(int motivo) throw(): exception(), motivo(motivo) {}
        const char * what() throw()
        {
            switch(motivo)
            {
                case 1: return "1) BASE ERRONEA";
                case 2: return "2) ALTURA ERRONEA";
                case 3: return "3) PROFUNDIDAD ERRONEA";
                case 4: return "4) VARIOS DATOS ERRONEOS";
            }
            return "*ERROR INESPERADO*";
        }
};

#endif // MEDIDASEXCEPTION_H
