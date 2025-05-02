/*
    This is a simple C++ program that demonstrates the use of variables.
    Fot show the scope of variables like local variables and global variables in c++.

    Date: 01/05/2025
    Author: Triyan Salazar
    Description: This program demonstrates the use of variables.
    Version: 1.0
    Last Updated: 01/05/2025
*/

#include <iostream>

using namespace std;

// Variable global (fuera de la función main)
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