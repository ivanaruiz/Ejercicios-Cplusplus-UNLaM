#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <stdlib.h>

using namespace std;


void inserto_linea();


class Persona
{
        //los operadores de flujo salida y entrada siempre son metodos friends y no son públicos ni privados
        friend istream& operator >> (istream &entrada, Persona &p);
        friend ostream& operator << (ostream &salida, const Persona &p);

    public:
        //hago sobrecarga de constructores
        //tendré tres constructores en total
        Persona();
        Persona(string, string, string, string, long, char);
        Persona(string, string);
        //destructor
        ~Persona();
        //getters
        string getNya();
        string getDomicilio();
        string getLocalidad();
        string getFec_nac();
        long getDni();
        char getSexo();

    private:
        string nya;
        string domicilio;
        string localidad;
        string fec_nac;
        long dni;
        char sexo;
};



#endif // PERSONA_H
