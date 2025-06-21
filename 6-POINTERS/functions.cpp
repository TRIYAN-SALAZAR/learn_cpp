/*
    Author: Triyan Salazar
    Description: Programa para entender el funcionamiento basico de punteros atraves de funciones.
    Version: 1.0
    Last Updated: 20/06/2025
*/

#include <iostream>
using namespace std;

// Ejemplo 1: Pasando un numero entero por un puntero
void fun(int *np) {
    // np = number pointer
    *np = *np + 5;
}

void fun_str(string *s) {
    cout << s << endl; //Referencia a memoria del string
    cout << *s; // Desreferenciar el puntero para acceder a la cadena
}
int main() {
    int x = 25;
    fun(&x);
    cout << x << endl; //Output: 30

    string s = "Hola mundo";
    fun_str(&s);

    return 0;
}