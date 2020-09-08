#include "Complejo.h"


int main()
{
    Complejo p1(1,2);
    Complejo p2(3,6);

    cout<<"Punto 1: " <<endl;
    p1.mostrarValores();
    cout<<"Punto 2: " <<endl;
    p2.mostrarValores();

    //p3 es el objeto this, objeto llamador //p1 es lo que se manda por parametro
    //sobrecarga de operador asignación =
    Complejo p3 = p1;
    cout<<"Punto 3: //aca hicimos p3=p1" <<endl;
    p3.mostrarValores();

    Complejo p4(p1);
    cout<<"Punto 4: //aca hicimos p4(p1)" <<endl;
    p4.mostrarValores();

    //sobrecarga de constructores. llamo a constructor vacío.
    Complejo p5;
    //sobrecarga del operador+
    //p1 es el objeto llamador, 5 es lo que se pasa por parámetro
    p5= p1+5;
    cout<<"Punto 5: //aca hicimos p5=p1+5" <<endl;
    p5.mostrarValores();

    Complejo p6;
    p6= p1+p2;
    cout<<"Punto 6: //aca hicimos p6=p1+p2" <<endl;
    p6.mostrarValores();

    Complejo p7;
    p7= 1+p6;
    cout<<"Punto 7: //aca hicimos p7= 1+p6" <<endl;
    p7.mostrarValores();

    system("pause");
    return 0;
}
