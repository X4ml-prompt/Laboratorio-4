#include <iostream>

int main() {
    int i = 1;     
    int cantidadPares = 0; 
   
    while (i <= 100) {
        
        if (i % 2 == 0) {
            cantidadPares++; 
        }
        
        i++; 
    }

    
   std::cout << "La cantidad de numeros pares entre 1 y 100 es: " << cantidadPares << "\n";

    return 0;
}
