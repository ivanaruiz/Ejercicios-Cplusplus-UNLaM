#ifndef TEST_H
#define TEST_H
#include <iostream>
#include <stdlib.h>
using namespace std;

class Test
{
    friend void accesoAmigo(Test);
    friend void accesoAmigoReferenciado(Test &, int);
    private:
        int x;
    public:
        Test();
        ~Test();
        void multiplicar();
};




#endif // TEST_H
