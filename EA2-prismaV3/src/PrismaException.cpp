#include "PrismaException.h"

PrismaException::PrismaException(const string mens)
{
    this->mensaje = mens;
    getMensaje();

}


const string PrismaException::getMensaje() const
{
    return this->mensaje;
}
