#include "Racional.h"

//Parte A
Racional::Racional()
{
    this->numerador=0;      //son valores por defecto
    this->denominador=1;
}


Racional::Racional(int _numerador, int _denominador)
    :   numerador(_numerador) , denominador(_denominador)
{
    this->simplificar();
}


Racional& Racional::simplificar()
{
    if(numerador<0 && denominador<0)
    {
         numerador= abs(numerador);
         denominador= abs(denominador);
    }
    int menor= abs(numerador)<abs(denominador) ? abs(numerador) : abs(denominador);

    for(int i=menor; i>1; i--)
    {
        if(numerador%i==0 && denominador%i==0)
        {
        numerador/=i;
        denominador/=i;
        break;
        }
    }
    return * this;
}


Racional::~Racional()
{
}

Racional Racional::mostrarRacional()
{
    return * this;
}


//Parte A y B
ostream& operator<<(ostream &salida, const Racional &r)
{
    if(r.denominador==0)
        r.numerador==0 ? salida<<"Indeterminado" : (r.numerador<0 ? salida<<"- Inf" : salida<<"+ Inf");
    else
        salida<<r.numerador<<"/"<<r.denominador;

    return salida;
}


//Parte C
//r6 = r6 + n1;
Racional& Racional::operator+(const int num)
{
    this->numerador = this->numerador + this->denominador * num;
    this->denominador = this->denominador;

    this->simplificar();
    return * this;
}


//r6 -= 5;
Racional& Racional::operator-=(const int num)
{
    this->numerador = this->numerador - this->denominador*num;
    this->denominador = this->denominador;

    this->simplificar();
    return * this;
}


//Parte D
Racional& Racional::operator=(const Racional &r)
{
    this->numerador= r.numerador;
    this->denominador= r.denominador;
    return *this;
}

Racional& Racional::operator*(const Racional &r)
{
    this->numerador*= r.numerador;
    this->denominador*= r.denominador;
    this->simplificar();
    return *this;
}

Racional& Racional::operator/(const Racional &r)
{
    this->numerador*= r.denominador;
    this->denominador*= r.numerador;
    this->simplificar();
    return *this;
}

//r11+= r12;
Racional& Racional::operator+=(const Racional &r)
{
    Racional aux(1,1);
    int mayor = this->denominador > r.denominador ? this->denominador : r.denominador;

    if(mayor%this->denominador==0 && mayor%r.denominador==0)
        aux.denominador = mayor;
    else
        aux.denominador = this->denominador*r.denominador;

    aux.numerador =  (aux.denominador/this->denominador)*this->numerador + (aux.denominador/r.denominador)* r.numerador;

    //como tengo que devolver el mismo objeto llamador (que sería r11 en nuestro ejemplo), le asigno el aux que usé
    this->numerador= aux.numerador;
    this->denominador = aux.denominador;
    this->simplificar();

    return *this;
}


Racional& Racional::operator-(const Racional &r)
{
    Racional aux(1,1);

    int mayor = this->denominador > r.denominador ? this->denominador : r.denominador;

    if(mayor%this->denominador==0 && mayor%r.denominador==0)
        aux.denominador = mayor;
    else
        aux.denominador = this->denominador*r.denominador;

    aux.numerador =  (aux.denominador/this->denominador)*this->numerador - (aux.denominador/r.denominador)* r.numerador;


    this->numerador= aux.numerador;
    this->denominador = aux.denominador;
    this->simplificar();
    return *this;
}


//r16= ++r15;
//preincremento     //aca devuelvo el objeto llamador, en nuestro ejemplo r16
Racional& Racional::operator ++()
{
    this->denominador = this->denominador;
    this->numerador = this->numerador + this->denominador;
    return *this;
}


//r18= r17++;
//postincremento    //aca necesito un aux
Racional Racional::operator ++(int)
{
    Racional aux= *this;
    aux.denominador = this->denominador;
    aux.numerador = this->numerador + this->denominador;
    return aux;
}


//Parte E   //como este metodo es friend, necesito un auxiliar
Racional operator+(const int &num, const Racional &r)
{
    Racional aux;
    aux.denominador = r.denominador;
    aux.numerador = r.denominador * num + r.numerador;
    return aux;
}
