#include <iostream>

using namespace std;

int main() {
    int opcion;
    double saldo = 1000.0;
    double cantidad;

    cout << "---Cajero Automatico---\n";

    do {
        cout << "\n¿Qué transacción deseas realizar?\n";
        cout << "1. Depositar dinero\n";
        cout << "2. Retirar dinero\n";
        cout << "3. Salir\n";
        cout << "Selecciona una opción (1-3): ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "\nIntroduce la cantidad a depositar: $";
                cin >> cantidad;
                if (cantidad > 0) {
                    saldo += cantidad;
                    cout << "¡Depósito exitoso! Tu nuevo saldo es: $" << saldo << "\n";
                } else {
                    cout << "Cantidad no válida.\n";
                }
                break;

            case 2:
                cout << "\nIntroduce la cantidad a retirar: $";
                cin >> cantidad;
                if (cantidad > 0 && cantidad <= saldo) {
                    saldo -= cantidad;
                    cout << "¡Retiro exitoso! Tu nuevo saldo es: $" << saldo << "\n";
                } else if (cantidad > saldo) {
                    cout << "Fondos insuficientes. Tu saldo actual es: $" << saldo << "\n";
                } else {
                    cout << "Cantidad no válida.\n";
                }
                break;

            case 3:
                cout << "\nGracias por utilizar nuestros servicios. ¡Hasta pronto!\n";
                break;

            default:
            cout << "\nOpción no válida. Por favor, selecciona una opción del 1 al 3.\n";
                break;
        }
    } while (opcion != 3);

    return 0;
}