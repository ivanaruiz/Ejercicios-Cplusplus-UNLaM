#include "Numero.h"

Numero::Numero()
{
    x=0;
}

Numero::Numero(int _x)
{
    this->x = _x;
}


void Numero::setValor(int nuevo)
{
    x= nuevo;
}

//uso constructor de copia
Numero::Numero(const Numero &valor)
{
    this->x = valor.x;
}

ostream& operator<<(ostream& salida, const Numero n)
{
    salida<< n.x;
    return salida;
}
