#include "Fecha.h"


Fecha::Fecha(int dia, int mes, int anio)
{
    d= dia;
    m= mes;
    a= anio;
}

//en caso de que el ingreso de datos sea usando una sola variable long,
Fecha::Fecha(long fecha)
{
    a= int(fecha/10000);            //extraer el año
    m= int((fecha-a*10000)/100);    //extraer el mes
    d= int(fecha-a*10000-m*100);    //extraer el dia
}

void Fecha::mostrarFecha()
{
    cout<<"La fecha es "<<d<<"/"<<m<<"/"<<a<<endl;
}
