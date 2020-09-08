/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//* 33.329.371-RUIZ,IvanaAnahiVictoria-(06-2965) *//**/
/**//**   DEBE MODIFICAR LA LÍNEA DE COMENTARIO ANTERIOR CON SUS DATOS   **//**/
/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//**//**         COMPLETE LA DECLARACIÓN DE LA CLASE          **//**//**//**/

#ifndef PRISMA_H_
#define PRISMA_H_

#include <iostream>
#include <string>

using namespace std;

class Prisma
{
    friend ostream& operator <<(ostream &, const Prisma &);

    //este siguiente método es friend ya que para el caso de 5 * pri1;
    //el obj llamador(5) no es miembro de la clase
    friend Prisma operator*(int, const Prisma &);

    private:
        string color;     /// <--preferentemente, de lo contrario:  char *color;
        int alto;
        int ancho;
        int profundidad;

    public:
        //constructores
        Prisma();
        Prisma(string, int, int);
        Prisma(string, int, int, int);

        //sobrecarga de operadores
        Prisma operator++(int);
        Prisma& operator--();

        Prisma& validarValores();

        //ACLARACIÓN: NO HACE FALTA DESARROLLAR EL CONSTRUCTOR DE COPIA
        //NI TAMPOCO LA SOBRECARGA DEL OPERADOR =
        //POR LO MENOS ASÍ ME LO CORRIGIERON
};
#endif // PRISMA_H_

