#include "Persona.h"

//constructor vacío
Persona::Persona()
{
}

//constructor parametrizado
Persona::Persona(string _nya, string _domi)
{
    nya= _nya;
    domicilio= _domi;
}

//otro constructor parametrizado con más parámetros
Persona::Persona(string _nya, string _domicilio, string _localidad, string _fec_nac, long _dni, char _sexo)
{
    nya = _nya;
    domicilio = _domicilio;
    localidad= _localidad;
    fec_nac = _fec_nac;
    dni = _dni;
    sexo= _sexo;
}

//destructor para los objetos creados con memoria dinámica
Persona::~Persona()
{
    cout <<" destruyo objeto " <<this->nya <<endl;
}

//getters
string Persona::getNya()
{
    return this->nya;
}
string Persona::getDomicilio()
{
    return this->domicilio;
}
string Persona::getLocalidad()
{
    return this->localidad;
}
string Persona::getFec_nac()
{
    return this->fec_nac;
}
long Persona::getDni()
{
    return this->dni;
}
char Persona::getSexo()
{
    return this->sexo;
}

//operadores de flujo de entrada y salida
ostream& operator <<( ostream &salida, const Persona &p)
{

    salida << "Persona: " <<p.nya <<" "<< p.domicilio;

    return salida;
}

istream& operator >>(istream &entrada, Persona &p)
{
    entrada>> p.nya >>p.domicilio;

    return entrada;
}



