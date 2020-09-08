#include "Boolean.h"

/*
Desarrollar una clase que simule el comportamiento de tipo de dato bool
(el cual tiene 2 valores (true y false), sin utilizar el tipo bool de C++.
La misma se debe poder utilizar con el siguiente main:
*/

int main()
{

    Boolean falseBoolean;   //este es 0, porque usa constructor vacío
    Boolean trueBoolean(1); //true, éste usará constructor parametrizado


    Boolean resultFalseAndTrue = falseBoolean._and(trueBoolean);
    Boolean resultTrueOrTrue = trueBoolean._or(trueBoolean);
    Boolean resultNotFalse = falseBoolean._not();


    cout << "resultFalseAndTrue:" << resultFalseAndTrue.getValue() << endl;
    cout << "resultTrueAndTrue :" << resultTrueOrTrue.getValue() << endl;
    cout << "resultNotFalse    :" << resultNotFalse.getValue() << endl;


    system("pause");
    return 0;
}
