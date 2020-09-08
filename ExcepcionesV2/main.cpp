#include <iostream>
#include <fstream>  //para las operaciones de fopen, fclose, fgets
#include "DividirPorCeroException.h"
#include "AperturaArchivoException.h"
using namespace std;

double cociente(double a, double b);
void mostrarArchivo(char * nombre);

int main()
{
    //////////////////////////////////////////////////
    //Ejemplo 1***************************************
    //////////////////////////////////////////////////
    cout << "Inicio de la aplicacion" <<endl;


    //solo puede haber un solo bloque try
    //y uno o mas bloques catch
    try
    {
        throw 20;
        //throw 'H';
        //throw 1.9;    //como no hay un catch para este, lo agarra el runtime
    }
    catch(int e)
    {
        cout << "Ha ocurrido una excepcion: " << e << endl;
    }
    catch(char c)
    {
        cout << "Ha ocurrido una excepcion: " << c << endl;
    }


    cout << "*******************************" << endl;
    //////////////////////////////////////////////////
    //Ejemplo 2***************************************
    //////////////////////////////////////////////////
    //capturar una excepcion por division por cero
    try
    {
        cout << "Resultado cociente" << cociente(1,0) << endl;
    }
    catch(DividirPorCeroException &edxc)
    {
        cout << "Excepcion " << edxc.what() << endl;
    }



    cout << "*******************************" << endl;
    //////////////////////////////////////////////////
    //Ejemplo 3***************************************
    //////////////////////////////////////////////////
    //Capturar una excepcion por falla de reserva de memoria

    //hago un vector gigante
    //estoy pidiendo memoria
    double * vec;
    long y = 1000000000000;   //lo comento para no probar esto y me estalle la memoria
    //long y = 100; //con este ejemplo no me saltaria la excepcion bad allocator

    //notar que en el bloque try en este caso no estoy arrojando una excepcion, ¿por qué?
    //el new es un operador intelligente, que se fija que si está dentro de un bloque try, lanza excepciones solo
    //pero si no está dentro de un bloque try, no lo hace

    //como ve que no puede tener tanta memoria disponible, porque estoy pidiendo un vector demasiado grande,
    //entonces lanza una excepcion llamada bad allocator
    //esa excepcion se utiliza cuando no hay memoria

    try
    {
        vec = new double [y];
        for(int i = 0; i<10; i++)
        {
            vec[i] = i;
            cout << vec[i] << endl;
        }
    }
    catch(bad_alloc &ba)
    {
        cout << "Falla reserva de memoria: " << ba.what() << endl;
    }



    cout << "*******************************" << endl;
    //////////////////////////////////////////////////
    //Ejemplo 4***************************************
    //////////////////////////////////////////////////
    //Capturar una excepcion retornando diferentes mensajes de causas

    try
    {
        mostrarArchivo("datos.ttxt");
    }
    catch(AperturaArchivoException &mae)
    {
        cout << mae.what() << endl;
    }

    cout << endl << "Fin de la aplicacion" <<endl;

    return 0;
}


//Funcion cociente que captura la excepcion al dividir por cero
double cociente(double a, double b)
{
    if(b==0)
        throw DividirPorCeroException();

    return a/b;
}

//Funcion que muestra el contenido de un archivo de texto
void mostrarArchivo(char * nombre)
{
    char buff[81];
    FILE * fp = fopen(nombre, "rt");
    if(fp == NULL)
        throw AperturaArchivoException(1);
    while(fgets(buff, 80, fp))
        cout << buff;
    fclose(fp);
}
