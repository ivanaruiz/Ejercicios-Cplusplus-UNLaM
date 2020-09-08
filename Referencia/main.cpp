#include <iostream>
#include <stdlib.h>
using namespace std;

/*Veremos la diferencia entre pasar una variable (o lo que sea) con referencia o sin referencia.*/

void modificar(int num);
void modificarConReferencia(int &num);

int main()
{
    int a=5;
    cout << "Main... a:" <<a<<endl;

    modificar(a);
    cout << "Main... a:" <<a<<endl;

    modificarConReferencia(a);
    cout << "Main... a:" <<a<<endl;

    system("pause");
    return 0;
}

//notar que esta funcion no afectara el valor original
//solo modifica al num pero DENTRO de la función y nada mas
//al volver al main, se reestablece con el valor que ya tenía antes
void modificar(int num)
{
    num=8;
    cout << "Desde funcion sin referencia... a:" << num<<endl;
}


//esta funcion sí afectará al valor original
//cuando vuelva al main, volverá con el valor con el que se modificó aquí
void modificarConReferencia(int &num)   //lo paso por referencia
{
    num=8;
    cout << "Desde funcion con referencia... a:" << num<<endl;
}
