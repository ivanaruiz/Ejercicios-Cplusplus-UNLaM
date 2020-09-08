#ifndef BASEEXCEPTION_H
#define BASEEXCEPTION_H
#include <iostream>
#include <exception>
using namespace std;


class BaseException: public exception
{
    public:
        BaseException() : exception() {}
        const char * what() throw()
        {
            return "La base no puede ser menor o igual a 0";
        }
};

#endif // BASEEXCEPTION_H
