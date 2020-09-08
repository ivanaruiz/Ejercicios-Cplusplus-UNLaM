#include "Pareja.h"

Pareja::Pareja(int a, int b)
{
    this->a=a;
    this->b=b;
}

Pareja::Pareja()
{
}


//Sobrecarga del operador +
Pareja& operator+(const Pareja &p1, const Pareja &p2)
{
    return *(new Pareja(p1.a+p2.a , p1.b+p2.b));    //notar que estoy creando nuevo objeto
}                                                   //no modifico ni al objeto A ni al objeto B



//Otra manera de hacer la sobrecarga
/*
Pareja Pareja::operator+(const Pareja &p)
{
    Pareja aux;
    aux.a = this->a + p.a;
    aux.b = this->b + p.b;
    return aux;
}
*/

//Otra manera de resolver la sobrecarga de operador +
//Pero tener en cuenta que esta manera me modifica internamente el objeto A
//C=A+B
//cuando hace this, modifica a A
//y Pareja p es objeto B
/*
Pareja& Pareja::operator+(const Pareja &p)
{
    this->a += p.a;
    this->b += p.b;
    return * this;
}
*/

//Normalmente cuando se escribe una clase y se desea que el stream estándar de salida ( cout )
//pueda mostrar una representación de su valor se debe de sobrecargar el operador <<.
//esta sobrecarga de operador << es siempre friend
ostream& operator<<(ostream &salida, const Pareja &p)
{
    salida<<"("<<p.a<<","<<p.b<<")";
    return salida;
}

