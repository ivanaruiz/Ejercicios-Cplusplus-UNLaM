#include "Animal.h"
#include "Perro.h"
#include "Gato.h"

/*Desarrollar clase base Animal, que tendrá nombre como atributo privado.
Además tendrá el método virtual puro hablar, por lo cual no tendrá codificación en Animal.
Las clases derivadas son Perro y Gato. En Perro no voy a sobreescribir el método hablar,
por lo tanto, también será clase abstracta.
En Gato, sí voy a sobreescribir el método hablar, por lo tanto será clase concreta. */
int main()
{
    //no puedo crear un objeto de la clase Animal porque es abstracta
    //Animal a1("mandy");


    //no se pueden crear objetos de clases abstractas
    //Perro p("Mandy");
    //notar que no podré hacer puesto que la clase Animal es abstracta, y no sobreescribi el método virtual
    //puro en la clase hija Perro, por tanto clase Perro tambíén se hace abstracta

    //No pasa lo mismo con la clase Gato donde sí sobreescribí el metodo virtual puro hablar,
    //entonces no es clase abstracta, es clase concreta y sí me deja instanciar objetos.
    Gato g("Billy");

    //notar que en clase Gato sí sobreescribí el metodo virtual hablar, entonces usa el de Gato
    cout << "Gato : " << g.hablar() <<endl;

    system("pause");
    return 0;
}
