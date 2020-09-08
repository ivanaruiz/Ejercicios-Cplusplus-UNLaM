#ifndef BALA_H
#define BALA_H


class Bala
{
    private:
        int x;
        int y;
    public:
        Bala(int, int);
        void mover();
        bool fuera();
        int getX();
        int getY();
};

#endif // BALA_H
