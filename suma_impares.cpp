#include <iostream>
using namespace std;

int main() {
    int n, suma = 0, contador = 0;

    cout << "Ingrese un numero: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            suma += i;
            contador++;
        }
    }

    cout << "Cantidad de numeros impares: " << contador << endl;
    cout << "Suma de numeros impares: " << suma << endl;

    return 0;
}