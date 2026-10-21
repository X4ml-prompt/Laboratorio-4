#include <iostream>

using namespace std;

int main () {
    int suma = 0, i =1;
    int n = 0

    cout << "Ingrese el numero que desea que se sume: " << endl;
    cin >> n;

    while (i <= n){
        suma += i;
        i++;
    }

    cout << "La suma desde el 1 hasta n es igual a: " << n << endl;

    return 0;
}