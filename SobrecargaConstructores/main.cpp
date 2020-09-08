/*
Construir una clase Tiempo que contenga los siguientes atributos enteros:
horas, minutos y segundos. Haga que la clase contenga dos constructores,
el primero debe tener 3 parametros Tiempo(int, int, int) y segundo solo
tendra un campo que seran los segundos transcurridos de todo el dia y
y desensamble el numero entero largo en horas, minutos y segundos.
*/

#include "Tiempo.h"

int main()
{
    Tiempo horaActual(16,23,30);
    Tiempo haceUnaHora(55410);

    horaActual.mostrarTiempo();

    haceUnaHora.mostrarTiempo();

    system("pause");
    return 0;
}
