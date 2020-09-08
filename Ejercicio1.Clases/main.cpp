#include "Persona.h"

int main()
{
    //Creo un objeto p1 de la clase Persona
    Persona p1 = Persona(30, "Pedro");   //llamo al constructor y le paso los dos parametros

    ///otra manera de crear objetos
    Persona p2(25, "Maria");
    Persona p3(26, "Juan");

    p1.leer();
    p2.correr();
    p3.leer();
    p3.correr();

    system("pause");
    return 0;
}
