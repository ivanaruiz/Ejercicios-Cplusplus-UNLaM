#include "Complejo.h"

Complejo::Complejo()
{
}

Complejo::Complejo(float _real, float _imag)
    : real(_real) , imag(_imag)
{
}

Complejo::~Complejo()
{
    //dtor
}

void Complejo::mostrarValores()
{
    cout << this->real <<"," << this->imag <<"\n" <<endl;
}
/*
Complejo& operator+(Complejo &p)
{
    Complejo aux;
    aux.real = this->real + p.real;
    aux.imag = this->imag + p.imag;
    return aux;
}
*/

//para p1=p2; por ejemplo. p1 es el objeto llamador, p2 lo que va por parametro
Complejo& Complejo::operator=(const Complejo &p)
{
    this->real = p.real;
    this->imag = p.imag;
    return * this;
}

//==============================================================================
//==============================================================================


//p1+5 ejemplo
//p1 sera el llamador, 5 pasa como parametro
//Al devolver el mismo objeto con el que opero(objeto llamador) uso ampersan
//OJO QUE LA HACER ESTE METODO Y USAR THIS, NOS ALTERARA P1. ES DECIR P1 QUEDARA COMO(6,2) EN EL MAIN
/*Complejo& Complejo::operator+(const float &num)
{
    this->real += num;
    return *this;
}*/


//p1+5
//Otra manera de hacer lo mismo que lo anterior pero devolviendo un obj nuevo(aux), entonces no uso ampersan
//PERO OJO, QUE AL HACER ESTA FORMA, NO ME ALTERA p1. en el main p1 quedara como p1(1,2) como estaba inicialmente
//al usar aux, me ahorro de que no me altere p1 al sumarle algo, sino que simplemente me devuelva la suma
Complejo Complejo::operator+(const float &num)
{
    Complejo aux(*this);
    aux.real+=num;
    return aux;
}

//Regla para saber dónde va el ampersan en Complejo&
//Si devuelve this , devuelve una referencia, por tanto Complejo&
//Si devuelve un objeto nuevo, ejemplo aux, sera Complejo (sin ampersan)

//==============================================================================
//==============================================================================


//ejemplo p6=p1+p2
//p1 es objeto llamador, (el this, y es el objeto que se devolvera). y p2 pasa como parametro (p.real ejemplo)
//OJO QUE ESTO ME VA A MODIFICAR INTERNAMENTE P1
/*
Complejo& Complejo::operator+(const Complejo &p)
{
    this->real+= p.real;
    this->imag+= p.imag;
    return *this;
}*/
//otra manera de hacer p1+p2 , pero usando friend en este caso, de todas maneras, la anterior manera seria mejor
//esta manera no me modifica p1
/*Complejo operator+(const Complejo &p1, const Complejo &p2)
{
    Complejo aux;
    aux.real = p1.real + p2.real;
    aux.imag = p1.imag + p2.imag;
    return aux;
}*/

//otra manera de hacer p6=p1+p2, no es friend, pero tampoco me modifica internamente p1
//uso esta versión
Complejo Complejo::operator+(const Complejo &p)
{
    Complejo aux(this->real + p.real , this->imag + p.imag);
    return aux;
}

//==============================================================================
//==============================================================================


//ejemplo p7= 1+p6
//dijimos que el de la izquierda (1) es el llamador, pero en este caso es un flotante! no es miembro de la clase
//entonces como invocamos al operador de la izquierda? (el 1)
//se lo puede invocar a traves de funciones amigas, la funcion amiga no pertenece a la clase pero accede a los miembros
//lo que no va a existir en esta funcion es el objeto this
//por eso creamos un aux
Complejo operator+(const float &num, const Complejo &p)
{
    Complejo aux(p.real + num, p.imag);
    return aux;
}


