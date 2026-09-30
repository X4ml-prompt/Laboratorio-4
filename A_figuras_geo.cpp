#include <iostream>
using namespace std;

int main() {
    int figura = 0;
    cout << "Ingresa un valor de figura entre círculo(1), cuadrado(2) o triángulo(3): ";
    cin >> figura;

    switch(figura) {
        case 1:
            cout << "Círculo" << endl;
            cout << "Ingrese el radio del círculo: ";
            double radio;
            double Area;
            cin >> radio;
            Area = 3.1416 * radio * radio;
            cout << "El área del círculo es: " << Area << endl;
            break;
        case 2:
            cout << "Cuadrado" << endl;
            cout << "Ingrese el lado del cuadrado: ";
            double lado;
            cin >> lado;
            Area = lado * lado;
            cout << "El área del cuadrado es: " << Area << endl;
            break;
        case 3:
            cout << "Triángulo" << endl;
            cout << "Ingrese la base del triángulo: ";
            double base;
            cin >> base;
            cout << "Ingrese la altura del triángulo: ";
            double altura;
            cin >> altura;
            Area = 0.5 * base * altura;
            cout << "El área del triángulo es: " << Area << endl;
            break; 
        default:
            cout << "Ingresa un valor valido de figura." << endl;
            break;
    }
    return 0;
}
