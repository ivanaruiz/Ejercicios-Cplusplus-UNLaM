#include "Animal.h"
#include "Perro.h"
#include "Gato.h"

/*
Desarrollar clase Animal como clase base. Y luego clases derivadas, Gato y Perro.
En Animal usar atributo nombre, pero en este caso ser� protected. Tambi�n el constructor.
Los miembros protected no pueden ser accedidos desde el main pero s� desde clases hijas (solamente).
Adem�s usar un m�todo virtual hablar, pero no ser� puro.
Las clases hijas tendr� el constructor como public, as� en el main podremos llamarlas.
Por otro lado, Perro no sobreescribir� el m�todo hablar. Usar� el del padre.
Pero Gato s� lo sobreescribir�.
*/

int main()
{
    //Animal a1("mandy");
    //notar que no puedo crear un objeto de la clase Animal en el main porque tiene atributos protected

    //S� puedo crear un objeto de la clase Perro porque uso miembros public,
    //aunque �stos deriven de otra clase que usa miembros protected
    Perro p("Mandy");
    Gato g("Billy");

    //notar que en clase Perro no sobreescrib� el metodo virtual hablar, entonces usa el de Animal
    cout << "Perro: " << p.hablar() <<endl;

    //notar que en clase Gato s� sobreescrib� el metodo virtual hablar, entonces usa el de Gato
    cout << "Gato : " << g.hablar() <<endl;


    system("pause");
    return 0;
}
