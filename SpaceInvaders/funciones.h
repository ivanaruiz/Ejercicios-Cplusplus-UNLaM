#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

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


void ocultarCursor()
{
    HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);

    //creamos una estructura
    CONSOLE_CURSOR_INFO cci;
    cci.dwSize = 1;    //toma valores de 1 a 100
                        //es el estilo del cursor, es el grosor del cursor
    cci.bVisible = false;   //con esto no se mostrara el cursor en pantalla
                            //ya que parpadeaba constantemente y molestaba
    //podemos controlar las caracteristicas de nuestro cursor
    SetConsoleCursorInfo(hCon, &cci);
}


void pintarLimites()
{
    //pintamos las horizontales
    for(int i=2; i<78 ; i++)
    {
        gotoxy(i,3);
        printf("%c", 205);
        gotoxy(i,33);
        printf("%c", 205);
    }
    //pintamos las verticales
    for(int i=4; i<33; i++)
    {
        gotoxy(2,i);
        printf("%c", 186);
        gotoxy(77,i);
        printf("%c", 186);
    }

    //los bordes
    gotoxy(2,3);    printf("%c", 201);
    gotoxy(2,33);   printf("%c", 200);
    gotoxy(77,3);   printf("%c", 187);
    gotoxy(77,33);  printf("%c", 188);
}

#endif // FUNCIONES_H_INCLUDED
