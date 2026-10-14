#include <iostream>

using namespace std;

int main (){
    int numero = 0;
    cout << "Ingrese el limite establecido:";
    cin >> numero;
    for(int i = 1; i <= numero; i++){
        if (i % 5 == 0)
        cout << i << endl;
    }
}