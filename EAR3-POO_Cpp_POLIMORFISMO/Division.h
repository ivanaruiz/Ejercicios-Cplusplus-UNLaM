/**//* 22.333.444-PEREZ_DEL_RIO,JuanManuel-(07-2299) *//**/

#ifndef DIVISION_H_INCLUDED
#define DIVISION_H_INCLUDED

#include "Operador.h"
#include "DivisionPorCeroException.h"


class Division : public Operador
{
public:
    Division();
    Division(float, float);

    string operacion() const;
    float calcular();
};

#endif // DIVISION_H_INCLUDED

