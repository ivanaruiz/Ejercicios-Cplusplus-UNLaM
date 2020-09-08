#include "Complejo.h"

//1º constructor
Complejo::Complejo(float _real, float _imag)
    :   real(_real) , imag(_imag)
 {
 }
//2º constructor (sobrecarga de constructores) este lo hago vacio por si no quiero inicializar el objeto
 Complejo::Complejo()
 {
 }

 //Setters y getters
 void Complejo::setReal(float _real)
 {
     this->real=_real;
 }

 void Complejo::setImag(float _imag)
 {
     this->imag=_imag;
 }

 float Complejo::getReal()
 {
     return this->real;
 }

 float Complejo::getImag()
 {
     return this->imag;
 }

Complejo operator+(Complejo &p1, Complejo &p2)
{
    Complejo aux;

    aux.setReal(p1.getReal() +p2.getReal())  ,  aux.setImag(p1.getImag() + p2.getImag());
    return aux;
}

Complejo operator-(Complejo &p1, Complejo &p2)
{
    Complejo aux;
    aux.setReal(p1.getReal()-p2.getReal()) , aux.setImag(p1.getImag()- p2.getImag());
    return aux;
}

//Otras maneras de realizar estas sobrecargas de operadores
/*
Complejo operator+(const Complejo &c1, const Complejo &c2)
{
    Complejo aux(c1.real+c2.real, c1.imag+c2.imag);
    return aux;
}

Complejo operator-(const Complejo &c1, const Complejo &c2)
{
    Complejo aux(c1.real-c2.real, c1.imag-c2.imag);
    return aux;
}
*/

//Otras maneras más, sin ser friend
/*
Complejo Complejo::operator+(const Complejo &c)
{
    Complejo aux(this->real + c.real, this->imag+c.imag);
    return aux;
}

Complejo Complejo::operator-(const Complejo &c)
{
    Complejo aux(this->real -c.real, this->imag-c.imag);
    return aux;
}
*/

