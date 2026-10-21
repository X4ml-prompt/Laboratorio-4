#include <iostream>
#include <string>


int main() {
    const std :: string Contrasena_correcta = "16@6X4m";
    std :: string intento;

    do {
        std::cout << "Introduce la contrasena: ";
        std::cin >> intento;

        if (intento != Contrasena_correcta) {
            std::cout << "Contrasena incorrecta. Intentalo de nuevo.\n\n";
        }
    } while (intento != Contrasena_correcta);

    std::cout << "¡Bienvenido!";

    return 0;
}