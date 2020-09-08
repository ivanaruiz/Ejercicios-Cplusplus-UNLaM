#include "Empleado.h"

Empleado::Empleado()
{
    this->nombre= "juan";
    apellidoDefault();
}

Empleado::~Empleado()
{
    cout<<"Se ha ejecutado el destructor"<<endl;
}

//Sobrecarga de constructor
Empleado::Empleado(string nomb)
{
    if(nomb.find("pepe")==string::npos)
    {
        this->nombre=nomb;
    }
    else
    {
        this->nombre= "Juancito";
        cout <<"El nombre no puede ser PEPE. Se asigno juancito"<<endl;
    }
}


void Empleado::apellidoDefault()
{
    this->apellido="Perez";
}

void Empleado:: setNombre(string nom, string ape)
{
    //valida que el nombre no sea pepe
    if(nom.find("pepe")==string::npos)  //o if((int)nom.find("pepe")<0=
    {
        this->nombre= nom;

            //verifica si el apellido que ingresó usuario esta vacio
            if(ape.empty())
            {
                apellidoDefault();
                cout<<"El apellido no puede estar vacio. Se asigno apellido por default"<<endl;
            }
            else
                this->apellido= ape;
    }
    else
        cout<<"El nombre no puede ser pepe. No se asigno nombre ni apellido"<<endl;
}


string Empleado::getNombre()
{
    return nombre + ", "+ apellido;
}

//esta es una funcion test para probar que puedo crear un objeto de la clase fuera del main
//y que al finalizar esta clase, se activa el destructor y destruye este objeto
void Test()
{
    Empleado e;
    e.setNombre("maria", "duarte");
    cout<<"Nombre: "<<e.getNombre()<<endl;
}

