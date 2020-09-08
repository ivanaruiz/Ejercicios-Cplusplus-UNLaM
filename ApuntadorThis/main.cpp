/*
Cada objeto en C++ tiene su propia direccion, y esta direccion es manejada a traves del puntero this.
Este puntero es un parametro implicito para todas las funciones miembro de la clase.
Las funciones amiga no tienen un puntero this porque estas no son parte de la clase.
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

    //notar que hay dos maneras distintas de llamar al contador

    system("pause");
    return 0;
}
