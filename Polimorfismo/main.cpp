#include "Persona.h"
#include "Alumno.h"
#include "Profesor.h"

int main()
{
    //lo que es polimorfismo, se usa con punteros
    Persona * vec[3] ;

    vec[0] = new Alumno("Alejandro", 20, 6);
    vec[1] = new Alumno("Maria", 26, 8.5);
    vec[2] = new Profesor("Jose", 40, 100);

    for(int i=0; i<3; i++)
    {
        vec[i]->mostrar();
        cout<<"\n"<<endl;
    }

    //luego borro los objetos con el destructor virtual
    for(int i=0; i<3; i++)
    {
        delete vec[i];
    }

    system("pause");
    return 0;
}
