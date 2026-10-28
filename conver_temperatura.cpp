#include <iostream>

using namespace std;

float celsiusAFahrenheit(float celsius){
    float F = celsius * 1.8 + 32;
    return F; 
}

int main(){

    float temperaturaC;
    cout << "Ingrese la temperatura en Celsius: ";
    cin >> temperaturaC;

    float fahrenheit = celsiusAFahrenheit(temperaturaC);
    cout << "La temperatura en Fahrenheit es de: " << fahrenheit;

    return 0;
}