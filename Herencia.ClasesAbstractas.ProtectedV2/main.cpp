#include "Animal.h"
#include "Perro.h"
#include "Gato.h"

/*Desarrollar clase base Animal, que tendr� nombre como atributo privado.
Adem�s tendr� el m�todo virtual puro hablar, por lo cual no tendr� codificaci�n en Animal.
Las clases derivadas son Perro y Gato. En Perro no voy a sobreescribir el m�todo hablar,
por lo tanto, tambi�n ser� clase abstracta.
En Gato, s� voy a sobreescribir el m�todo hablar, por lo tanto ser� clase concreta. */
int main()
{
    //no puedo crear un objeto de la clase Animal porque es abstracta
    //Animal a1("mandy");


    //no se pueden crear objetos de clases abstractas
    //Perro p("Mandy");
    //notar que no podr� hacer puesto que la clase Animal es abstracta, y no sobreescribi el m�todo virtual
    //puro en la clase hija Perro, por tanto clase Perro tamb��n se hace abstracta

    //No pasa lo mismo con la clase Gato donde s� sobreescrib� el metodo virtual puro hablar,
    //entonces no es clase abstracta, es clase concreta y s� me deja instanciar objetos.
    Gato g("Billy");

    //notar que en clase Gato s� sobreescrib� el metodo virtual hablar, entonces usa el de Gato
    cout << "Gato : " << g.hablar() <<endl;

    system("pause");
    return 0;
}
