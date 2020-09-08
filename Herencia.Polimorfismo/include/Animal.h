#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <stdlib.h>
using namespace std;


//CLASE POLIMÓRFICA, PERO NO ABSTRACTA
//ES POLIMORFICA PORQUE USA UN MÉTODO VIRTUAL
//Y ADEMAS ENTONCES DEBE USAR EL DESTRUCTOR VIRTUAL
//PERO NO ES ABSTRACTA PORQUE SUS METODOS VIRTUALES NO SON PUROS (ES DECIR NO SON =0)
class Animal
{
    private:
        int edad;
        string nombre;

    public:
        Animal(int, string);
        virtual ~Animal();
        virtual void comer();
};

#endif // ANIMAL_H
