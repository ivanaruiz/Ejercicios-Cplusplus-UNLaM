#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <stdlib.h>
using namespace std;

//clase abstracta pero no es clase virtual pura, ya que tiene metodos con implementacion, y otros sin
class Animal
{
    public:
        Animal(string);
        string getNombre(); //OJO ES METODO NO ES VIRTUAL Y TIENE IMPLEMENTACION
        ~Animal();


        //AHORA SÍ TENEMOS CLASES ABSTRACTAS, YA QUE USARE METODOS VIRTUAL =0 , SIN IMPLEMENTACION DE CODIGO
        virtual const char * hablar() = 0;  //metodo abstracto
        //(también podría haber hecho virtual string hablar() const = 0 )
        //es virtual puro porque usamos el = 0
        //entonces no tenemos que desarrollar su funcion aquí, sino que la sobreescribimos en cada clase hija

        //LAS CLASES ABSTRACTAS TIENEN UNA IMPLEMENTACION INCOMPLETA
        //POR EJEMPLO TENEMOS LA CLASE FIGURA, Y UN METODO CALCULAR_AREA
        //TAMBIEN TENEMOS SUS CLASES HIJAS, EJEMPLO TRIANGULO, CIRCULO, CUADRADO
        //PERO NOTEMOS QUE PARA QUE LAS CLASES HIJAS USEN ESE MISMO METODO, EL CÁLCULO ES DISTINTO EN CADA UNA DE ELLAS
        //POR TANTO NO TENEMOS QUE DEFINIR LA CLASE CALCULAR_AREA EN LA CLASE PADRE
        //PUESTO QUE DESCONOCEMOS LA HIJA Y NO SABRÍAMOS CÓMO CALCULARLA
        //ES ALLÍ QUE USAMOS UN VIRTUAL PURO virtual double calcular_area() = 0
        //Y NO LO CODIFICAMOS EN LA CLASE PADRE. SINO QUE LO SOBREESCRIBIMOS EN CADA UNA DE LAS CLASES HIJAS


        //OJO ESTA CLASE ES ABSTRACTA, PERO NO ES VIRTUAL PURO PORQUE TIENE METODOS CON IMPLEMENTACION, EJ getNombre

        //UNA CLASE VIRTUAL PURA ES LA QUE TIENE TODOS SUS METODOS VIRTUALRES PUROS , ES DECIR METODOS SIN IMPLEMENTACION


    private:
        string nombre;
};

#endif // ANIMAL_H
