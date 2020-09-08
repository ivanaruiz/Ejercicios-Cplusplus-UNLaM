#include "Persona.h"
#include "Alumno.h"

/*Crear clase base Persona con atributos privados nombre y edad, y método dormir. En  el método,
enviar como parámetros la cantidad de horas que duerme cada persona.
Crear subclase que herede llamada Alumno con nuevo atributo legajo.
Hereda el método dormir pero no lo sobreescribe. Esto quiere decir que no debo volver a escribir
el método dormir en la clase hija. Solo debe encontrarse en clase padre.
Por otro lado crear objetos de manera estática y dinámica.*/

int main()
{
    //creo dos objetos de manera estática
    Persona p("pepe" , 35);
    p.dormir(8);

    Alumno a("alicia", 28, 1000);
    a.dormir(9);    //uso el metodo de la clase base

    //creo dos objetos de manera dinámica
    Alumno * pa;
    pa = new Alumno("beto", 30, 1500);   //instancio la clase    //con new pido memoria, new me devuelve un puntero
    pa->dormir(10);
    delete pa;

    pa= new Alumno("carla", 20, 1200);
    pa->dormir(7);
    delete pa;

    //tener en cuenta que instancié 4 objetos
    //con pepe y alicia uso memoria estatica, con alicia y beto uso memoria dinamica
    //recordar que con los objetos creados de manera dinámica, hago delete para liberar memoria

    cout<< "\nFin de main\n"<<endl;
    system("pause");
    return 0;
}
