
#include "main.h"

/*Desarrollar la clase Prisma, la cual debe responder al siguiente main.*/

int main()
{
    cout << "Hello world!" << endl;

    Prisma pri0; // 1 x 1 x 1
    Prisma pri1("Azul", 3, 2); // 3 x 2 x 1
    Prisma pri2("Verde", 8, 8, 8); // 8 x 8 x 8
    Prisma pri3(pri0); // 1 x 1 x 1
    //ACLARACI�N: NO HACE FALTA DESARROLLAR EL CONSTRUCTOR DE COPIA
    //NI TAMPOCO LA SOBRECARGA DEL OPERADOR =
    //POR LO MENOS AS� ME LO CORRIGIERON

    Prisma pri4("Rojo", 0,3);
//    Prisma pri5("Rojo", 5,-1);
//    Prisma pri6("Rojo", -1,2,2);
//    Prisma pri7("Rojo", 1,0,1);
//    Prisma pri8("Rojo", 1,1,0);
//    Prisma pri9("Rojo", 5,0,0);
//    Prisma pri10("Rojo", 0,0);
//    Prisma pri11("Rojo", 0,5,0);
//    Prisma pri12("Rojo", 0,0,6);
//    Prisma pri13("Rojo", 0,0,0);
//    cout<< pri13<<endl;

    cout << endl << "Valores inicales" << endl;
    cout << "esperado 1x1x1-Incoloro - pri0:" << pri0 << endl;
    cout << "esperado 3x2x1-Azul - pri1:" << pri1 << endl;
    cout << "esperado 8x8x8-Verde - pri2:" << pri2 << endl;
    cout << "esperado 1x1x1-Incoloro - pri3:" << pri3 << endl;

    pri3 = 5 * pri1;
    pri1++;
    --pri2;

    cout << endl << "Valores finales" << endl;
    cout << "esperado 1x1x1-Incoloro - pri0:" << pri0 << endl;
    cout << "esperado 4x3x2-Azul - pri1:" << pri1 << endl;
    cout << "esperado 7x7x7-Verde - pri2:" << pri2 << endl;
    cout << "esperado 15x10x5-Azul - pri3:" << pri3 << endl;


    system("pause");
    return 0;
}
