#include <iostream>
using namespace std;

int main() {
    char color;
    cout << "Ingresa un caracter entre R, A o V: ";
    cin >> color;

    switch(color) {
        case 'R':
            cout << "Alto" << endl;
            break;
        case 'A':
            cout << "Precaución" << endl;
            break;
        case 'V':
            cout << "Avance" << endl;
            break;
        default:
            cout << "Color no reconocido." << endl;
            break;
    }
    return 0;
}