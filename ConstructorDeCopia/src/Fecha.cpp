#include "Fecha.h"

Fecha::Fecha()
{
    cout<<"Uso constructor por defecto\n"<< endl;
}

Fecha::Fecha(int _d, int _m, int _a)
    :   d(_d), m(_m), a(_a)
{
    cout<<"\nUso constructor con parametros"<<endl;
}

//f2=f1  f2 es el objeto llamador, f1 se pasa por parametro
Fecha::Fecha(const Fecha &f)
{
    this->d= f.d;
    this->m= f.m;
    this->a= f.a;
    cout<<"\nUso constructor de copia"<<endl;
}

Fecha::~Fecha()
{
}

void Fecha::mostrarFecha()
{
    cout << this->d <<"/" << this->m <<"/" << this->a <<endl;
}
