
void Test();
#include "Empleado.h"
int main()
{
    Test(); //con esto nomas pruebo el tema destructores en funciones
    system("pause");

    Empleado e1;

    //hago estas dos siguientes pruebas para ver qué pasa
    //e1.setNombre("pepe", "gutierrez");
    //e1.setNombre("diego", "");

    e1.setNombre("pedro","gutierrez");

    cout<<"Nombre y apellido:  "<<e1.getNombre()<<endl;

    Empleado e2;

    cout<<"Nombre y apellido:  "<<e2.getNombre()<<endl;

    Empleado e3("pepe");
    cout<<"Nombre y apellido:  "<<e3.getNombre()<<endl;

    system("pause");

    //los demas destructores se activan al finalizar el programa, o sea por aqui
    return 0;
}
