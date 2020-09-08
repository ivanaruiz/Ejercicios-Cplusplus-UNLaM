//funciones que tienen el mismo nombre, pero tienen distinta cantidad de parametros,
//o los parametros son distintos tipos de datos
//al invocar las funciones, el compilador sabe a cuál de las funciones llamar aunque se llamen igual

#include <iostream>
#include <stdlib.h>
using namespace std;

//Sobrecargo funciones
int suma(int a, int b)
{
    return a+b;
}

double suma(double a, double b)
{
    return a+b;
}

int main()
{
    cout<<"Suma de enteros: " << suma(2,3)<<endl;

    cout<<"Suma de doubles: " << suma(1.25, 2.25)<<endl;

    system("pause");
    return 0;
}
