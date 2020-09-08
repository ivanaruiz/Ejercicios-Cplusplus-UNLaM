/*
Un metodo estatico puede ser llamado sin haber creado un objeto de la clase, y puede ser accedido utilizando
el nombre de la clase, y el operador de resolucion ::
Un metodo estatico solo puede acceder a miembros estaticos
Ahora ya no dejaremos el contador static en la parte publica. Lo pasamos a private
*/


#include "Persona.h"

int main()
{
    Persona::setContador();

    Persona p1("pedro", "castillo");
    cout<<"Nombre: "<<p1.getNombre()<<endl;
    cout<<"Apellido: "<<p1.getApellido()<<endl;

    //ya no puedo acceder a cont (porque es privado), asi que accedo al metodo que me devuelve el cont
    cout<<"\nContador: "<<Persona::getContador()<<endl<<endl;


    Persona p2("diego", "gomez");
    cout<<"\nNombre: "<<p2.getNombre()<<endl;
    cout<<"Apellido: "<<p2.getApellido()<<endl;


    cout<<"\nContador: "<<Persona::getContador()<<endl<<endl;

    //reinicio el contador de nuevo
    Persona::setContador();


    Persona p3("alicia", "calderon");
    cout<<"\nNnombre: "<<p3.getNombre()<<endl;
    cout<<"Apellido: "<<p3.getApellido()<<endl;


    cout<<"\nContador: "<<Persona::getContador()<<endl;



    system("pause");
    return 0;
}
