#include <iostream>

using namespace std;

int main(){
    int numero;
    cout << "Ingrese el inicio de la cuenta regresiva: ";
    cin >> numero;

    for (int i = numero; i >= 0; i--){
        cout << i << endl;
    }
}