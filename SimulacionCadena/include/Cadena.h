#ifndef CADENA_H
#define CADENA_H
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;


class Cadena
{
    friend ostream& operator<<(ostream&, const Cadena &);
    friend Cadena operator +(const char *, const Cadena &);

    private:
        char * cad;

    public:
        Cadena();
        Cadena(const char* cad);
        Cadena(const Cadena &);
        ~Cadena();
        Cadena& operator + (const char*);
};

#endif // CADENA_H
