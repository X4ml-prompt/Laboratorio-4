#include <iostream>

using namespace std;

int main() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero >=1 && numero <= 100) {
        cout << "El numero esta dentro del rango de 1 a 100." << endl;
    }else if (numero < 1) {
        cout << "El numero esta fuera del rango, por debajo de 1." << endl;
    }else if (numero > 100) {
        cout << "El numero esta fuera del rango, por encima de 100." << endl;
    }
    return 0;
}