//Destructor: borra todos los objetos creados que ya no estoy utilizando.
//No lleva parametros. Se escribe como un constructor, tiene el mismo nombre.

#include "Perro.h"

int main()
{
    //creo objeto con memoria din�mica
    Perro * p1 = new Perro("firulais", "mestizo");

    p1->mostrarDatos();
    p1->jugar();

    //como uso memoria din�mica, debo destruir los objetos cuando ya no los use
    delete p1;    //Destruyo el objeto
    //Libera memoria

    system("pause");
    return 0;
}
