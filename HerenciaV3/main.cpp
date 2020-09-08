#include "Persona.h"
#include "Alumno.h"

/*Crear clase base Persona con atributos privados nombre y edad, y m�todo dormir. En  el m�todo,
enviar como par�metros la cantidad de horas que duerme cada persona.
Crear subclase que herede llamada Alumno con nuevo atributo legajo.
Hereda el m�todo dormir pero no lo sobreescribe. Esto quiere decir que no debo volver a escribir
el m�todo dormir en la clase hija. Solo debe encontrarse en clase padre.
Por otro lado crear objetos de manera est�tica y din�mica.*/

int main()
{
    //creo dos objetos de manera est�tica
    Persona p("pepe" , 35);
    p.dormir(8);

    Alumno a("alicia", 28, 1000);
    a.dormir(9);    //uso el metodo de la clase base

    //creo dos objetos de manera din�mica
    Alumno * pa;
    pa = new Alumno("beto", 30, 1500);   //instancio la clase    //con new pido memoria, new me devuelve un puntero
    pa->dormir(10);
    delete pa;

    pa= new Alumno("carla", 20, 1200);
    pa->dormir(7);
    delete pa;

    //tener en cuenta que instanci� 4 objetos
    //con pepe y alicia uso memoria estatica, con alicia y beto uso memoria dinamica
    //recordar que con los objetos creados de manera din�mica, hago delete para liberar memoria

    cout<< "\nFin de main\n"<<endl;
    system("pause");
    return 0;
}
