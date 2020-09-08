
#include "Alumno.h"

int main()
{
    Alumno a1(0);
    Alumno a2(0);
    Alumno a3(0);

    a1.setNota(4);
    a2.setNota(10);
    a3.setNota(6);

    cout<<"Nota alumno1 : "<<a1.getNota()<<endl;

    cout<<"Nota alumno2 : "<<a2.getNota()<<endl;

    cout<<"Nota alumno3 : "<<a3.getNota()<<endl;

    //Si quiero agregar un nuevo alumno a4 donde se le asigne la suma de la nota del a1 y a2 hago esto
    Alumno a4 = a1+a2;
    cout<<"Nota alumno4 : "<<a4.getNota()<<endl;

    //Sin embargo no me deja sumar, por ejemplo, las notas de los tres alumenos
    //Alumno a4 = a1+a2;
    //Y cambiando la funcion con tres parametros, no me lo deja hacer

    system("pause");
    return 0;
}
