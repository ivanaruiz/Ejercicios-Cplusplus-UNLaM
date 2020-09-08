#include "Cadena.h"

//Parte E:
//si se crea un objeto sin ningún parámetro,
//entonces le asigno un caracter de \0, (fin de cadena)
Cadena::Cadena()
{
    cad= new char[1];   //pido un caracter
    *cad = '\0';
}

//Constructor parametrizado, ejemplo Cadena c1("hola");
Cadena::Cadena(const char * cadena)
{
    if(!cadena)     //lo mismo, si el usuario mandó nada, le asigno un '\0'
    {
        this->cad= new char[1];
        this->cad[0] = '\0';
        return;
    }

    //sino pido el largo de la cadena (+1 por el '\0') y le copio el contenido al atributo del objeto
    this->cad = new char[strlen(cadena) +1];
    strcpy(this->cad, cadena);
}

//destructor
Cadena::~Cadena()
{
    delete[]this->cad;
}

ostream& operator<<(ostream& salida, const Cadena& c)
{
    salida<< c.cad;
    return salida;
}

//Parte A
//constructor de copia
Cadena::Cadena(const Cadena &c)
{
    this->cad = new char[strlen(c.cad)+1];
    strcpy(this->cad , c.cad);
}


//Parte B y C
//ej c1 = c2 + " Mundo";
Cadena& Cadena::operator+(const char * palabra)
{
    char * aux = new char[strlen(palabra)];
    strcpy(aux, palabra);
    strcat(this->cad, aux);
    return *this;
}


//Parte D:  //este metodo es friend
//c9 = "¡" + c8
Cadena operator+(const char *pal, const Cadena& c)
{
    char * aux_pal = new char[strlen(pal)];
    strcpy(aux_pal, pal);
    strcat(aux_pal, c.cad);
    return (Cadena)aux_pal;

    //otra manera de resolverlo:
    /*
    Cadena aux;
    aux.cad = new char[strlen(palabra)+ strlen(c.cad)+1];
    strcpy(aux.cad, palabra);
    strcat(aux.cad, c.cad);
    return aux;
    */
}
