#ifndef MIVECTOR_H
#define MIVECTOR_H
#include <iostream>
#include <stdlib.h>
using namespace std;

//clase de vectores genericos
template <typename T>
class MiVector
{
    private:
        T *p;
        int tam;

    public:
        MiVector(T v[], int tam);
        virtual ~MiVector();

        void mostrar();
};

#endif // MIVECTOR_H
