/*Devuelve el promedio de 5 numeros*/

#include "Promedio.h"


int main()
{
    float elem;
    Promedio pr;

    for(int i=0; i <5; i++)
    {
        cout<<"Ingresar: "<<endl;
        cin>> elem;
        pr.agrgarElemento(elem);
    }

    cout << "El promedio es: " << pr.getPromedio() << endl;

    system("pause");
    return 0;
}
