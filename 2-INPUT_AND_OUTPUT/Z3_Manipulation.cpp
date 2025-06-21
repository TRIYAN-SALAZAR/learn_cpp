/*
    Entrada y Salidas de datos
    Algunos tips o datos que vendran bien sobre como manipuular la salida de datos.
    
    Author: Triyan Salazar
    Description: This program demonstrates the use of input and outputs with iostream.
    Version: 1.0
    Last Updated: 14/05/2025
*/

#include <iostream>
#include <string>
#include <iomanip> //tienes que introducir la siguiente libreria

using namespace std;

int main() {

    // Cambiar la base del numero
    int a = 26, b = 20;
    cout << a << " " << b << "\n";  // 26 20
    cout << std::hex;
    cout << a << " " << b << "\n";  // 1a 14
    cout << std::oct;
    cout << a << " " << b << "\n";  // 32 24
    cout << std::dec;
    cout << a << " " << b << "\n";  // 26 20

    return 0;
}

int main_two() {
    // Width, fill y alignment
    // Sirve para controlar el tamaño de la salida, rellenar espacios vacios y controlar la alineacion de la informacion

    int a = 12;
    cout << std::setw(5);          // Set width to 5
    cout << std::setfill('*');     // Set fill character to '*'
    cout << a << "\n";             // ***12
    cout << std::setw(5);
    cout << "Hi" << "\n";          // ***Hi
    cout << std::left;             // Left-align the output
    cout << std::setw(5);
    cout << a << "\n";             // 12***
}