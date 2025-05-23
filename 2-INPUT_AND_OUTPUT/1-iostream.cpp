/*
    Entrada y Salidas de datos
    Veremos como mostrar e ingresar datos haciendo uso de la libreria <iostream>
    En este caso haremos uso de los objetos cout, cin, cerr y clog.
    
    Author: Triyan Salazar
    Description: This program demonstrates the use of input and outputs with iostream.
    Version: 1.0
    Last Updated: 04/05/2025
*/

#include <iostream>

using namespace std;

int main() {
    int age;
        char name[] = "Jorge Alejandro";

        cout << "Tu nombre es " << name;
        cout << "\nPor favor ingresa tu edad: ";
        cin >> age;
        cout << "\nTu edad es de " << age << " anos";

        if(age < 18) {
            cerr << "\nError: Menor de edad dectado\n"; //No es el uso correcto solo una demostracion de su funcionamiento
        }

        clog << "\nHa terminado el programa";
        return 0;
}