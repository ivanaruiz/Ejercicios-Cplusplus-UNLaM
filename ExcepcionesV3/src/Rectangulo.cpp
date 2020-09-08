#include "Rectangulo.h"
#include "MedidasException.h"

Rectangulo::Rectangulo(int _base, int _altura)
{
    try
    {
        base  = _base;
        altura= _altura;

        if(base <= 0 && altura<=0)
        {
            throw MedidasException(1);
        }
        if(base <= 0)
        {
            throw MedidasException(2);
        }
        if(altura <=0)
        {
            throw MedidasException(3);;
        }

    }
    catch(MedidasException &med)
    {
        cout << "Error: " <<  med.what() <<endl;
        cout << "Seteamos valor por defecto a 1" << endl;
        if(base<=0)
            base=1;
        if(altura<=0)
            altura=1;
    }

}

int Rectangulo::getBase()
{
    return this->base;
}

int Rectangulo::getAltura()
{
    return this->altura;
}
