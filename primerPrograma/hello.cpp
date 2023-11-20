/*
ejercicio 11:
            hacer un programa que simule un cajero
            automatico con un saldo inicial del 1000 dolares
*/

#include <iostream>
using namespace std;

int main()
{
    int saldo = 1000;
    int menu;
    cout << "Bienvenido al banco" << endl;
    cout << "A continuación, digite un número para elegir la opción a realizar:" << endl;

    cout << "1.- Retirar dinero" << endl;
    cout << "2.- Depositar dinero" << endl;
    cout << "3.- Consultar saldo" << endl;
    cout << "4.- Salir" << endl;
    cin >> menu;

    switch (menu)
    {
    case 1:
    {
        int retiro = 0;
        cout << "Ingrese la cantidad a retirar: ";
        cin >> retiro;
        if (retiro > saldo)
        {
            cout << "No tiene el saldo suficiente para realizar esta transacción. Labure más." << endl;
            break;
        }
        else
        {
            saldo -= retiro;
            cout << "Retiro exitoso. El saldo restante es: $" << saldo << ". ¡Vuelva pronto!" << endl;
        }
        break;
    }

    case 2:
    {
        int deposito = 0;
        cout << "Ingrese la cantidad a depositar: ";
        cin >> deposito;
        if (deposito > 1000000)
        {
            cout << "Me parece que tendrás que declarar ante el SAT esa cantidad. ._. " << endl;
            break;
        }
        else
        {
            saldo += deposito;
            cout << "Depósito exitoso. El saldo actualizado es de: $" << saldo << ". ¡Vuelva pronto!" << endl;
        }
        break;
    }

    case 3:
        cout << "El saldo actual de la cuenta es: $" << saldo << ". ¡Vuelva pronto!" << endl;
        break;
    case 4:
        cout << "Vuelva pronto. ¡Gracias por usar este servicio!" << endl;
        break;
    default:
        cout << "Vaya, parece que no ingresaste un número válido. Vuelvelo a intentar. :)" << endl;
    }
    return 0;
}