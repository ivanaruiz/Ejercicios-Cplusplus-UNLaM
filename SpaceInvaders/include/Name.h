#ifndef NAME_H
#define NAME_H
#include <stdio.h>
#include <iostream>

using namespace std;

class Name
{
private:
    int x,y;
    int corazones;
    int vidas;
public:
    Name(int, int, int, int);
    ~Name();
    void pintar();
    void borrar();  //para borrar el rastro de las posiciones
    void mover();
    void pintarCorazones();
    void morir();
    void decrecerCorazones();
    int getX();
    int getY();
    int getVidas();

};

#endif // NAME_H
