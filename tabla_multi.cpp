#include <iostream>

using namespace std;

int main() {
    int numero = 0;

    cout << "Introduce el número del cual quieres ver la tabla: ";
    cin >> numero;

    int i = 1;

    cout << "\n--- Tabla de multiplicar del " << numero << " ---\n";

    while (i <= 10) {
        int resultado = numero * i;
        cout << numero << "x" << contador << " = " << resultado << "\n";

        i++;
    }
    return 0;
}