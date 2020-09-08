#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdio.h>

#define ARRIBA      72
#define IZQUIERDA   75
#define DERECHA     77
#define ABAJO       80
using namespace std;

void gotoxy(int x, int y)
{


    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);

    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;

    SetConsoleCursorPosition(hCon, dwPos);
}


void ocultar_cursor()
{
    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_CURSOR_INFO cci;

    cci.dwSize= 2;
    cci.bVisible= FALSE;

    SetConsoleCursorInfo(hCon, &cci);
}

void pintar_limites()
{
    for(int i= 2; i<78; i++)
    {
        gotoxy(i,3);
        printf("%c",205);
        gotoxy(i, 20);
        printf("%c",205);

    }

    for(int j=4; j<20; j++)
    {
        gotoxy(2,j);
        printf("%c", 186);
        gotoxy(77,j);
        printf("%c", 186);
    }

    gotoxy(2,3); printf("%c", 201);
    gotoxy(2,20); printf("%c", 200);
    gotoxy(77,3); printf("%c", 187);
    gotoxy(77,20); printf("%c", 188);
}


int main()
{
    pintar_limites();

    ocultar_cursor();
    int x=10;
    int y=10;

    gotoxy(x,y); printf("*");

    bool game_over = false;

    while(!game_over)
    {
        if(kbhit())
        {
            char tecla = getch();
            gotoxy(x,y);
            printf(" ");

            if( (tecla==IZQUIERDA || tecla=='a') && x>3)
                x--;
            if( (tecla== DERECHA || tecla=='d')&& x<76)
                x++;
            if( (tecla== ARRIBA || tecla=='w')&& y>4)
                y--;
            if( (tecla== ABAJO || tecla=='s')&& y<19)
                y++;


            gotoxy(x,y);
            printf("*");

            if(tecla==27)
            {
                system("cls");
                printf("Saliendo del juego..\n");
                getch();
                return 1;

            }

        }
        Sleep(30);
    }

    return 0;
}
