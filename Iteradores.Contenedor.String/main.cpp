#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

//Iterador
//Es un objeto que sabe recorrer containers
//Se parece a un puntero pero NO es un puntero
//así como un container string se parece a un array de char pero NO es un array


int main()
{
    string cadena("Hola");

    //Iterador
    string::iterator inicio = cadena.begin();
    cout << "Inicio: " << *inicio << endl;

    inicio++;
    cout << "Siguiente: " << *inicio << endl;

    string::iterator final = cadena.end()-1;
    cout << "Final: " << *final << endl;


    //iterar
    cout << endl;
    cout << "--Contenido de la cadena con iterador--" << endl;
    for(string::iterator it = cadena.begin() ; it!= cadena.end() ; ++it)
    {
        cout << *it << endl;   //o  cout<<*it; para que salga en una misma linea
    }
    //el cadena.end() me devuelve la posicion final, el equivalente al \0
    //es decir me devuelve la posicion siguiente a la ultima letra


    cout << "--Contenido al reves--" << endl;
    for(string::iterator it = cadena.end() -1 ; it!= cadena.begin() -1 ; it--)
    {
        cout << *it <<endl;
    }


    //iterador reverso(mas facil que el anterior)
     cout << "--Contenido de la cadena (iterador reverso)--" << endl;
     for(string:: reverse_iterator rit = cadena.rbegin() ; rit!= cadena.rend(); ++rit)
     {
         cout << *rit << endl;
     }

    system("pause");
    return 0;
}



