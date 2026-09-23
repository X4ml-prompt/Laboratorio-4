#include <iostream>

using namespace std;

int main() {
    float monto =0.0;
    cout << "Ingrese el monto de la compra: $";
    cin >> monto;
    
    if (monto > 100) {
        cout << "Se aplica el 10% de descuento." << endl;
        float descuento = monto * 0.10;
        float monto_final = monto - descuento;
        cout << "El monto final es: $" << monto_final << endl;
    }else if (monto > 200) {
        cout << "Se aplica el 20% de descuento." << endl;
        float descuento = monto * 0.20;
        float monto_final = monto - descuento;
        cout << "El monto final es: $" << monto_final << endl;
    }else {
        cout << "No se aplica descuento." << endl;
        cout << "El monto final es: $" << monto << endl;
    }
    return 0;
}