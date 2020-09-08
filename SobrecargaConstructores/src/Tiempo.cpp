#include "Tiempo.h"

Tiempo::Tiempo(int h, int m, int s)
{
    horas=h;
    minutos=m;
    segundos=s;
}


Tiempo::Tiempo(int tiempoSeg)
{
    horas= tiempoSeg/3600;  //Extraigo horas
    tiempoSeg%= 3600;
    minutos= tiempoSeg/60;  //Extraigo  minutos
    segundos= tiempoSeg%60; //Extraigo segudos
}


void Tiempo::mostrarTiempo()
{
    cout<<this->horas<<":"<<this->minutos<<":"<<this->segundos<<endl;
}
