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

### Tamaño de un arreglo
El tamaño de un arreglo se puede obtener utilizando el operador `sizeof`, el cual devuelve el tamaño en bytes del tipo de dato del arreglo multiplicado por la cantidad de elementos que contiene.
```cpp
    int edades[5];
    cout << "Tamaño del arreglo: " << sizeof(edades) << " bytes" << endl; // 20 bytes (5 * 4 bytes)
    cout << "Cantidad de elementos del arreglo: " << sizeof(edades) / sizeof(edades[0]) << endl; // 5 elementos
```

### Acceso a los elementos de un arreglo
Para acceder a los elementos de un arreglo, se utiliza el índice del elemento entre corchetes `[]`. El índice comienza en 0, por lo que el primer elemento del arreglo se encuentra en la posición 0, el segundo en la posición 1, y así sucesivamente.
```cpp
    int edades[5] = {20, 21, 22, 23, 24};

    cout << "Primer elemento: " << edades[0] << endl; // 20
    cout << "Segundo elemento: " << edades[1] << endl; // 21
    cout << "Tercer elemento: " << edades[2] << endl; // 22
```

### Iteración sobre un arreglo
Haciendo uso de los bucles de repeticion, podemos iterar sobre un arreglo. Con el fin de modificar y/o imprimir los elementos del arreglo. Donde el ciclo mas utilizado para iterar sobre un arreglo es el bucle `for`, pero también se puede utilizar el bucle `while` o `do-while`. A continuación, se muestra un ejemplo de cómo iterar sobre un arreglo utilizando ambos tipos de bucles.

```cpp
    #include <iostream>
    using namespace std;

    int main() {
        int edades[5] = {20, 21, 22, 23, 24};

        // Iteración con un bucle for
        for (int i = 0; i < 5; i++) {
            cout << "Edad " << i + 1 << ": " << edades[i] << endl;
        }

        // Iteración con un bucle while
        int i = 0;
    while (i < 5) {
        cout << "Edad " << i + 1 << ": " << edades[i] << endl;
        i++;
    }
```

Pero tambien se tiene otra forma de iterar sobre un arreglo, utilizando un bucle `for` mejorado, el cual es una forma mas sencilla de iterar sobre un arreglo, sin necesidad de utilizar un índice. Haciendo al codigo mas limpio y facil de escribir.

```cpp
    #include <iostream>
    using namespace std;

    int main() {
        int edades[5] = {20, 21, 22, 23, 24};

        // Iteración con un bucle for mejorado
        for (int edad : edades) {
            cout << "Edad: " << edad << endl;
        }

        return 0;
    }
```

Y para modificar los elementos hacienndo uso del bucle for mejorado, se puede hacer de la siguiente manera:
```cpp
    #include <iostream>
    using namespace std;

    int main() {
        int edades[5] = {20, 21, 22, 23, 24};

        // Modificación de los elementos del arreglo
        for (int &edad : edades) {
            edad += 1; // Incrementa cada edad en 1
        }

        // Imprimir las edades modificadas
        for (int edad : edades) {
            cout << "Edad modificada: " << edad << endl;
        }

        return 0;
    }
```