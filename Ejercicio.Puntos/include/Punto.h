#ifndef PUNTO_H_INCLUDED
#define PUNTO_H_INCLUDED

class Punto
{
private:
    int x;
    int y;

public:

    Punto(int x, int y);    //constructor

    //setters y getters
    void setX(int x);
    void setY(int y);

    //el const es para que no modifique valores miembro de la clase
    //para metodos que solo muestren datos, conviene ponerle el const
    int getX() const;   //el const para que no se modifique nada, ninguna variable //lo hace readOnly al metodo
    int getY() const;   //estos get son para mostrar
};

#endif // PUNTO_H_INCLUDED
