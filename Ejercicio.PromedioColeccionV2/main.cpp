
#include "Promedio.h"

/*Realizar una clase que permita calcular el promedio de una colecci�n
de n�meros enteros.
La colecci�n puede contener hasta 100 elementos.*/


int main()
{
    Promedio pr;

    int i=1;

    while(i<= 100)
    {
        pr.agrgarElemento(i);
        i++;
    }


    cout << "El promedio es: " << pr.getPromedio() << endl;

    system("pause");
    return 0;
}
