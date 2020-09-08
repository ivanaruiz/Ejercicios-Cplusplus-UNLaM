#include "Complejo.h"

int main()
{

    Complejo punto1(2,1);
    Complejo punto2(2,-3);
    Complejo puntoSuma;
    Complejo puntoProducto;
    Complejo puntoResta;



    cout << "Punto 1: (" <<punto1.getReal() << "," <<punto1.getImag()<<"i)"<<endl;
    cout << "Punto 2: (" <<punto2.getReal() << "," <<punto2.getImag()<<"i)"<<endl;

    puntoSuma= punto1.suma(punto2);
    cout << "Punto suma: ("<<puntoSuma.getReal() <<","<<puntoSuma.getImag()<<"i)"<<endl;


    puntoProducto = punto1.producto(punto2);
    cout << "Punto producto: ("<<puntoProducto.getReal() <<","<<puntoProducto.getImag()<<"i)"<<endl;


    puntoResta = punto1.resta(punto2);
    cout << "Punto resta: (" <<puntoResta.getReal() << ","<<puntoResta.getImag()<<"i)"<<endl;

    Complejo punto3;
    punto3=punto2;
    cout << "Punto 3: (" <<punto3.getReal() <<"," <<punto3.getImag() <<"i)"<<endl;

    Complejo punto4(4,5);
    cout<< "Punto 4: " <<punto4 <<endl;

    Complejo punto5;
    cout <<"Punto 5: "<< punto5<<endl;
    cout <<"Asignamos parte real e imaginaria al punto 5 para que no quede en 0: "<<endl;
    cin>> punto5;
    cout <<"Punto 5: "<< punto5 <<endl;

    system("pause");
    return 0;
}
