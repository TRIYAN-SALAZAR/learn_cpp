/*
    Variables constantes
    Las variables constantes son variables que no pueden ser modificadas despues de su declaracion.
    Se declaran utilizando la palabra clave const.

    Author: Triyan Salazar
    Description: This program demonstrates the use of variables.
    Version: 1.0
    Last Updated: 02/05/2025
*/

#include <iostream>
using namespace std;

const double PI = 3.14159; // Declaración de una variable constante

int main() {
    int radius;
    cout << "Ingresa el radio del circulo: ";
    cin >> radius;
    
    double area = PI * radius * radius;
    cout << "El area del circulo es: " << area << endl;
    
    return 0;
}

/*
    Buenas practicas para el uso de variables constantes:
    - Usar nombres descriptivos en mayusculas para las variables constantes.
    - Usar la palabra clave const para declarar variables constantes.
    - Usar variables constantes para valores que no cambian en el programa.
*/