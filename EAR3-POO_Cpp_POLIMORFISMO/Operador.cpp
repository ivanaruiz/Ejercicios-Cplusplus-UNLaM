/**//* 22.333.444-PEREZ_DEL_RIO,JuanManuel-(07-2299) *//**/

#include "Operador.h"

Operador::Operador()
{
    this->_operA = 0;   //pongo valores por default
    this->_operB = 0;
}

Operador::Operador(float operA, float operB)
    :   _operA(operA), _operB(operB)
{
}

Operador::~Operador()
{

}


float Operador::getOperandoA() const
{
    return this->_operA;
}

float Operador::getOperandoB() const
{
    return this->_operB;
}

void Operador::setOperandoB(float num)
{
    this->_operB = num;
}
