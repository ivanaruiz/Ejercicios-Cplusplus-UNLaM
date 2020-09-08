/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//* 33.329.371-RUIZ,IvanaAnahiVictoria-(06-2965) *//**/
/**//**   DEBE MODIFICAR LA LÍNEA DE COMENTARIO ANTERIOR CON SUS DATOS   **//**/
/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//**//**   DESARROOLLE LAS "FUNCIONES MIEMBRO" DE LA CLASE    **//**//**//**/

#include "Prisma.h"
#include "PrismaException.h"

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
{
    color = _color;
    profundidad = 1;


    if(_alto<=0 || _ancho<=0)
        throw PrismaException("Ninguna dimension del prisma puede ser <=0");


    alto = _alto;
    ancho = _ancho;

}

//sobrecarga de constructor. otro constructor parametrizado
Prisma::Prisma(string _color, int _alto, int _ancho, int _profundidad)
{
    if(_alto<=0 || _ancho<=0 || _profundidad<=0)
        throw PrismaException("Ninguna dimension del prisma puede ser <=0");

    if(this->color.size()==0)
        this->color = "Incoloro";
    else
        this->color = color;

    this->alto = _alto;
    this->ancho= _ancho;
    this->profundidad= _profundidad;

}



ostream& operator<<(ostream& salida, const Prisma &p)
{
    if(p.alto<=0 || p.ancho<=0 || p.profundidad<=0)
        salida <<"IMPOSIBLE MOSTRAR ESTE PRISMA CON DATOS ERRONEOS";
    else
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


    return * this;
}
