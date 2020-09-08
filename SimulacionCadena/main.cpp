#include "Cadena.h"

/*Desarrollar una clase que simule el comportamiento de una cadena de caracteres.
Sin utilizar el tipo de datos string.
La misma se debe poder utilizar con el siguiente main.
*/


int main()
{
    //Parte A:
    Cadena c1("Hola");
    cout << "c1: " << c1 << endl;

    Cadena c2(c1);  //usa el constructor de copia
    cout << "c2: " << c2 << endl;



    //Parte B:
    Cadena c3("Hola");
    cout << "c3: "<< c3 + " mundo" << endl;



    //Parte C:
    Cadena c4("Hola");
    Cadena c5;
    c5 = c4 + " Mundo";
    cout << "c5: "<<c5 << endl;



    //Parte D:
    Cadena c6("Hola");
    Cadena c7;
    c7 = "¡" + c6 + " Mundo!";
    cout << "c7: "<<c7 << endl;



    //Parte E:
    Cadena c8;
    cout << "c8: " << c8 << endl;


    system("pause");
    return 0;
}
