#include "Persona.h"

int main()
{
    Persona p1;
    int nuevaEdad;

    cout<<"\nLa edad de persona es "<< p1.getEdad()<<endl;

    cout<<"Ingrese una nueva edad para modificarle: "<<endl;
    cin>>nuevaEdad;

    modificar(p1, nuevaEdad);

    cout<<"\nLa nueva edad de la persona es "<<p1.getEdad()<<endl<<endl;

    cout<<"Lo que paso aca es que se modifico la edad PERO SOLO EN LA FUNCION,"<<endl;
    cout<<"eso porque pase una copia de los parametros."<<endl;
    cout<<"Para que modifique realmente a la clase, uso la referencia &."<<endl;
    cout<<"Entonces creo nueva funcion amiga."<<endl<<endl;

    system("pause");

    modificarConReferencia(p1, nuevaEdad);
    cout<<"\nLa nueva edad de la persona es "<<p1.getEdad()<<endl;

    cout<<"\nAhora vemos que anda bien\n\n"<<endl;

    system("pause");
    return 0;
}
