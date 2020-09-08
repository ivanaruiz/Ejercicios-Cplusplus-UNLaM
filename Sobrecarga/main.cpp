//Sobrecarga de constructores:
//Cada constructor tendrá distinto cantidad de parametros,
//o parametros de distinto tipo
//Esto es para que los datos que se ingresan, se ingresen de cualquier manera, por ejemplos las fechas.
//Alguien la puede ingresar asi : 01/01/2020 (con tres enteros).
//Pero otro la puede ingresar asi : 20200101 (en un entero largo)

#include "Fecha.h"


int main()
{
    Fecha hoy(9,1,2020);
    Fecha ayer(20200320);

    hoy.mostrarFecha();

    ayer.mostrarFecha();

    system("pause");
    return 0;
}
