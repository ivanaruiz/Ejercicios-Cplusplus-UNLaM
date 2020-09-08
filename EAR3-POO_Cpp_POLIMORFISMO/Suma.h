/**//* 22.333.444-PEREZ_DEL_RIO,JuanManuel-(07-2299) *//**/

#ifndef SUMA_H_INCLUDED
#define SUMA_H_INCLUDED

#include <string>
#include "Operador.h"

class Suma : public Operador
{
public:
    //Constructores
    Suma();
    Suma(float, float);

    //En esta clase s� implementaremos estos m�todos
    string operacion() const;
    float calcular();
};


#endif // SUMA_H_INCLUDED

