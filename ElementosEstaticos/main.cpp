/*
Haremos un contador de personas, es decir se crea la clase Persona. Y se van creando algunos objetos.
El contador, que será static int, no cambia para los objetos.
Es decir es siempre el mismo para cada uno de ellos.
Se especifica en la clase en público y se inicializa fuera de ella, en el cpp.
*/

#include "Persona.h"

int main()
{
    //Notar que puedo llamar al contador desde los objetos creados o tambien desde la clase misma

    Persona p1("pedro", "castillo");
    cout<<"Nombre: "<<p1.getNombre()<<endl;
    cout<<"Apellido: "<<p1.getApellido()<<endl;

    //Muestro el contador con una persona creada
    cout<<"\nCantidad personas creadas: "<<p1.cont<<"\n"<<endl;

    Persona p2("diego", "gomez");
    cout<<"\nNombre: "<<p2.getNombre()<<endl;
    cout<<"Apellido: "<<p2.getApellido()<<endl;

    cout<<"\nCantidad personas creadas: "<<p2.cont<<"\n"<<endl;


    Persona p3("alicia", "calderon");
    cout<<"\nNnombre: "<<p3.getNombre()<<endl;
    cout<<"Apellido: "<<p3.getApellido()<<endl;


    cout<<"\nCantidad personas creadas: "<<Persona::cont<<"\n"<<endl;

    system("pause");
    return 0;
}
