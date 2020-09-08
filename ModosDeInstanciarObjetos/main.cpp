/*
p1: es un objeto creado en el �mbito de la funci�n main(), existir� mientras la ejecuci�n del programa
no deje el bloque de dicha funci�n; al salir de ella la memoria es liberada autom�ticamente.
Para acceder a los miembros del objeto (m�todos y atributos) se utlizar� el operador punto �.�:
p1.getNombre();
Usa memoria est�tica, por tanto no hace falta el destructor para ellos,
pues el compilador los destruye autom�ticamente al terminar el main.
*/

/*
p2: es un puntero a objeto al cual se le ha asignado la direcci�n de memoria para manipular
un objeto de la clase Persona.
La liberaci�n de la memoria depende de nosotros; as� como la hemos pedido con new,
debemos liberarla usando delete.
Si no lo hacemos es posible que esa memoria quede ocupada sin poder ser reasignada,
al menos hasta que el programa deje de ejecutarse.
La manera de acceder a los miembros del objeto es mediante el operador flecha �->�:
p1->getNombre();
Usa memoria din�mica, y usar� el destructor para destruir el objeto creado.
*/


#include "Persona.h"
int main()
{
    //aca uso memoria estatica al instanciar al objeto de esta manera
    Persona p1("pepe",40);

    cout<<"Persona 1:"<<endl;
    cout<<"Nombre: "<<p1.getNombre()<<" Edad: "<<p1.getEdad()<<endl;


    //aca uso memoria dinamica al instanciar el objeto de esta manera
    Persona * p2= new Persona("toto", 10);

    //ojo prestar atencion en la manera en que uso los metodos para p2
    cout<< "Persona 2:"<<endl;
    cout<< "Nombre: " <<p2->getNombre() <<" Edad: "<<p2->getEdad()<<endl;

    //al instanciar un objeto de manera dinamica, debo hacer delete del objeto luego,
    //para que no ocupe memoria
    delete p2;  //libero memoria

    //notaremos que el destructor de p2 se activa cuando hago el delete
    //sin embargo el destructor de p1 solo se activa al final del programa, es decir en return 0

    system("pause");
    return 0;
}

