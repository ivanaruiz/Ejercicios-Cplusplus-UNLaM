#ifndef NUMERO_H
#define NUMERO_H
#include <iostream>
#include <stdlib.h>
using namespace std;

class Numero
{
        friend ostream& operator<<(ostream& salida, const Numero n);

    public:
        Numero();
        Numero(int);
        Numero(const Numero&);
        void setValor(int);


    private:
        int x;
};

#endif // NUMERO_H
