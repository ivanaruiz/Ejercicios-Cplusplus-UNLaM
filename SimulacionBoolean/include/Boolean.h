#ifndef BOOLEAN_H
#define BOOLEAN_H
#include <iostream>
#include <stdlib.h>
using namespace std;

class Boolean
{
    private:
        int value;

    public:
        //constructores y destructor
        Boolean();
        Boolean(int);
        ~Boolean();

        //métodos
        int getValue() const;
        int _and(const Boolean);
        int _or(const Boolean);
        int _not();
};

#endif // BOOLEAN_H
