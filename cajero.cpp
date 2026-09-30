#include <iostream>
using namespace std;

int main() {
    int opcion = 0;
    cout << "Bienvenido al cajero automático" << endl;
    cout << "Eliga entre ingresar o retirar dinero (1-2): ";
    cin >> opcion;

    double saldo = 100.0; // Inicializar el saldo en cero
    
    switch(opcion) {
        case 1:
            cout << "Ingrese la cantidad de dinero a ingresar: ";
            double ingreso;
            cin >> ingreso;
            cout << "Se han ingresado: " << ingreso << " pesos." << endl;
            saldo += ingreso;
            cout << "El saldo actual es: $" << saldo << endl;
            break;
        case 2:
            cout << "Ingrese la cantidad de dinero a retirar: ";
            double retiro;
            cin >> retiro;
            cout << "Se han retirado: " << retiro << " pesos." << endl;

            if (saldo < retiro) {
                cout << "No tiene suficiente saldo para poder realizar el retiro." << endl;
            } else {
                saldo -= retiro;
                cout << "El saldo restante es: $" << saldo << endl;
            }
            break;
        default:
            cout << "Opción no válida." << endl;
            break;
    }
    return 0;
}