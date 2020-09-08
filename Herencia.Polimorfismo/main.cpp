/**Crear un programa que tenga la siguiente jerarquia de clases: Animal(clase padre) ->
Humano(clase hijo) -> Perro(clase hijo),
y hacer polimorfismo con el metodo comer **/

#include "Animal.h"
#include "Perro.h"
#include "Humano.h"

int main()
{
    //notar que puedo instanciar un objeto de la clase Animal puesto que no es abstracta
    Animal a1(5, "toto");


    Animal * animales[2];

    animales[0] = new Perro(5, "angie", "pastor aleman");
    animales[1] = new Humano(12, "pipo");
    animales[2] = new Animal(10, "toto");

    for(int i=0; i<3; i++)
        animales[i]->comer();

    for(int i=0; i<3; i++)
        delete animales[i]; //tengo que usar destructor virtual para clases polimórficas


    cout<<endl;
    system("pause");
    return 0;
}
