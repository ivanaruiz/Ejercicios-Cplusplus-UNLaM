
#include "Figura.h"
#include "Cuadrado.h"
#include "Circulo.h"

/*Crear clase base Figura. Y subclases Cuadrado y Circulo. Utilizar polimorfismo y usar
el main siguiente.
Devolver nombre, area y perimetro tanto de un cuadrado como de un círculo.
Además clase Figura debe ser abstracta. */

void printFigura(const Figura &fig);
void printfFiguras(Figura * vec[], int ce);


int main()
{
    //Notar que la siguiente línea no se puede ejecutar
    //esto se debe a que la clase Figura es abstracta,
    //y por tanto no puedo instanciar objetos de ella
    //Figura fi1;

    Cuadrado c1(4);
    cout << "Figura: " << c1.nombre() << " Area: " << c1.area() << " Perimetro: " << c1.perimetro() << endl;

    Circulo f1(3);
    cout << "Figura: " <<f1.nombre() << " Area: " << f1.area() << " Perimetro: " <<f1.perimetro() << endl;
    cout<<endl;


    //llamo a una función que no pertenece a la clase, empleo polimorfismo
    printFigura(c1);
    printFigura(f1);


    //aca tambien empleo polimorfismo pero con punteros
    Figura * vec[2];
    vec[0] = &c1;
    vec[1] = &f1;

    cout<<endl;
    cout<<"Vector de figuras: " << endl;
    printfFiguras(vec, 2);


    system("pause");
    return 0;
}


//esta función recibe una referencia de figura
//aca dentro yo no sé qué voy a recibir, si circulo o cuadrado, usa polimorfismo
void printFigura(const Figura &fig)
{
    cout << "El perimetro de la figura " << fig.nombre() << " es: " << fig.perimetro() <<endl;
    cout << "El area de la figura " <<fig.nombre() << " es: " <<fig.area() <<endl;
}

//lo mismo pero con un vector
void printfFiguras(Figura * vec[], int ce)
{
    for(int i=0; i< ce; i++)
    {
        printFigura(*vec[i]);
    }
}
