#include "MiVector.h"
template <typename T>
MiVector<T>::MiVector(T v[], int tam)
{
    p = new T[tam];
    this->tam= tam;
    for(int i=0; i<tam; ++i)
    {
        p[i] = v[i];
    }
}

template <typename T>
MiVector<T>::~MiVector()
{
    delete p;
}


template <typename T>
void MiVector<T>::mostrar()
{
    cout << "Contenido: ";
    for(int i=0; i< tam; ++i)
    {
        cout << " " << p[i];
    }
    cout << endl;
}
