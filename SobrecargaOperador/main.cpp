#include "Perro.h"


int main()
{
    //trabajaremos con punteros
    //creamos objeto p1
    //asignamos memoria dinámica
    Perro * p1= new Perro("Firulais",5);

    cout<<p1->toString();   //este lo hago para probar cómo funciona
                            //como trabajamos con punteros, utilizo la flechita (no puntito como en memoria estática)


    //ahora lo hago de otra manera
    //quiero ver mi objeto instanciado
    //sobrecargamos el operador de salida
    cout<<*p1<<endl;

    //liberamos la memoria qe tiene almacenado p1, que es nuestro objeto
    //es muy importante liberar la memoria cuando trabajamos con memoria dinamica, de eso se tratan los punteros
    delete p1;
    system("pause");
    return 0;
}
