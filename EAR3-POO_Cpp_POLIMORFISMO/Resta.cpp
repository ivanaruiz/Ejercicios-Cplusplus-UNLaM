/**//* 22.333.444-PEREZ_DEL_RIO,JuanManuel-(07-2299) *//**/

#include "Resta.h"

Resta::Resta()
{
}


Resta::Resta(float operA, float operB)
    :   Operador(operA, operB)
{
}


string Resta::operacion() const
{
    return "RESTA";
}

float Resta::calcular()
{
    return Operador::getOperandoA() - Operador::getOperandoB();
}

