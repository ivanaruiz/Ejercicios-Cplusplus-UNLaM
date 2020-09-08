#include "Persona.h"
#include "Alumno.h"

/*Desarrollar una clase Persona con atributos de nombre y edad.
Y luego desarrollar una clase Alumno que herede de Persona, con los atributos de codigoAlumno y notaFinal.
Crear objetos de ambas clases y mostrar los datos por pantalla.*/


int main()
{
    Persona p1 ("pepe", 21);
    p1.mostrarPersona();

    cout<<endl;

    Alumno a1 ("patricio", 23, "A42", 5.4);
    a1.mostrarAlumno();

    system("pause");
    return 0;
}
