#ifndef GATO_H
#define GATO_H
#include "Mascota.h"


class Gato: public Mascota
{
    private:
        bool jugarConLaser;

    public:
        Gato(string, int, bool);

        //método propio de esta clase Gato
        void cazarRaton();

        //métodos que derivan de la clase Mascota
        void dormir();
        void comer();
};

#endif // GATO_H
