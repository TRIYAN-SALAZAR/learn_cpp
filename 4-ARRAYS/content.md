# ARREGLOS, MATRICES O VECTORES

Un arreglo, matriz o vector permite almacenar un conjunto de datos del mismo tipo, de forma contigua en memoria. Este arreglo se puede acceder mediante un índice, que es un número entero que indica la posición del elemento dentro del arreglo. Indices los cuales comienzan desde 0, es decir, el primer elemento del arreglo se encuentra en la posición 0, el segundo en la posición 1, y así sucesivamente.
```text
                 +---+---+---+---+---+
Elementos  ->    | 4 | 9 | 3 | 3 | 4 |
                 +---+---+---+---+---+
Indices    ->    | 0 | 1 | 2 | 3 | 4 |
                 +---+---+---+---+---+
```

En C++ se pueden declarar de la siguiente manera:
```cpp
    #include <iostream>
    using namespace std;

    int main() {
        // Inicialización de un arreglo de enteros
        int edades[5] = {20, 21, 22, 23, 24};

        // Acceso a los elementos de un arreglo
        cout << "La segunda edad es: " << edades[1] << endl;

        return 0;
    }
```

Pero esa es una forma de declarar un arreglo, caso el cual, al momento de declarar se inicializo con valores, por lo que tambien se puede declarar un arreglo sin inicializarlo, y que en forma automatica, el compilador le asigne un valor por defecto a cada elemento del arreglo, el cual es 0 para los tipos de datos primitivos como enteros, flotantes, etc.
```cpp
    // Declaración de un arreglo sin inicializar
    int edades[5];

    // Asignación de valores a los elementos del arreglo
    edades[0] = 20;
    edades[1] = 21;
    edades[2] = 22;

    // Acceso a los elementos del arreglo
    cout << "La tercera edad es: " << edades[2] << endl; // 22
    cout << "La primera edad es: " << edades[3] << endl; // 0
```

NOTA: Todo arreglo se inicialice o no con valores, este ocupara espacio.