#include <iostream>

using namespace std;

float sumar(float a, float b){
    return a + b;
}

float restar(float a, float b){
    return a - b;
}

float multiplicar(float a, float b){
    return a * b;
}

float dividir(float a, float b){
    return a/b;
}


int main(){
    float num1, num2;
    int opcion;

    cout << "\n ===Menu de Calculadora=== \n";
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;
    cout << "5. Salir" << endl;

    cout << "Elige que es lo que quieres: ";
    cin >> opcion;

    switch(opcion){
        case 1:
            cout << "Ingrese los dos numeros a sumar: ";
            cin >> num1 >> num2;

            float sum = sumar(num1, num2);
            cout << "La suma es de: " << sum << endl;

            break;
        case 2:
            cout << "Ingrese los dos numeros a restar: ";
            cin >> num1 >> num2;

            float rest = restar(num1, num2);
            cout << "La resta es de: " << rest << endl;

            break;
        case 3:
            cout << "Ingrese los dos numeros a multiplicar: ";
            cin >> num1 >> num2;

            float mult = multiplicar(num1, num2);
            cout << "La multiplicacion es de :" << mult << endl;

            break;
        case 4:
            cout << "Ingrese los dos numeros a dividir: ";
            cin >> num1 >> num2;

            if (num2 != 0){
            float div = dividir(num1, num2);
            cout << "La division es de :" << div << endl;
            }
            else {
                cout << "Lo sentimos, no es posible dividir entre 0" << endl;
            }
            
            break;
        case 5:
            cout << "¡Fue un placer atenderle!";
            break;
        default:
            cout << "Lo sentimos, su opcion es inexistente...";
            break;
    }
    return 0;

}