# Punteros Y Arrays
De cierta forma los punteros y los arrays se ven similares, pero, estos son fundamentalmente diferentes en como se implementan, utilizan y acceden.

## Similitudes sintacticas y Diferencias claves
1. **Asignacion de arrays a punteros**: tu puedes asignar la direccion base de un array a un puntero, pero tu no puedes asignar un puntero a un array.
Ejemplo:
```cpp
    int array[5] = {1, 2, 3, 4, 5};
    int *puntero = array; // Asignamos la dirección base del array al puntero
    array = puntero; // Esto no es válido, no puedes asignar un puntero a un array
```
Esto se debe a que los arrays representan un bloque de memoria de tamaño fijo y su dirección base no se puede modificar. Un puntero, por otro lado, puede apuntar a cualquier dirección de memoria y puede ser modificado para apuntar a diferentes ubicaciones.

2. **Incremento de Punteros vs Arrays**: Tu puedes incrementar o decrementar un puntero para navegar através de la memoria, pero no puedes hacer lo mismo con un array.
Ejemplo:
```cpp
    int array[5] = {1, 2, 3, 4, 5};
    int *puntero = array; // Asignamos la dirección base del array al puntero

    cout << *puntero << '\n'; // Imprime el primer elemento del array (1)
    puntero++; // Incrementamos el puntero para apuntar al siguiente elemento
    cout << *puntero << '\n'; // Imprime el segundo elemento del array (2)

    // No puedes hacer esto con un array
    // array++; // Esto no es válido, no puedes incrementar un array
```

Esto se debe a que un puntero es una variable que contiene una dirección de memoria, por tanto tu puedes manipularlo. Sin embargo, un array, es una constante que representa la direccion inicial del array y no se puede modificar.

3. **Acceso a elementos *(arr + n) vs puntero[n]**: Al hacer uso de ambos metodos, puedes acceder al mismo elemento de un array, pero sin embargo, estos poseen distintos significados.
- `*(arr + n)`: este hace uso del operador de desreferencia para calcular la dirección de memoria del elemento n-ésimo del array y que luego se desreferencia para obtener su valor.
- `puntero[n]`: este utiliza la sintaxis de acceso a elementos de un array, que es equivalente a `*(arr + n)`, pero es más legible y comúnmente utilizado.

Ejemplo:
```cpp
    int array[5] = {1, 2, 3, 4, 5};
    int *puntero = array; // Asignamos la dirección base del array al puntero

    cout << *(array + 2) << '\n'; // Imprime el tercer elemento del array (3)
    cout << puntero[2] << '\n'; // Imprime el tercer elemento del array (3)
```

## Mejores Prácticas Para Legibilidad
1. **Utiliza corchetes "[]" para las variables del array**
    - Ejemplo: `array[i]`
    - Esto deja claro que estás accediendo a un elemento específico de un array.
2. **Utiliza el operador de desreferencia "*" para los punteros**
    - Ejemplo: `*(ptr + i)`
    - Esto asegura que el codigo es facil de entender e indica que estás accediendo a elementos a través de un puntero.

Siguiendo estas prácticas, tu codigo haciendo mas legible y de mantener.