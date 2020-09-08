#include <iostream>
#include <windows.h>    //nos sirve para la posición del cursor
#include <conio.h>  //sirve para las teclas de movimiento
#include "list"
#include "Name.h"
#include "Asteroide.h"
#include "Bala.h"
#include "funciones.h"

#define ARRIBA      72  //todas las teclas tienen asociado un numero
#define IZQUIERDA   75
#define DERECHA     77
#define ABAJO       80

using namespace std;

//cambié el tamaño de la ventana de consola
//click derecho en la barra de la consola, "propiedades" -> "layout" o "diseño"
//"tamaño de la ventana" ancho 80 - alto 35 (antes estaba en 85 y 32)



void Name::pintar()
{
    //para imprimir estos caracteres voy  con click derecho a la barra de titulo de la consola,
    //presionar en "propiedades", "fuente", y elegir "fuentes de mapa bits" y aceptar.
    //(por las dudas aclaro que antes estaba tildada la opcion "consolas")
    gotoxy(x,y);
    printf("  %c", 30);

    gotoxy(x, y+1);
    printf(" %cX%c", 40, 41);

    gotoxy(x, y+2);
    printf("%c%c %c%c", 30, 219, 219, 30);
}

void Name::borrar()
{
    gotoxy(x,y);
    cout << "        ";

    gotoxy(x,y+1);
    cout << "        ";

    gotoxy(x,y+2);
    cout << "        ";
}

void Name::mover()
{
     //kbhit es una funcion que detecta si se ha presionado una tecla
    if(kbhit()) //si se presionó una tecla..
    {
        char tecla = getch();   //con getch le pasamos el valor de lo que se presiona a variable tecla

        //para borrar el rastro de la nave al moverme
        //o sea me posiciono en las coordenadas anteriores
        borrar();

        //ahora sí evalúo la tecla a presionar
        if(tecla == IZQUIERDA   && x>3)         x--;    //con la segunda condicion hago que no se vaya
        if(tecla == DERECHA     && (x+6)<78)    x++;    //la nave de los limites
        if(tecla == ARRIBA      && y>4)         y--;
        if(tecla == ABAJO       && (y+3)<33)    y++;
        if(tecla == 'e')        corazones--;

        //pinto la nave en su nueva posicion cuando se ha tocado una tecla
        pintar();

        pintarCorazones();
    }
}



void Name::pintarCorazones()
{
    //vidas
    gotoxy(50,2);
    printf("VIDAS %d", this->vidas);

    gotoxy(64,2);
    cout << "SALUD";
    //corazones
    gotoxy(70,2);
    cout << "      ";
    for(int i=0; i<corazones; i++)
    {
        gotoxy(70+i,2);
        printf("%c", 3);
    }
}

void Name::morir()
{
    if(corazones==0)
    {
        Beep(200, 200);
        borrar();   //primero borramos la nave
        //esto sería una animación de la explosión
        gotoxy(x,y);    printf("  **  ");
        gotoxy(x,y+1);  printf(" **** ");
        gotoxy(x,y+2);  printf("  **  ");
        Sleep(200); //la vemos un ratito a la explosión

        borrar();   //y borramos la explosión
        gotoxy(x,y);    printf(" * ** * "); //sigue otra explosión
        gotoxy(x,y+1);  printf("  ****  ");
        gotoxy(x,y+2);  printf(" * ** * ");
        Sleep(200);

        borrar();   //borramos la última explosión
        vidas--;
        corazones = 3;
        pintarCorazones();
        pintar();
    }
}


void Asteroide::pintar()
{
    gotoxy(x,y);
    printf("%c",31);
}

void Asteroide::mover()
{
    gotoxy(x,y);    cout<<" ";  //borramos
    y++;    //para que vaya "cayendo"

    if(y>32)    //este es el limite
    {
        x = rand()%71+4;
        y = 4;
    }
    pintar();
}

//le paso por referencia el objeto de la clase Nave, puesto que
//sus valores también se deben modificar, no solo los del asteroide
void Asteroide::choque(Name &N)
{
    //analizamos si hay choque, la x sola es la del asteroide
    if(x>= N.getX() && x<N.getX()+6             //6 es por el ancho de la nave
       && y >= N.getY() && y<=N.getY()+2)    //2 es por el alto de la nave
    {
                    Beep(300, 200);
        N.decrecerCorazones();
        N.borrar();
        N.pintar(); //hacemos esto porque la nave se despinta cuando le pasa por encima un ast
        N.pintarCorazones();
        x= rand()%71 + 4;
        y= 4;
    }
}

