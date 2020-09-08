#include <iostream> //stream = flujo
#include <stdlib.h>
#include "Punto.h"
using namespace std;

int main()
{
    Punto p(5,7);
    Punto otro(9,4);

    p.setX(1);  //asigno 1 a x. si no asignara nada, mostraria el 5.

    p.setY(2);  //lo mismo aca. si no asignara nada, mostraria el 7.

    cout<<"Primer punto: "<<endl;
    cout<<"x: " <<p.getX() << "\ny: " << p.getY() <<endl;

    //como al segundo punto no le apliqué el metodo set,
    //muestra los valores por default que ya tiene en su constructor
    cout<<"Segundo punto: "<<endl;
    cout<<"x: " <<otro.getX() << "\ny: " << otro.getY() <<endl;

    system("pause");
    return 0;
}
