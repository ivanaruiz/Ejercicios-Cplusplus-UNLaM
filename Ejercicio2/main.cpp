#include "Perro.h"


int main()
{
    string nombre, color;
    int edad;

    //pido estos datos al usuario
    cout<<"Ingrese nombre del perro: "<<endl;
    cin>> nombre;
    cout<<"Ingrese edad del perro: "<<endl;
    cin>>edad;
    cout<<"Ingrese color del perro: "<<endl;
    cin>>color;

    //mando por par�metros las variables que ingres� usuario por teclado
    Perro p1 (nombre, edad, color);

    p1.comer();

    system("pause");
    return 0;
}
