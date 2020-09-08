/**//* 22.333.444-PEREZ_DEL_RIO,JuanManuel-(07-2299) *//**/

#include "Suma.h"

Suma::Suma()
{
}


Suma::Suma(float operA, float operB)
    :   Operador(operA, operB)
{
}


//Acá definimos estos métodos y así esta clase no será abstracta, sino concreta
string Suma::operacion() const
{
    return "SUMA";
}

float Suma::calcular()
{
    return Operador::getOperandoA() + Operador::getOperandoB();
}


