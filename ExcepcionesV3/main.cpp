#include <iostream>
#include "Rectangulo.h"
using namespace std;

/*Crear clase Rectangulo con atributos base y altura. Y métodos getters y constructores.
En caso de que en el constructor se pasen parámetros iguales o menores a cero,
debe arrojar excepciones. Habrá tres tipos de excepciones.
Tanto si la base <=0, o altura<=0, o ambos son <=0
Desarrollar la clase MedidasException*/

int main()
{
    Rectangulo r1(4,2);

    //estos tres siguientes deberían tirar excepciones
    //cada cual por diferentes motivos
    Rectangulo r2(0,6);
    Rectangulo r3(2,-5);
    Rectangulo r4(-4,-1);

    cout << "r1: " <<r1.getBase() << "," << r1.getAltura() << endl;
    cout << "r2: " <<r2.getBase() << "," << r2.getAltura() << endl;
    cout << "r3: " <<r3.getBase() << "," << r3.getAltura() << endl;
    cout << "r4: " <<r4.getBase() << "," << r4.getAltura() << endl;

    system("pause");
    return 0;
}
