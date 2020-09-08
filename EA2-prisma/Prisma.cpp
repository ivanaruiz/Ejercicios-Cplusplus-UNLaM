/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//* 33.329.371-RUIZ,IvanaAnahiVictoria-(06-2965) *//**/
/**//**   DEBE MODIFICAR LA LÍNEA DE COMENTARIO ANTERIOR CON SUS DATOS   **//**/
/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//**//**   DESARROOLLE LAS "FUNCIONES MIEMBRO" DE LA CLASE    **//**//**//**/

#include "Prisma.h"

//constructor por defecto
Prisma::Prisma()
{
    this->alto  = 1;
    this->ancho = 1;
    this->profundidad = 1;
    this->color = "Incoloro";
}

//sobrecarga de constructor. constructor parametrizado
Prisma::Prisma(string _color, int _alto, int _ancho)
    :   color(_color), alto(_alto), ancho(_ancho), profundidad(1)
{
    if(color=="" || alto<=0 || ancho<=0)
        this->validarValores();
}

//sobrecarga de constructor. otro constructor parametrizado
Prisma::Prisma(string _color, int _alto, int _ancho, int _profundidad)
    :   color(_color), alto(_alto), ancho(_ancho), profundidad(_profundidad)
{
    if(color=="" || alto<=0 || ancho<=0 || profundidad<=0)
        this->validarValores();
}

//método para validar que los valores no sean <=0 o el color no sea ""
Prisma& Prisma::validarValores()
{
    /**Si alguno de los valores fuera negativo o cero,
    decidí que el programa los cambie automáticamente.
    Así mismo si el color fuera vacío, que lo setee a "Incoloro".
    Esto no me lo pide en el ejercicio, pero opté por hacerlo así cuestión
    que no me quede un prisma con datos inconsistentes**/

    alto  =  alto<0  ?  alto*(-1)   :   (alto==0    ?   1   :   alto);
    ancho =  ancho<0 ?  ancho*(-1)  :   (ancho==0   ?   1   :   ancho);

    profundidad =   profundidad<0   ?   profundidad*(-1)    :
        (profundidad==0     ?   1   :   profundidad);

    color =  color==""  ?   "Incoloro"  :   color;

    cout <<"Algunos valores fueron cambiados por haber ingresado valores invalidos"<<endl;

    return * this;
}

ostream& operator<<(ostream& salida, const Prisma &p)
{
    salida<<p.alto<<"x"<<p.ancho<<"x"<<p.profundidad<<"-"<<p.color;
    return salida;
}

//pri3 = 5 * pri1;
Prisma operator*(int num, const Prisma &p)
{
    //También modifico al número que multiplica si este resultara negativo o cero
    num < 0 ? num*= -1 : (num==0 ? num = 1 : num);

    Prisma aux(p.color, p.alto * num , p.ancho * num , p.profundidad * num);

    return aux;
}

//postincremento
//pri1++;
Prisma Prisma::operator++(int num)
{
    Prisma aux(*this);
    this->alto +=1;
    this->ancho+=1;
    this->profundidad+=1;
    return aux;
}

//predecremento
//--pri2;
Prisma& Prisma::operator--()
{
    this->alto-=1;
    this->ancho-=1;
    this->profundidad-=1;

    if(alto==0 || ancho==0 || profundidad==0)
        validarValores();

    return * this;
}
