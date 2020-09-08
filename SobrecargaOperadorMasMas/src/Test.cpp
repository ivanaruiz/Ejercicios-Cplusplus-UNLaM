#include "Test.h"

Test::Test(int reset)
{
    this->cont=reset;
}

int Test::getCont() const
{
    return this->cont;
}

//preincremento
Test& Test::operator++()
{
    this->cont +=1;
    return * this;
}

//predecremento
Test& Test::operator--()
{
    this->cont -=1;
    return * this;
}

//Otras maneras de hacerlo
/*
Test operator++(Test &c)
{
    c.cont++;
    return c;
}

Test operator--(Test &c)
{
    c.cont--;
    return c;
}
*/
