#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream linea("diario.txt");

    if (linea.fail()) {
        cout << "Error: el archivo no existe o no se puede abrir." << endl;
        return 1;
    }

    string line;
    int contadorLineas = 0;

    while (getline(linea, line)) {
        contadorLineas++;
    }

    linea.close();

    cout << "El archivo contiene " << contadorLineas << " Lineas." << endl;

    return 0;
}