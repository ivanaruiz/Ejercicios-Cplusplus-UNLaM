#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int a;

    cout<<"Ingrese un numero: "<<endl;

    cin>>a;

    if(cin.fail())  //se refiere a que si falló el cin, o sea si por ejemplo,
                    //en vez de un numero, metio una letra.
    {
        cout<<"Error de ingreso."<<endl;
        a = 0;      //entonces lo seteo a un cero por default
    }

    cout<<"El numero es "<<a<<endl;

    system("pause");
    return 0;
}
