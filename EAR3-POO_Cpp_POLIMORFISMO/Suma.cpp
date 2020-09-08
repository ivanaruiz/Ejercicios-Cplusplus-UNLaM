/**//* 22.333.444-PEREZ_DEL_RIO,JuanManuel-(07-2299) *//**/

#include "Suma.h"

Suma::Suma()
{
}


Suma::Suma(float operA, float operB)
    :   Operador(operA, operB)
{
}


//Ac� definimos estos m�todos y as� esta clase no ser� abstracta, sino concreta
string Suma::operacion() const
{
    return "SUMA";
}

float Suma::calcular()
{
    return Operador::getOperandoA() + Operador::getOperandoB();
}


