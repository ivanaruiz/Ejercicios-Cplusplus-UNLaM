#ifndef TEST_H
#define TEST_H
#include <iostream>
#include <stdlib.h>
using namespace std;

class Test
{
//    friend Test operator++(Test &);
//    friend Test operator--(Test &);

    public:
        Test(int);
        int getCont() const;

        //preincremento
        Test& operator++();
        //predecremento
        Test& operator--();


    private:
        int cont;

};

#endif // TEST_H
