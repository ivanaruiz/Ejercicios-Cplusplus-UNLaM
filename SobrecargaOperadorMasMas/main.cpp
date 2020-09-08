
#include "Test.h"

int main()
{
    Test a(5);
    cout<<"a: "<< a.getCont()<<endl;

    ++a;
    cout<<"Hago preincremento:"<<endl;
    cout<<"a: "<< a.getCont()<<endl;

    ++a;
    cout<<"Hago preincremento:"<<endl;
    cout<<"a: "<< a.getCont()<<endl;

    --a;
    cout<<"Hago predecremento:"<<endl;
    cout<<"a: "<< a.getCont()<<endl;

    system("pause");
    return 0;
}
