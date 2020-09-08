#ifndef PROMEDIO_H
#define PROMEDIO_H

#include <iostream>
#include <stdlib.h>

using namespace std;

class Promedio
{
    private:
        int cant;
        float acum;
    public:
        Promedio();
        void agrgarElemento(float);
        float getPromedio() const;
};

#endif // PROMEDIO_H
