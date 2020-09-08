#include <iostream>
#include <stdlib.h>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

void mostrarVector(const vector <int> &);

//containers: estructuras de datos de tipo de dato abstracto
//vector es un container

int main()
{
    //vector es el tipo de contenedor
    //int es el tipo de elemento
    vector <int> v;
    //notar que no tiene tamaño definido, no me tengo que preocupar por eso

    v.push_back(1); //push_back = agregar al final
    v.push_back(2);

    mostrarVector(v);


    //ahora pila
    stack <int> s;  //contenedor pila
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout <<"Contenedor de pila: "<< endl;

    while(!s.empty())
    {
        int aux = s.top();
        cout << aux <<endl;

        s.pop();       //desempilar //no me deja asignarlo a una variable, por eso uso el top mas arriba
    }

    //otro contenedor: cola
    queue <int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << "Contenedor de cola: " <<endl;

    while(!q.empty())
    {
        cout << q.front() <<endl;
        q.pop();
    }

    system("pause");
    return 0;
}


void mostrarVector(const vector <int> & v)
{
    cout << "Contenido de vector: " <<endl;

    for(unsigned i=0; i < v.size() ; ++i)
    {
        cout << v[i] << " ";
    }

    cout << endl;
}
