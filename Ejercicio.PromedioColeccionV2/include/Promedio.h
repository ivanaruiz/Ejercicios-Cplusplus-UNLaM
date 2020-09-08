#ifndef PROMEDIO_H
#define PROMEDIO_H
#include <stdlib.h>
#include <iostream>
using namespace std;

class Promedio
{
private:
    int ce;     //cantidad de elementos
    double suma;
public:
    Promedio();
    void agrgarElemento(int n);
    double getPromedio() const;
};
#endif // PROMEDIO_H
