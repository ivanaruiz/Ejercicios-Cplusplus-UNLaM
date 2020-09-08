#include "Pareja.h"

int main()
{
    Pareja A(50,20);
    Pareja B(30,60);

    //notaremos que el compilador no me deja ejecutar la siguiente linea
    //Pareja C= A+B;
    //Por eso vamos a sobrecargar el operador + para trabajar la suma de dos objetos

    Pareja C= A+B;

    //Para efectuar las siguientes líneas, también tengo que hacer una sobrecarga,
    //pero del operador <<
    cout<<"A= "<<A<<endl;
    cout<<"B= "<<B<<endl;
    cout<<"C= "<<C<<endl;

    system("pause");
    return 0;
}
