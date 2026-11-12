#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream archivoSalida("numeros.txt");

    if (!archivoSalida.is_open()) {
        cout << "Error al abrir el archivo para escritura." << endl;
        return 1;
    }

    cout << "Ingrese 5 numeros enteros: " << endl;
    for (int i = 1; i <= 5; i++) {
        int numero;
        cout << "Numero " << i << ": ";
        cin >> numero;
    }
    archivoSalida.close();
    cout << "Numeros guardados correctamente en numeros.txt\n" << endl;

    ifstream archivoLectura("numeros.txt");

    if (!archivoLectura.is_open()) {
        cout << "Error al abri el archivo para la lectura." << endl;
        return 1;
    }

    int valorLeido;
    int sumaTotal = 0;

    while (archivoLectura >> valorLeido) {
        sumaTotal += valorLeido;
    }

    archivoLectura.close();

    cout << "--- Resultado ---" << endl;
    cout << "La suma de los 5 numeros es: " << sumaTotal << endl;

    return 0;
}