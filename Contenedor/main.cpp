#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

int main()
{
    vector <int> vec;
    int ce;

    cout<<"Ingrese cantidad de elementos a ingresar: "<<endl;
    cin>>ce;

    int num;

    for(int i=0; i< ce; i++)
    {
        cout<<"Ingrese elemento: ";
        cin>>num;
        vec.push_back(num);
    }


    for(int i=0; i<ce; i++)
    {
        cout<< vec[i] <<endl;
    }

    system("pause");
    return 0;
}
