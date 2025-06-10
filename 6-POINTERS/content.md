# PUNTEROS EN C++

## ¿Qué son los punteros?
Los punteros son variables que almacenan la dirección de memoria de otra variable. En C++, los punteros se utilizan para manipular directamente la memoria, lo que permite una mayor flexibilidad y eficiencia en la gestión de datos.

### Operador de dirección (&) y operador de desreferencia (*)

1. **Operador de dirección (&)**: Se utiliza para obtener la dirección de memoria de una variable.
2. **Operador de desreferencia (*)**: Se utiliza para acceder al valor almacenado en la dirección de memoria a la que apunta un puntero.

pequeño ejemplo:

```cpp
    #include <iostream>
    using namespace std;

    int main() {
        int x = 10;
        cout << &x << '\n'; // Imprime la dirección de memoria de x
        cout << *(&x) << '\n'; // Imprime el valor almacenado en la dirección de memoria de x
        return 0;
    }
```

output:
``` bash
    0x7ffee4b8c8bc
    10
```

### Características de las variables
Cada variable en C++ esta asociada a tres puntos claves:

1. **Nombre**: Es la forma en que se identifica a la variable en el código, por ejemplo `x`.
2. **Direccion**: Es la ubicación en memoria donde se almacena el valor de la variable, por ejemplo `0x7ffee4b8c8bc`. y se puede obtener con el operador `&`.
3. **Valor**: Es el dato que almacena la variable.

### Sintaxis de los punteros
Para declarar un puntero, se utiliza el tipo de dato seguido del operador `*` y el nombre del puntero.

```cpp
    // tipo_dato *nombre_puntero; sintaxis
    int *puntero_a_entero;
```

### ¿Como utilizar punteros?

* Declara una variable puntero.
* Asigna la dirección de memoria de una variable a ese puntero utilizando el operador `&`.
* Utiliza el operador de desreferencia `*` para acceder al valor almacenado en la dirección de memoria a la que apunta el puntero.

**Ejemplo 1 Basico de uso de punteros**
```cpp
    #include <iostream>
    using namespace std;

    int main() {
        int x = 10; // Declaramos una variable entera
        int *puntero_a_x = &x; // Declaramos un puntero y le asignamos la dirección de x

        cout << "Valor de x: " << x << '\n'; // Imprime el valor de x
        cout << "Dirección de x: " << &x << '\n'; // Imprime la dirección de x
        cout << "Dirección del puntero: " << puntero_a_x << '\n'; // Imprime la dirección almacenada en el puntero (que es la dirección de x)
        cout << "Valor a través del puntero: " << *puntero_a_x << '\n'; // Imprime el valor a través del puntero

        return 0;
    }
```

output:
``` bash
    Valor de x: 10
    Dirección de x: 0x7ffee4b8c8bc
    Dirección del puntero: 0x7ffee4b8c8bc
    Valor a través del puntero: 10
```

**Ejemplo 2 de modificación de valor a través de punteros**
```cpp
    #include <iostream>
    using namespace std;

    int main() {
        int x = 10; // Declaramos una variable entera
        int *puntero_a_x = &x; // Declaramos un puntero y le asignamos la dirección de x

        cout << "Valor original de x: " << x << '\n'; // Imprime el valor original de x

        *puntero_a_x = 20; // Modificamos el valor de x a través del puntero

        cout << "Nuevo valor de x: " << x << '\n'; // Imprime el nuevo valor de x

        return 0;
    }
```

output:
``` bash
    Valor original de x: 10
    Nuevo valor de x: 20
```

**Ejemplo 3 tamaño de punteros**
El tamaño de un puntero depende de la arquitectura del sistema. Por ejemplo, en un sistema de 64 bits, todos los punteros ocupan 8 bytes (independientemente del tipo de dato al que apuntan).
```cpp
    #include <iostream>
    using namespace std;

    int main() {
        int *puntero_a_entero; // Declaramos un puntero a entero
        double *puntero_a_double; // Declaramos un puntero a double

        cout << "Tamaño de un puntero a entero: " << sizeof(puntero_a_entero) << " bytes\n"; // Imprime el tamaño de un puntero a entero
        cout << "Tamaño de un puntero a double: " << sizeof(puntero_a_double) << " bytes\n"; // Imprime el tamaño de un puntero a double

        return 0;
    }
```

output en un sistema de 64 bits:
``` bash
    Tamaño de un puntero a entero: 8 bytes
    Tamaño de un puntero a double: 8 bytes
```

**Puntos claves a recordar:**
- Los punteros son variables que almacenan direcciones de memoria.
- El operador `&` se utiliza para obtener la dirección de memoria de una variable.
- El operador `*` se utiliza para acceder al valor almacenado en la dirección de memoria a la que apunta un puntero.
- El tamaño de un puntero depende de la arquitectura del sistema y es independiente del tipo de dato al que apunta.