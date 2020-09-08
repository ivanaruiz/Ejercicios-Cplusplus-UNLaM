#include "Mascota.h"
#include "Perro.h"
#include "Gato.h"

/*Crear clase padre Mascota con atributos de nombre y edad. Métodos comer y dormir.
Crear clases hijas Gato y Perro. Ambas usarán los métodos de la clase padre.
Pero también tendrán sus propios atributos (jugarConLaser (bool) y paseosDiarios respectivamente)
y los métodos suyos propios (cazarRaton y darLaPata respectivamente).*/


int main()
{
    Perro p1("firulais", 5 ,10);

    p1.dormir();
    p1.comer();
    p1.darLaPata();


    Gato g1("manchas", 2, true);
    g1.dormir();
    g1.comer();
    g1.cazarRaton();


    system("pause");
    return 0;
}
