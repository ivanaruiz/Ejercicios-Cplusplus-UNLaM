#include <iostream>
#include <stdlib.h>
#include <string>   //ojo no es string.h
//<string> es para los contenedores que aca usamos
using namespace std;

void mostrarStringVertical(const string &);

int main()
{
    cout << "--Constructores--" << endl;

    //notar que no pido tamaño de memoria con estos contenedores
    string s1("Hola");
    cout << "s1: " << s1 << endl;

    string s2;      //creamos una variable y le asignamos el contenido
    s2 = "mundo";
    cout << "s2: " << s2 << endl;

    string s3(s1);  //constructor de copia, con este ya tenemos los 3 constructores
    cout << "s3: " << s3 << endl;


    //operaciones que podemos hacer con los contenedores
    cout << "--Operaciones--" << endl;

    string s4;
    s4 = s1 + " " + s2;     //concatenacion
    cout << "s4: " << s4 << endl;

    cout << "--Agregar--" << endl;
    s4.push_back('!');
    cout << "s4: " << s4 << endl;

    string s5(5, 'A');
    cout << "s5: " << s5 << endl;
    cout << "Longitud s5: " << s5.length() << endl;
    cout << "Size s5: " << s5.size() << endl;
    cout << "Capacidad s5: " << s5.capacity() << endl;
    cout << "Maximo s5: " << s5.max_size() << endl;
    //size y lenght son lo mismo, el largo de la cadena
    //la capacidad es cuánta memoria pidió y todavia no liberó
    //es decir cuánta memoria está utilizando

    cout << "--Recorrer--" << endl;
    mostrarStringVertical(s1);

    cout << "--Ingreso de texto--" << endl;
    getline(cin, s1);   //el getline me acepta los espacios, no asi el cin>>s1;
    cout << "s1: " << s1 << endl;

    system("pause");
    return 0;
}

//PASAR POR REFERENCIA ES LO MAS EFICIENTE
//el string lo mandamos por referencia &, para no duplicar memoria
//porque la operacion que vamos a hacer no necesita duplicar memoria
//duplicar memoria es algo ineficiente
//tener en cuenta que mandar por referencia permite modificar el original
//por tanto en caso de evitar eso, usamos un const
//en este lo pasamos como constante porque no queremos modificar el vector original(el string original)
void mostrarStringVertical(const string &s)
{
    cout << "Contenido: " << endl;
    for(unsigned i = 0; i<s.length() ; ++i)
    {
        cout << s[i] << endl;
    }
}
//sin embargo hay pocos casos en los que no se pasa por referencia
