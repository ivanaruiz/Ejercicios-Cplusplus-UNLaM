#include "Boolean.h"

//al constructor por defecto le asigno un 0 a value
Boolean::Boolean()
{
    this->value=0;
}

//con este constructor, lo seteo a 1 (desde main se manda el 1 por parámetro)
Boolean::Boolean(int _value)
{
    value=_value;
}

Boolean::~Boolean()
{
}

int Boolean::getValue() const
{
    return this->value;
}

//solo 1 y 1 = 1
int Boolean::_and(const Boolean n)
{
    if(this->value==1 && n.value==1)
        return 1;

    return 0;   //else
}

//uno de los dos debe ser 1 para retornar un 1
int Boolean::_or(const Boolean n)
{
    if(this->value==1 || n.value==1)
        return 1;

    return 0;
}

//el negado (opuesto)
int Boolean::_not()
{
    if(this->value==1)
        return 0;

    return 1;
}
