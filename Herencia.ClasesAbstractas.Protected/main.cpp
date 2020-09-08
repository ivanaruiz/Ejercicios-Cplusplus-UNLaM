#include "Animal.h"
#include "Perro.h"
#include "Gato.h"

/*
Desarrollar clase Animal como clase base. Y luego clases derivadas, Gato y Perro.
En Animal usar atributo nombre, pero en este caso será protected. También el constructor.
Los miembros protected no pueden ser accedidos desde el main pero sí desde clases hijas (solamente).
Además usar un método virtual hablar, pero no será puro.
Las clases hijas tendrá el constructor como public, así en el main podremos llamarlas.
Por otro lado, Perro no sobreescribirá el método hablar. Usará el del padre.
Pero Gato sí lo sobreescribirá.
*/

int main()
{
    //Animal a1("mandy");
    //notar que no puedo crear un objeto de la clase Animal en el main porque tiene atributos protected

    //Sí puedo crear un objeto de la clase Perro porque uso miembros public,
    //aunque éstos deriven de otra clase que usa miembros protected
    Perro p("Mandy");
    Gato g("Billy");

    //notar que en clase Perro no sobreescribí el metodo virtual hablar, entonces usa el de Animal
    cout << "Perro: " << p.hablar() <<endl;

    //notar que en clase Gato sí sobreescribí el metodo virtual hablar, entonces usa el de Gato
    cout << "Gato : " << g.hablar() <<endl;


    system("pause");
    return 0;
}
