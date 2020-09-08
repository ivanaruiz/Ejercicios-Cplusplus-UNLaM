
#include "Rectangulo.h"


int main()
{
    Rectangulo r1(4,3);

    cout<< "Rectangulo. Base: " <<r1.getBase() << ". Altura: "<< r1.getAltura()<<"."<<endl;

    cout<< "Perimetro: "<<r1.perimetro()<<endl;
    cout<< "Area: " <<r1.area() <<endl;

    system("pause");
    return 0;
}
