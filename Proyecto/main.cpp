#include "Persona.h"
#include "Empleado.h"

void inserto_linea()
{
    cout <<"\n=================================\n"<<endl;
}


int main()
{
    //creo a p1 con memoria dinamica y lo muestro
    Persona * p1= new Persona("pepe", "salta 2035");

    //acá deberé sobrecargar el operador <<
    cout << p1->getNya() << " " <<p1->getDomicilio()<<endl;

    //borro la memoria que uso y destruyo objeto creado con memoria dinámica
    delete p1;

        inserto_linea();

    //creo a p2 con memoria estatica y lo muestro
    //acá uso otro constructor (hago sobrecarga de constructores)
    Persona p2("pedro", "peru 2456", "san justo", "23/2/1980", 20123345, 'M');

    cout<< p2.getNya() << " " << " " <<p2.getDomicilio() << " " << p2.getLocalidad() << " " <<
            p2.getFec_nac() << " " << p2.getDni() << " " << p2.getSexo() << endl;

        inserto_linea();

    //creo a p3 pero lo muestro con operador de flujo de salida
    Persona p3("diego", "barragan 4025");
    cout<< p3<< endl;   //notar que aca no uso metodos de la clase

        inserto_linea();

    //uso otro tipo de constructor (constructor vacío)
    Persona p4;
    cout <<"Ingrese datos de la persona 4 (nombre y dni) : " <<endl;

    //también haré sobrecarga del operador >>
    cin>> p4;
    cout<<p4 <<endl;

        inserto_linea();

    Persona p5;
    //NO HACE FALTA HACER SOBRECARGA DE OPERADOR DE ASIGNIACION =
    p5=p2;
    cout<<p5.getNya()<< p5.getDomicilio() <<p5.getLocalidad() <<p5.getFec_nac()<<endl;

        inserto_linea();

    Empleado e1;
    e1.setSueldo(5000.00);
    cout<<"Sueldo de alicia: : "<< e1.getSueldo()<<endl;

    e1.setSueldo(e1.getSueldo()+2000);
    cout<<"Nnuevo sueldo de alicia: "<<e1.getSueldo() <<endl;

    system("pause");
    return 0;
}
