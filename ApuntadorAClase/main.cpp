/*
Crearemos punteros a la clase y mostraremos los datos desde ellos
*/

#include "Persona.h"

int main()
{

    Persona p1("pedro", "castillo");
    cout<<"Nombre: "<<p1.getNombre()<<endl;
    cout<<"Apellido: "<<p1.getApellido()<<endl;



    cout<<"\nCantidad personas creadas: "<<p1.cont<<"\n"<<endl;

    Persona p2("diego", "gomez");
    cout<<"\nNombre: "<<p2.getNombre()<<endl;
    cout<<"Apellido: "<<p2.getApellido()<<endl;

    cout<<"\nCantidad personas creadas: "<<p2.cont<<"\n"<<endl;


    Persona p3("alicia", "calderon");
    cout<<"\nNnombre: "<<p3.getNombre()<<endl;
    cout<<"Apellido: "<<p3.getApellido()<<endl;


    cout<<"\nCantidad personas creadas: "<<Persona::cont<<"\n"<<endl;


    //creo un puntero a la clase
    Persona *ptrPersona;
    //Obtenemos la direccion del objeto de la primera persona
    ptrPersona= &p1;
    //Hacemos uso del objeto desde el puntero
    cout<<"Nombre: " <<ptrPersona->getNombre()<<endl;
    cout<<"Apellido: "<<ptrPersona->getApellido()<<endl;



    system("pause");
    return 0;
}
