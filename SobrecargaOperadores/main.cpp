/*
Crearemos dos personas y les daremos nombres y apellidos.
Crearemos una tercera que sera la suma de la primera y la segunda. digamos una concatenacion de
los nombres y apellidos de la primera y la segunda.
Sobrecargaremos el operador+ para hacer ese metodo.
*/

#include "Persona.h"

int main()
{
    //Creamos y mostramos primera persona
    Persona p1("pedro", "castillo");
    cout<<"Nombre: "<<p1.getNombre()<<endl;
    cout<<"Apellido: "<<p1.getApellido()<<endl;

    cout<<"\nCantidad personas creadas: "<<p1.cont<<"\n"<<endl;

    //Creamos y mostramos segunda persona
    Persona p2("diego", "gomez");
    cout<<"\nNombre: "<<p2.getNombre()<<endl;
    cout<<"Apellido: "<<p2.getApellido()<<endl;

    cout<<"\nCantidad personas creadas: "<<p2.cont<<"\n"<<endl;


    //Aca usaremos la sobrecarga del operador+
    Persona p3 = p1+p2;


    cout<<"\nNombre: "<<p3.getNombre()<<endl;
    cout<<"Apellido: "<<p3.getApellido()<<endl;


    cout<<"\nCantidad personas creadas: "<<p2.cont<<"\n"<<endl;

    //Vamos a hacer otra prueba con otra sobrecarga con el mismo operador+
    int dato;
    dato= p1+10;

    cout<<"Largo del nombre de la primera persona y le sumamos 10: "<<dato<<endl;

    //Aca lo probamos de otra manera sin sobrecarga
    cout<<"Largo del nombre de la primera persona y le sumamos 10: "<<p1.getNombre().length()+10<<endl;

    system("pause");
    return 0;
}
