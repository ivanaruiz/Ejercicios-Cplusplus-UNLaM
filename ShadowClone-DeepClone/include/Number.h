#ifndef NUMBER_H
#define NUMBER_H
#include <iostream>
#include <stdlib.h>
using namespace std;

class Number
{
    friend ostream& operator<<(ostream& salida, const Number m);

    public:
        Number(int);
        void setNumber(int);

    private:
        int * a;
};

#endif // NUMBER_H
