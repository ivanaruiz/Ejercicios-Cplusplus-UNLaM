#include "Complejo.h"

int main()
{

    Complejo punto1(2,5);
    Complejo punto2(8,3.5);
    Complejo puntoSuma;

    puntoSuma= punto1+punto2;


    cout << "Punto 1: (" <<punto1.getReal() << "," <<punto1.getImag()<<"i)"<<endl;
    cout << "Punto 2: (" <<punto2.getReal() << "," <<punto2.getImag()<<"i)"<<endl;

    cout << "Punto suma: (" <<puntoSuma.getReal() <<","<<puntoSuma.getImag()<<"i)"<<endl;


    Complejo puntoResta;
    puntoResta= punto1-punto2;

    cout << "Punto resta: (" <<puntoResta.getReal() <<","<<puntoResta.getImag()<<"i)"<<endl;

    system("pause");
    return 0;
}
