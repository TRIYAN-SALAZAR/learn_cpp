/*
    This is a simple C++ program that demonstrates the use of variables.
    Fot show the scope of variables like local variables and global variables in c++.

    Author: Triyan Salazar
    Description: This program demonstrates the use of variables.
    Version: 1.0
    Last Updated: 02/05/2025
*/

#include <iostream>

using namespace std;


/*
    Variables locales y globales con el mismo nombre
    Cuando una variable local y global comparten el mismo nombre:

    - La variable local tiene prioridad dentro del bloque en el que se declara.
    - La variable global está eclipsada, pero sigue existiendo y se puede acceder a ella 
      mediante el operador de resolución de ámbito (::).
*/
int globalVariableX = 10; // Variable global
int main()
{
    int localVariableX = 5; // Variable local en la función main
    cout << "Valor de la variable local: " << localVariableX << endl; // Output: 5

    cout << "Valor de la variable global: " << globalVariableX << endl;

    int y = 10; // Variable local en la función main
    cout << "Valor de la variable local y: " << y << endl; // Output: 10

    if (true)
    {
        int localVariableX = 20; // Variable local en el bloque if
        cout << "Valor de la variable local en el bloque if: " << localVariableX << endl; // Output: 20
        cout << "Valor de la variable global: " << globalVariableX << endl;
    }
    else
    {
        int y = 30; // Variable local en el bloque else
        cout << "Valor de la variable local y en el bloque else: " << y << endl; // Output: 30
    }
    
    return 0;
}


/*
    Usando la palabra reservada extern
    La palabra reservada extern se utiliza para declarar una variable global en otro archivo o en otro bloque de código.
    En este caso, se utiliza para declarar la variable global y en el bloque else.
*/
extern int extern_X; // Declaración de la variable global X
int main_two() {
    cout << extern_X ; // Output: 10
    return 0;
}

int extern_X = 10; // Definición de la variable global y
// La variable global y se puede utilizar en cualquier parte del programa, incluso en otros archivos.



/*
    Variables estáticas
    Las variables estáticas son variables que mantienen su valor entre llamadas a funciones.
    Se declaran utilizando la palabra clave static.
*/
int main_three() {
    static int staticVariable = 0; // Variable estática
    staticVariable++;
    cout << "Valor de la variable estática: " << staticVariable << endl; // Output: 1, 2, 3, ...
    return 0;
}