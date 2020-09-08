#include "Fecha.h"

int main()
{
    Fecha f0;       //usa constructor por defecto


    Fecha f1(5,4,1998); //uso constructor con parametros

    f1.mostrarFecha();


    Fecha f2 = f1;  //llamamos al constructor de copia //ojo no es asignacion
                    //usa el constructor de copia porque al crear objeto, directamente le asigna f1

    f2.mostrarFecha();


    Fecha f3(f1);   //esto es lo mismo que lo anterior, tambien llama al constructor de copia

    f3.mostrarFecha();


    Fecha f4;       //vemos que en este que usa constructor por defecto

    f4=f1;          //luego se le asigna f1, sin embargo f4 no usó constructor de copia
                    //esto es así porque ya f4 fue creado con constructor por defecto
                    //es decir no puede haber mas de un constructor por objeto
                    //luego simplemente se le asignó lo que tiene f1

    f4.mostrarFecha();


    system("pause");
    return 0;
}
