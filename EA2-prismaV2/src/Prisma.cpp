/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//* 33.329.371-RUIZ,IvanaAnahiVictoria-(06-2965) *//**/
/**//**   DEBE MODIFICAR LA LÍNEA DE COMENTARIO ANTERIOR CON SUS DATOS   **//**/
/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//**//**   DESARROOLLE LAS "FUNCIONES MIEMBRO" DE LA CLASE    **//**//**//**/

#include "Prisma.h"
#include "MedidasException.h"

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

    try
    {
    if(_alto<= 0 && _ancho<=0)
        throw MedidasException(4);

    if(_alto<=0)
        throw MedidasException(1);
    alto = _alto;

    if(_ancho<=0)
        throw MedidasException(2);
    ancho = _ancho;
    }
    catch(MedidasException &med)
    {
        cout<<"EXCEPCION: " << med.what() <<endl;
    }
}

//sobrecarga de constructor. otro constructor parametrizado
Prisma::Prisma(string _color, int _alto, int _ancho, int _profundidad)
{
    color = _color;

    try
    {
    if((_alto<= 0 && _ancho<=0) || (_alto<=0 && _profundidad<=0) || (_ancho<=0 && _profundidad<=0)
        ||  (_alto<=0 && _ancho<=0 && _profundidad<=0))
            throw MedidasException(4);

    if(_alto<=0)
        throw MedidasException(1);
    alto = _alto;

    if(_ancho<=0)
        throw MedidasException(2);
    ancho = _ancho;

    if(_profundidad<=0)
        throw MedidasException(3);
    profundidad = _profundidad;
    }
    catch(MedidasException &med)
    {
        cout<<"EXCEPCION: " << med.what() <<endl;
    }
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

    if((alto<= 0 && ancho<=0) || (alto<=0 && profundidad<=0) || (ancho<=0 && profundidad<=0)
        ||  (alto<=0 && ancho<=0 && profundidad<=0))
        throw MedidasException(4);

    if(alto<=0)
        throw MedidasException(1);
    if(ancho<=0)
        throw MedidasException(2);
    if(profundidad<=0)
        throw MedidasException(3);

    return * this;
}
