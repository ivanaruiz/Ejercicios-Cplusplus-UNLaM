#include "Number.h"

Number::Number(int _a)
{
    a = new int;
    *a = _a;
}


void Number::setNumber(int num)
{
    *a = num;
}


ostream& operator<<(ostream& salida, const Number m)
{
    salida<< *m.a;
    return salida;
}
