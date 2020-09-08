#include "Numero.h"
#include "Number.h"

int main()
{
    Numero n1(5);

    cout<<"Muestro n1: ";
    cout<< n1<<endl;

    cout<<"Creo n2 con constructor de copia. Es decir hago n2(n1)"<<endl;
    Numero n2(n1);

    cout<<"Muestro n2: ";
    cout<<n2<<endl;

    cout<<"Modifico n1 y muestro n1: ";
    n1.setValor(10);
    cout<<n1<<endl;

    cout<<"Muestro n2: ";
    cout<<n2<<endl<<endl;

    //al cambiar el valor de n1, no se le cambia el valor de n2.

    //usamos otra clase, y creamos dos nuevos objetos
    Number m1(5);
    cout<<"Muestro m1: ";
    cout<<m1<<endl;

    cout<<"Creo m2 con constructor de copia. Es decir hago m2(m1)"<<endl;
    Number m2(m1);
    cout<<"Muestro m2: ";
    cout<<m2<<endl;

    cout<<"Modifico m1 y muestro m1: ";
    m1.setNumber(10);
    cout<<m1<<endl;

    cout<<"Muestro m2: ";
    cout<<m2<<endl;

    //vemos que m2 sí se modificó al haber modificado m1

    system("pause");
    return 0;
}
