
#include "Persona.h"

int main()
{
    Persona p1("Alicia", "Silverstone");
    cout<< "Nombre:   " << p1.getNombre() << endl;
    cout<< "Apellido: " << p1.getApellido() << endl;
    cout<< "Contador de personas: " << Persona::contador <<endl<<endl;

    Persona p2("Milla", "Jovovich");
    cout<< "Nombre:   " << p2.getNombre() << endl;
    cout<< "Apellido: " << p2.getApellido() << endl;
    cout<< "Contador de personas: " << Persona::contador <<endl<<endl;

    Persona p3("Christian", "Bale");
    cout<< "Nombre:   " << p3.getNombre() << endl;
    cout<< "Apellido: " << p3.getApellido() << endl;
    cout<< "Contador de personas: " << Persona::contador <<endl<<endl;

    Persona p4("Charlize", "Theron");
    cout<< "Nombre:   " << p4.getNombre() << endl;
    cout<< "Apellido: " << p4.getApellido() << endl;
    cout<< "Contador de personas: " << Persona::contador <<endl<<endl;


    system("pause");
    return 0;
}
