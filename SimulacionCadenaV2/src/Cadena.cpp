#include "Cadena.h"

Cadena::Cadena(string c)
    :   cad(c)
{
}

Cadena::Cadena()
{
}

ostream& operator<<(ostream & salida, const Cadena &c)
{
    salida<<c.cad;
    return salida;
}


//c2(c1)
Cadena::Cadena(const Cadena& c)
{
    this->cad = c.cad;
}


//c3 + " mundo"
Cadena& Cadena::operator+(const string nuevaCadena)
{
    this->cad+= nuevaCadena;
    return * this;
}


//c7 = "¡" + c6
Cadena operator+(const string nuevaCadena, const Cadena &c)
{
    Cadena aux;
    aux.cad = nuevaCadena + c.cad;
    return aux;
}
