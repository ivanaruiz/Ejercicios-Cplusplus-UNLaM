#include "Perro.h"

Perro::Perro(string nom, int ed):
    nombre(nom), edad(ed)
{
}

string Perro::getNombre()
{
    return this->nombre;
}

/*
<sstream> define un tipo llamado stringstream que nos permite tratar un string como un stream, eso nos permite
la inserción y la extracción desde y a strings de la misma manera que podríamos hacer con cin y cout.
*/
string Perro::toString()
{
    //creo una variable del tipo stringstream
    stringstream s;
    //s almacena la informacion de los siguientes datos
    s<<"Nombre---"<<nombre<<endl;
    s<<"Edad-----"<<edad<<endl;
    return s.str();
}

ostream& operator<<(ostream &salida, Perro& pe)
{
    return salida<<pe.toString();
}
