#include <iostream>

using namespace std;

void mostrarParidad(int numero){
if (numero % 2 == 0) {
        cout << "El numero " << numero << " es Par." << endl;
    } else {
        cout << "El numero " << numero << " es Impar." << endl;
    }
}

int main(){
    int entero;
    cout << "Ingrese un entero: ";
    cin >> entero;

    cout << "El numero ingresado es: " << mostrarParidad(numero);
}