# Memoria dinamica

## ¿Qué es la asignación de memoria dinámica en C++?
La asignación de memoria dinámica en C++ refiere a la asignación de memoria de forma manual por parte del programador.
Lo que brinda a los desarrolladores la capacidad de:
- Asignar memoria en tiempo de ejecución.
- Liberar memoria cuando ya no es necesaria.

La asignación de memoria dinámica es útil cuando no se conoce el tamaño de la memoria requerido en tiempo de compilación.

## Funciones claves para la asignación de memoria dinámica
En C++, las funciones clave para la asignación de memoria dinámica son:
- `new`: Se utiliza para asignar memoria dinámica.
- `delete`: Se utiliza para liberar memoria previamente asignada con `new`.
- `malloc` y `calloc`: Funciones de C para asignar memoria dinámica.

Los puntos de `new` y `delete` ya los vimos en los apuntes sobre arreglos.

### Operador `New`
El operador `new` denota una solicitud de asignación de memoria en el almacen libre. Si hay suficiente memoria disponible, el operador `new` devuelve un puntero al bloque de memoria asignado. 

**Sintaxis del operador `new`**
`pointer-variable = new data-type;`

**Inicializar memoria**
Tambien se puede inicializar la memoria para tipos de datos integrados mediante el operador `new`. Para tipos de datos perzonalizados, se requiere un constructor(con el tipo de dato como entrada) para inicializar el valor. A continuación un ejemplo de ambos casos:
`pointer-variable = new data-type(value);`

**Asignar un bloque de memoria**
Tambien se utiliza el operador `new` para asignar un bloque (Array) de memoria.
`pointer-variable = new data-type[size];`. Donde `size`(Una variable) especifica el número de elementos de un Array.

Ejemplo 1, Asignación de memoria:
```cpp
    #include <iostream>
    using namespace std;

    int main() {
        int *ptr = new int[10];
        return 0; 
    }
```
En este ejemplo, se asigna memoria para un arreglo de 10 enteros. El puntero `ptr` apunta al primer elemento del arreglo.

Ejemplo 2, Accediendo a memoria no inicializada:
```cpp
    #include <iostream>
    using namespace std;

    int main() {
        int *ptr = new int[10];
        cout << *(ptr + 2) << endl; // Acceso a memoria no inicializada>>
        return 0;
    }
```

El valor de `*(ptr + 2)` no esta inicializado y puede contener datos basura.

Ejemplo 3, Inicializando y accediendo a memoria dinamica:
```cpp
    #include <iostream>
    using namespace std;

    int main() {
        int *ptr = new int[5];
        *(ptr + 2) = 10;
        cout << *(ptr + 2);
        return 0;
    }
```
En este ejemplo, se asigna memoria para un arreglo de 5 enteros, se inicializa el tercer elemento atraves de la linea `*(ptr + 2)` y se imprime su valor. En este caso, el valor impreso será *10*.

Ejemplo 4, Desasignación de memoria:
```cpp
    #include <iostream>
    using namespace std;

    int main() {
        int *ptr = new int[10];
        delete[] ptr; // Desasignación de memoria
        ptr = nullptr; // Evitar puntero colgante
        return 0;
    }
```
Despues de usar `delete[]`, la memoria asignada se libera y se es devuelta al sistema. Y establecer `ptr` con `nullptr` evita que el puntero apunte a una dirección de memoria no válida.

Ejemplo 5, Devolviendo direccion de una variable local:
```cpp
    #include <iostream>
    using namespace std;

    int *fun() {
        int a = 10;             
        int *ptr = &a;         
        return ptr;
    }

    int main() {
        cout << *fun();          // Undefined behavior
        return 0;
    }
```
La función devuelve la dirección de una variable local, la cual, se destruye una vez que finaliza la ejecución de la función.

Ejemplo 6, Devolución de memoria asignada dinamicamente:
```cpp
    #include <iostream>
    using namespace std;

    int *fun() {
        int *ptr = new int;     // Asignación dinámica
        *ptr = 10;              // Inicialización
        return ptr;             // Devolución del puntero
    }

    int main() {
        cout << *fun();         // Accesso al valor asignado dinamicamente
        return 0;
    }
```
La memoria asignada dentro de la funcion `fun` persiste o se mantiene incluso despues de que la funcion finaliza su ejecucion, ya que esta es asignada al monton(heap)t.

Ejemplo 7, Desasignación de memoria de forma apropiada despues de la llamada a una funcion:
```cpp
    #include <iostream>
    using namespace std;

    int *fun() {
        int *ptr = new int;     // Asignación dinámica
        *ptr = 10;              // Inicialización
        return ptr;             // Devolución del puntero
    }

    int main() {
        int *ptr = fun();       // Guardar el puntero devuelto
        cout << *ptr;           // Acceso al valor asignado dinamicamente
        delete ptr;             // Desasignación de memoria
        ptr = nullptr;          // Evitar puntero colgante
        return 0;
    }
```

### Mejores practicas
Siempre recuerda liberar la memoria asignada con `delete` o `delete[]` para evitar fugas de memoria y después establecer el puntero a `nullptr` para evitar punteros colgantes.

### Errores comunes
- No liberar memoria: Olvidar usar `delete` o `delete[]` puede causar fugas de memoria.
- Usar memoria liberada: Acceder a memoria después de liberarla puede causar comportamientos no deseados.
- No inicializar memoria: Usar memoria sin inicializar puede llevar a resultados impredecibles.
- Punteros colgantes: No establecer punteros a `nullptr` después de liberar memoria puede causar errores al intentar acceder a memoria no válida.