/**//* 22.333.444-PEREZ_DEL_RIO,JuanManuel-(07-2299) *//**/

#include "Division.h"

Division::Division()
{
    /**para que no me tome el 0 por defecto del constructor de Operador,
    le mando un 1 (al divisor)**/
    Operador::setOperandoB(1);
}


Division::Division(float operA, float operB)
    :   Operador(operA, operB)
{
    if(Operador::getOperandoB() ==0)
        throw DivisionPorCeroException();   //lanza la excepción, la cual es atrapada
                                            //por el bloque catch
}


string Division::operacion() const
{
    return "DIVISION";
}

float Division::calcular()
{
    return Division::getOperandoA() / Division::getOperandoB();
}
