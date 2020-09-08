#include <iostream>
#include <stdlib.h>

using namespace std;

//la excepcion es una situacion inesperada o anomala en la cual el programa no puede seguir adelante
//throw se utiliza para lanzar una excepcion

int main()
{
    int numerador, denominador;

    try
    {
        cout << "Numerador: " <<endl;
        cin >> numerador;

        cout << "Denominador: " <<endl;
        cin >> denominador;

        if(denominador == 0)
            throw denominador;  //lanza una excepcion, la cual luego es atrapada por el bloque catch
        else
            cout << "El resultado es " << (float)((float)numerador/(float)denominador) <<endl;
    }

    catch(int e)
    {
        cout << "El denominador " << e << " no es valido." << endl;
    }

    system("pause");
    return 0;
}
