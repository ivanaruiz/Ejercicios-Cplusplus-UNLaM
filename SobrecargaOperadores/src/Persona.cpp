#include "Persona.h"


int Persona::cont=0;


Persona::Persona(string nom, string ape)
{
    this->nombre=nom;
    this->apellido=ape;
    this->cont++;
}



void Persona::setNombre(string nombre)
{
    this->nombre=nombre;
}

void Persona::setApellido(string apellido)
{
    this->apellido=apellido;
}

string Persona::getNombre() const
{
    return this->nombre;
}


string Persona::getApellido() const
{
    return this->apellido;
}

//LA SOBRECARGA LA HAREMOS DE DISTINTAS MANERAS PARA MOSTRAR CÓMO TRABAJA CADA UNA

//este método es friend
//Sobrecargo el operador +
//lo que devuelve es Persona, o sea devuelve un objeto auxiliar
//le paso como parametros las dos personas que concatenare
//como es friend, en los parametros le mando los dos objetos que concateno
//p3=p1+p2
/*
Persona operator+(Persona &p1, Persona &p2)
{
    Persona aux("null", "null");    //le pongo algunos valores solo porque el constructor me obliga
                                    //pero luego pisaremos esos valores
    //concateno
    aux.setNombre(p1.getNombre()+p2.getNombre());
    aux.setApellido(p1.getApellido()+p2.getApellido());
    return aux;
}
*/

//SEGUNDA MANERA
//Este metodo no es friend, y no modifica internamente a p1 (ni a p2)
//p3 = p1+p2
//p1 será el objeto llamador, cuando hago "this->nombre" por ejemplo, me refiero a él
//p2 es lo que pasa pasa por parámetro, es decir será p
Persona Persona::operator+(Persona &p)
{
    Persona aux("null", "null");
    aux.setNombre(this->nombre + p.getNombre());
    aux.setApellido(this->apellido + p.getApellido());
    return aux;
}

//TERCERA MANERA
//este método tampoco es friend
//pero ojo que acá no devuelvo un auxiliar, sino que devuelvo al mismo objeto p1 modificado
//p3=p1+p2
//me modificará p1, y le concatenará p2
//luego devuelve p1
/*
Persona& Persona::operator+(Persona &p)
{
    this->apellido += p.getApellido();
    this->nombre   += p.getNombre();
    return * this;
}
*/



//Otra sobrecarga con el operador+ (NO TIENE NADA QUE VER CON LAS ANTERIORES)
//método friend, al ser friend no usa el puntero this
//Este devolvera un entero. Es decir, se manda como parametro un objeto creado, y un valor.
//Se obtendra el largo del objeto, es decir cuantas letras tiene, y le sumaremos 10.
int operator+(Persona &p, const int valor)
{
    int aux;
    aux= p.getNombre().length()+ valor;
    return aux;
}

