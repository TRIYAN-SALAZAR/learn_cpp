/*
    Palabra reserveda auto
    La palabra reservada auto se utiliza para declarar variables en C++.
    El compilador deduce el tipo de la variable a partir del valor que se le asigna.
    
    Author: Triyan Salazar
    Description: This program demonstrates the use of variables.
    Version: 1.0
    Last Updated: 02/05/2025
*/

#include <iostream>
#include <typeinfo>

using namespace std;

int main() {
    auto x = 5; // El compilador deduce que x es un entero
    auto y = 3.14; // El compilador deduce que y es un double
    auto z = "Hello"; // El compilador deduce que z es un puntero a char (string literal)
    auto w = true; // El compilador deduce que w es un booleano

    cout << "El tipo de x es: " << typeid(x).name() << endl;
    cout << "El tipo de y es: " << typeid(y).name() << endl;
    cout << "El tipo de z es: " << typeid(z).name() << endl;
    cout << "El tipo de w es: " << typeid(w).name() << endl;
    return 0;
}