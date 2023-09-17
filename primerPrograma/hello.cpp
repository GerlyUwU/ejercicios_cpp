// Escribe la siguiente expresión como expresion en c++:
//(a/b) +1

#include <iostream>

using namespace std;

int main()
{
    float a, b, resultado = 0;

    cout << "ingrese el valor de a:" << endl;
    cin >> a;
    cout << "ingrese el valor de b:";
    cin >> b;
    resultado = (a / b) + 1;
    cout << "EL RESULTADO DE (a/b)+1 es:" << endl;
    //metodo de la clase cout para redondear los decimales segun el numero que le pases de parametro
    cout.precision(2);
    cout << resultado << endl;

    return 0;
}