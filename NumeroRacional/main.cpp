#include "Racional.h"

int main()
{
    //Parte A
    Racional r1;
    cout << "r1: " << r1.mostrarRacional() << endl;

    Racional r2(4,8);
    cout << "r2: " << r2.mostrarRacional() << endl;



    //Parte B:
    Racional r3(0,0);
    cout<< "r3: " <<r3.mostrarRacional()<< endl;
    Racional r4(3,0);
    cout << "r4: " << r4.mostrarRacional() << endl;
    Racional r5(-5,0);
    cout << "r5: " << r5.mostrarRacional() << endl;



    //Parte C:
    Racional r6;
    cout << "r6: " << r6.mostrarRacional() << endl;

    int n1 = 10;
    r6 = r6 + n1;
    r6 -= 5;
    cout << "r6: "<< r6 << endl;




    //Parte D:
    //Implementar los operadores -, +=, *, /, asignacion, pre incremento, post incremento
    Racional r7(1,2);
    Racional r8 = r7;
    cout << "r8: " << r8 << endl;

    Racional r9(10,1);
    r9 = r9*r2;
    cout << "r9: " << r9 << endl;

    Racional r10(-3,4);
    r10 = r10/r2;
    cout << "r10: " << r10 << endl;

    Racional r11(3,5);
    Racional r12(16,8);
    r11+= r12;
    cout << "r11: " << r11 <<endl;

    Racional r13(3,5);
    Racional r14(16,8);
    r13= r13-r14;
    cout << "r13: " << r13 << endl;

    //preincremento
    Racional r15(1,2);
    Racional r16;
    r16= ++r15;

    cout << "r15: " << r15 << endl;
    cout << "r16: " << r16 << endl;

    //postincremento
    Racional r17(1,2);
    Racional r18;
    r18= r17++;

    cout << "r17: " << r17 << endl;
    cout << "r18: " << r18 << endl;



    //Parte E:
    Racional r19;
    r19 = 10 + r19;
    //uso friend para este caso
    cout << "r19: " << r19 << endl;



    system("pause");
    return 0;
}
