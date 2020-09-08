#include "Complejo.h"

//1º constructor
Complejo::Complejo(float _real, float _imag)
    :   real(_real) , imag(_imag)
 {
 }
//2º constructor (sobrecarga de constructores)
 Complejo::Complejo()
 {
     real=0;
     imag=0;
 }

 Complejo::~Complejo()
 {
 }

 void Complejo::setReal(float _real)
 {
     this->real=_real;
 }

 void Complejo::setImag(float _imag)
 {
     this->imag=_imag;
 }

 float Complejo::getReal() const
 {
     return this->real;
 }

 float Complejo::getImag() const
 {
     return this->imag;
 }

//puntoSuma= punto1.suma(punto2);
 Complejo Complejo::suma(const Complejo &p)
 {
     Complejo aux;

     //cuando llamo a this se refiere al punto1, p se refiere a punto2
     aux.real= this->real + p.real;
     aux.imag= this->imag + p.imag;

     return aux;
 }

Complejo Complejo::producto(const Complejo &p)
{
    Complejo aux;

    aux.real= (this->real * p.real) + (this->imag * p.imag * (-1));
    aux.imag= (this->real * p.imag) + (this->imag * p.real);

    return aux;
}

Complejo Complejo::resta(const Complejo &p)
{
    Complejo aux(this->real - p.real , this->imag - p.imag);
    return aux;
}


ostream& operator <<(ostream& salida, const Complejo &p)
{
    salida <<"("<< p.real <<"," <<p.imag <<"i)";
    return salida;
}

istream& operator >> (istream& entrada, Complejo &p)
{
    cout<<"Parte real: ";
    entrada>>p.real;
    cout<<"Parte imag: ";
    entrada>>p.imag;
    return entrada;
}



