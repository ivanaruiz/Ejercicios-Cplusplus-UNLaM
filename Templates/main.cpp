#include <iostream>
#include <stdlib.h>
using namespace std;

//template: plantilla
//me sirve para datos genéricos en una misma función

template <typename T>
void mostrarSizeYValor(T x);

template <typename T>
T maximo(T x, T y);

template <typename T, typename Q>
void mostrarSizeYValorDosTipos(T x, Q y);


int main()
{
    char c = 'A';
    mostrarSizeYValor(c);

    int i = 7;
    mostrarSizeYValor(i);

    float f= 5.4;
    mostrarSizeYValor(f);

    string s1("hola");
    mostrarSizeYValor(s1);


    cout<<endl;
    cout << "Maximo: " << maximo(5,3) << endl;
    cout << "Maximo: " << maximo('a','z') <<endl<<endl;


    char letra = 'D';
    int num = 8;
    mostrarSizeYValorDosTipos(letra, num);

    system("pause");
    return 0;
}

//uso tipo de dato generico en el metodo, llamado T
//ese tipo de dato luego al llamar a la funcion en el main, se especifica
//template me indica que este método es genéricos
template <typename T>
void mostrarSizeYValor(T x)
{
    cout << "size: " <<sizeof(T);
    cout << " valor: " << x << endl;
}
//Esto es polimorfismo en tiempo de compilación


template <typename T>
T maximo(T x, T y)
{
    return (x > y) ? x : y;
}


template <typename T, typename Q>
void mostrarSizeYValorDosTipos(T x, Q y)
{
    cout << "Tipo T - " ;
    cout << "size: " << sizeof(T);
    cout << " valor: " << x <<endl;

    cout << "Tipo Q - " ;
    cout << "size: " << sizeof(Q);
    cout << " valor: " << y << endl;
}


