/*
    Tipos de conversiones
    Las conversiones de tipos son operaciones que permiten convertir un valor de un tipo de dato a otro tipo de dato.
    
    Author: Triyan Salazar
    Description: This program demonstrates the use of variables and type conversions.
    Version: 1.0
    Last Updated: 03/05/2025
*/

#include <iostream>
#include <typeinfo>

using namespace std;

/*
    Conversiones implicitas
    Las conversiones implicitas son aquellas que se realizan automaticamente por el compilador.
    Por ejemplo, si se asigna un valor entero a una variable de tipo double, el compilador convierte automaticamente el entero a double.

    Se puede llegar a perder informacion.
*/
int main() {
    int x = 5;
    double y = x; // Implicit conversion: int to double
    cout << "El tipo de x es: " << typeid(x).name() << endl;
    cout << "El tipo de y es: " << typeid(y).name() << endl;
    return 0;
}

/*
    Conversiones explicitas
    Las conversiones explicitas son aquellas que se realizan de forma manual por el programador.
    En la cual existen dos tipos de conversiones explicitas:
    - Conversiones de tipo (Forma tradicional)
    - Casting (forma de C++)
*/

int conversion_Tradicional() {
    int x = 5;
    double y = (double)x; 
    cout << "El tipo de x es: " << typeid(x).name() << endl;
    cout << "El tipo de y es: " << typeid(y).name() << endl;
    return 0;
}

int conversion_cpp() {
    int x = 5;
    double y = static_cast<double>(x);
    cout << "El tipo de x es: " << typeid(x).name() << endl;
    cout << "El tipo de y es: " << typeid(y).name() << endl;
    return 0;
}