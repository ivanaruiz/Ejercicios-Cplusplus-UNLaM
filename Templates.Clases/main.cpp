#include "MiVector.h"

//NO FUNCIONA. NO SÉ POR QUÉ.
int main()
{
    int arr[5] = {1,2,3,4,5};

    //como la clase es generica, le especifico el tipo de dato
    MiVector<int>mv(arr,5);
    mv.mostrar();

    char arr2[3] = {'A', 'B', 'C'};
    MiVector <char> mv2(arr2, 3);
    mv2.mostrar();

    system("pause");
    return 0;
}
