/**//* 22.333.444-PEREZ_DEL_RIO,JuanManuel-(07-2299) *//**/

#ifndef OPERADOR_H_INCLUDED
#define OPERADOR_H_INCLUDED

#include <string>
#include <iostream>
using namespace std;

//Clase padre
//También es clase abstracta, al ser abstracta no puedo instanciar objetos de la misma

class Operador
{
private:
    float _operA;
    float _operB;

public:
    Operador();
    Operador(float, float);
    virtual ~Operador();

    float getOperandoA() const;
    float getOperandoB() const;

    void setOperandoB(float);

    /**Al ser Operador una clase abstracta, estos siguientes métodos virtuales puros
    no los definiremos en esta clase, sino que lo haremos en las clases derivadas**/
    virtual string operacion() const = 0;
    virtual float calcular() = 0;
};


#endif // OPERADOR_H_INCLUDED

