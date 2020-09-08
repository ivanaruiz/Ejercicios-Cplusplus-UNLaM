/**//* 22.333.444-PEREZ_DEL_RIO,JuanManuel-(07-2299) *//**/

#ifndef RESTA_H_INCLUDED
#define RESTA_H_INCLUDED

#include "Operador.h"

class Resta : public Operador
{
public:
    Resta();
    Resta(float, float);

    string operacion() const;
    float calcular();
};


#endif // RESTA_H_INCLUDED

