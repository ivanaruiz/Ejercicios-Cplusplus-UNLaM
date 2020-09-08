#include "Name.h"

#include <iostream>
#include <windows.h>    //nos sirve para la posición del cursor
#include <conio.h>  //sirve para las teclas de movimiento
#include "Name.h"

#define ARRIBA      72  //todas las teclas tienen asociado un numero
#define IZQUIERDA   75
#define DERECHA     77
#define ABAJO       80

void gotoxy(int x, int y)
{
    //creamos un handle, que es identificador
    //es para identificar la ventana que queremos manipular
    HANDLE hCon;

    /**tomamos el control de la salida de la consola con el handle,
    porque la accion de dar posicion a un caracter en la pantalla
    es una accion de salida**/
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);

    //COORD es una estructura, creamos un objeto de esa estructura
    //y luego damos valores a los atributos X e Y
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;    //tener en cuenta que la coordenada Y está invertidas acá

    //lo que hace esta funcion es tomar el control de la consola,
    //y pasarle coordenadas
    SetConsoleCursorPosition(hCon, dwPos);
    //luego de esto le mandamos lo que queremos imprimir con un cout o printf
}
