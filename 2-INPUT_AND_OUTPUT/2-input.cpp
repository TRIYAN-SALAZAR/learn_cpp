/*
    Entrada y Salidas de datos
    Algunos tips o datos que vendran bien sobre el objeto cin para la entrada de datos.
    
    Author: Triyan Salazar
    Description: This program demonstrates the use of input and outputs with iostream.
    Version: 1.0
    Last Updated: 07/05/2025
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    /*
        Tu puedes ingresar multiples datos haciendo uso solamente con cin
    */

    int age;
    string name;

    cout << "Porfavor ingresa tu edad y tu nombre: ";
    cin >> age >> name;
    cout << "Nombre: " << name << " | Edad: " << age << endl;

    /*
        En otros casos, el usar cin no es una buena opcion, por ejemplo: si llegases a inngresar un
        nombre o una cadena de texto larga podria conllevar a problemas, por ello una buena opcion es usar getline().

        Esta funcion lee la linea entera de entrada, la cual lee hasta espacios, asegurando la correcta entrada de los datos.
    */

    cout << "Porfavor ingresa tu nombre completo: ";
    getline(cin, name);
    cout << "Mucho gusto " << name;

    return 0;
}