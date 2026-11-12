#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main(){
    string frase;

    ofstream diario;
    diario.open("diario.txt", ios::app);

    if (diario.is_open()) {
        cout << "Ingrese una frase: ";
        getline(cin, frase);
        diario << frase << endl;
        diario.close();
    }else {
        cout << "Error al abrir el archivo." << endl;
        return 1;
    }

    cout << "\n--- Contenido del diario ---" << endl;
    ifstream lecturaDiario("diario.txt");

    if (lecturaDiario.is_open()) {
        string linea;
        while (getline(lecturaDiario, linea)) {
            cout << linea << endl;
        }
        lecturaDiario.close();
    }else {
        cout << "No se pudo leer el archivo." << endl;
    }

    return 0;
}