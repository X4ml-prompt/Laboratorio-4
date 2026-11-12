#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    int opcion;

    do {
        cout << "\n===============================" << endl;
        cout << "      SISTEMA DE VENTAS        " << endl;
        cout << "===============================" << endl;
        cout << "1. Registrar una venta" << endl;
        cout << "2. Mostrar todas las ventas" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        cin.ignore();

        switch (opcion) {
            case 1: {
                string producto;
                double monto;

                ofstream archivoSalida("ventas.txt", ios::app);
                if (!archivoSalida.is_open()) {
                    cout << "Error al abrir el archivo para guardar la venta." << endl;
                    break;
                }

                cout << "\n--- Registrar Venta ---" << endl;
                cout << "Ingrese el nombre del producto: ";
                getline(cin, producto);
                
                cout << "Ingrese el monto de la venta: ";
                cin >> monto;

                archivoSalida << "Producto: " << producto << " | Monto: $" << monto << endl;
                archivoSalida.close();

                cout << "¡Venta registrada exitosamente!" << endl;
                break;
            }
            case 2: {
                cout << "\n--- Historial de Ventas ---" << endl;
                ifstream archivoLectura("ventas.txt");

                if (!archivoLectura.is_open()) {
                    cout << "Aun no hay ventas registradas o el archivo no existe." << endl;
                    break;
                }

                string linea;
                bool hayDatos = false;
                while (getline(archivoLectura, linea)) {
                    cout << linea << endl;
                    hayDatos = true;
                }
                
                if (!hayDatos) {
                    cout << "El archivo de ventas esta vacio." << endl;
                }

                archivoLectura.close();
                break;
            }
            case 3:
                cout << "\nSaliendo del programa. ¡Hasta luego!" << endl;
                break;
            default:
                cout << "\nOpcion no valida. Por favor, intente de nuevo." << endl;
        }

    } while (opcion != 3); 

    return 0;
}