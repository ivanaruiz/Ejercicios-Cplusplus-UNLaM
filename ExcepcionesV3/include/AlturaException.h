#ifndef ALTURAEXCEPTION_H
#define ALTURAEXCEPTION_H
#include <iostream>
#include <exception>
using namespace std;

class AlturaException: public exception
{
    public:
        AlturaException() : exception()  {}
        const char * what() throw()
        {
            return "La altura no puede ser igual o menor a 0";
        }

};

#endif // ALTURAEXCEPTION_H
