#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    string password;
    string primerCaracter;
    string ultimoCaracter;
    int longitudPassword;

    cout << "Introduce el password: " ;
    cin >> password;

    longitudPassword = password.size();
    primerCaracter = password.substr(0, 1); //es 0 es la posicion inicial de la cadena
                                            //el 1 es para que extraiga un solo caracter a partir de la pos 0
    ultimoCaracter = password.substr(longitudPassword-1 , 1);

    try
    {
        if(longitudPassword < 2)
            throw 0;
        if(primerCaracter != "A")
            throw 1;
        if(ultimoCaracter != "Z")
            throw 2;

        cout << "**Password correcto**" << endl;
    }
    catch(int error)
    {
        cout << "Error: " ;
        if(error == 0)
            cout << "El password debe tener mas de un caracter";
        if(error == 1)
            cout << "El primer caracter debe ser una A mayuscula";
        if(error == 2)
            cout << "El ultimo caracter debe ser una Z mayuscula";
        cout << endl;
    }

    system("pause");
    return 0;
}
