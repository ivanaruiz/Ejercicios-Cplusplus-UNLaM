/**//* 22.333.444-PEREZ_DEL_RIO,JuanManuel-(07-2299) *//**/

#ifndef DIVISIONPORCEROEXCEPTION_H_INCLUDED
#define DIVISIONPORCEROEXCEPTION_H_INCLUDED
#include <exception>

using namespace std;

class DivisionPorCeroException : public exception
{
    public:
        DivisionPorCeroException() : exception() {}
        const char * what() throw()
        {
            return "Division por cero";
        }
};
/// complete la declaración de la class


#endif // DIVISIONPORCEROEXCEPTION_H_INCLUDED