void Bala::mover()
{
    gotoxy(x,y);    cout<<" ";
 //   if(y>4)
        y--;

    gotoxy(x,y);
    printf("*");
}


bool Bala::fuera()
{
    if(y==4)    //porque está en el tope
        return true;    //o sea es verdad que llegó al límite
    return false;
}

//*****************************************************////////////

int main()
{
    //con esta linea dejo la resolucion de mi pantalla igual para cualquier maquina
    system("mode con: cols=80 lines=35");

    SetConsoleTitle("+SPACE INVADERS+");

    ocultarCursor();

    pintarLimites();

    Name n(37,30,3,3);
    n.pintar();
    n.pintarCorazones();

    list<Asteroide*>A;
    list<Asteroide*>::iterator itA;

    list<Bala*> B;  //tenemos una lista de punteros
    list<Bala*>::iterator it;   //con esto recorremos la lista

    //vamos a crear 5 asteroides al principio
    for(int i=0; i<3; i++ )
    {
        A.push_back(new Asteroide(rand()%75+3, rand()%5+4));
    }

    bool game_over = false;
    int puntos = 0;

    while(!game_over)   //el juego necesita ejecutarse todo el tiempo(hasta que uno pierda)
    {
        gotoxy(4,2);
        printf("PUNTOS: %d", puntos);
        if(kbhit())
        {
            char tecla = getch();
            if(tecla == 'a' || tecla == 'A' || tecla==9)
            B.push_back(new Bala(n.getX()+2, n.getY()-1));
        }

        for(it=B.begin(); it!=B.end(); it++)
        {
            //con el asterisco desreferencio al puntero
            //y ya puedo acceder al contenido
            (*it)->mover();
            //verificamos si cada bala creada llegó al límite
            if((*it)->fuera())
            {
                gotoxy((*it)->getX(), (*it)->getY());    //nos situamos en la coord de la bala
                cout << " ";
                delete(*it);    //elimino al elemento de la lista(la bala)
                //tomo el siguiente valor de la lista
                it = B.erase(it);
                //con eso es como que vuelvo a hacer los enlaces
            }
        }

        for(itA = A.begin(); itA!= A.end(); itA++)
        {
            (*itA)->mover();
            (*itA)->choque(n);    //evaluamos si hay choque
        }

        //esta parte es para detectar el choque entre bala y asteroide
        for(itA = A.begin() ; itA!= A.end(); itA++)
        {
            for(it= B.begin(); it!=B.end(); it++)
            {
                //las posiciones donde se chocan
                if((*itA)->getX() == (*it)->getX() &&
                   ( (*itA)->getY()+1 == (*it)->getY() ||
                     (*itA)->getY()   == (*it)->getY()) )
                {
                    //borro la bala
                    gotoxy((*it)->getX() , (*it)->getY());
                    printf(" ");
                    delete(*it);
                    //como se pierde el hilo al hacer eso, hacemos
                    //y asi pasamos al siguiente elemento de la lista
                    it = B.erase(it);

                    //borro el asteroide
                    //pero ademas tendremos que crear otro
                    A.push_back(new Asteroide(rand()%74+3 , 4));
                    //aca borro al asteroide chocado entonces
                    gotoxy((*itA)->getX() , (*itA)->getY());
                    printf(" ");
                    delete(*itA);
                    itA = A.erase(itA);

                    puntos+=5;
                }

            }
        }
        if(n.getVidas()==0)
            game_over= true;

        n.morir();
        n.mover();

        //para que no se sature el procesador
        //puesto que se ejecutara demasiadas veces,
        //haremos lo siguiente
        Sleep(30);  //detiene la ejecucion del programa por 30 milisegunds
        //con esto son menos iteraciones por segundo
    }

    Beep(100,200);
    Beep(300,300);
    Beep(100,200);
    Beep(400,200);
    Beep(200,400);

//    Beep(400,400);
//    Beep(300,400);
//    Beep(100,400);
//    Beep(400,400);
//    Beep(200,400);

    system("cls");
    gotoxy(5,5);
    printf("GAME OVER.\t PUNTOS TOTALES: %d\n\n", puntos);
    system("pause");
    return 0;
}
