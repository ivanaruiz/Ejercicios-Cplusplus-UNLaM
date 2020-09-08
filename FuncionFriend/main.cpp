//funcion amiga: funcion externa a la declaracion o definicion de una clase.
//pero al ser amiga de la clase, tiene derecho y acceso a sus miembros de datos, publicos y privados.

#include "Personaje.h"


int main()
{
    Personaje principal(100,90);

    principal.mostrarDatos();

    //a la funcion modificar (que es friend) le envio 3 parametros,
    //el objeto creado, y dos valores numericos, para modificar tanto el ataque como defensa
    modificar(principal, 50,40);

    principal.mostrarDatos();

    system("pause");
    return 0;
}
