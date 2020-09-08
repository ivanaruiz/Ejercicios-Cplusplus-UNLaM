#ifndef PRISMAEXCEPTION_H
#define PRISMAEXCEPTION_H
#include <iostream>
using namespace std;

class PrismaException
{
    private:
        string mensaje;

    public:
        PrismaException(const string);
        const string getMensaje() const;
};

#endif // PRISMAEXCEPTION_H
