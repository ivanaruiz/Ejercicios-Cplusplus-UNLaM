#include "Test.h"

Test::Test()
{
    this->x= 10;
}

Test::~Test()
{
}

void Test::multiplicar()
{
    cout<<"El producto de "<<x<<" por 2 es " <<x*2<<endl;
}

//le paso como parametro un objeto de la clase
void accesoAmigo(Test t)
{
    t.x=5;
    cout<<"Despliego x desde funcion amiga: "<<t.x<<endl;
}

void accesoAmigoReferenciado(Test &t, int nuevoValor)
{

    t.x=nuevoValor;
   // cout<<"Despliego x desde funcion amiga: "<<t.x<<endl;
}

