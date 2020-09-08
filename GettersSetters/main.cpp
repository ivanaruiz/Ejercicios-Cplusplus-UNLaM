//Metodos constructores y modificadores (Getters y Setters)
//En este caso el constructor lo dejaremos vacio

#include "Punto.h"

int main()
{
    Punto p1;

    p1.setPunto(2,4);

    //notar que no puedo hacer la siguiente linea porque los atributos son privados
    //cout<<"x: "<<p1.x " y: "<<p1.y<<endl

    //pero podre acceder a ellos desde un getter
    cout<<"x: "<<p1.getPuntoX()<< " y: "<< p1.getPuntoY() <<endl;

    system("pause");
    return 0;
}
