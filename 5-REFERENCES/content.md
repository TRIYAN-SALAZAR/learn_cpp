# REFERENCIAS EN C++

Una referencia en C++ es un alias para una variable existente. Permite manipular la variable original sin necesidad de crear una copia. Las referencias son útiles para pasar argumentos a funciones sin incurrir en el costo de copiar grandes estructuras de datos.

### Propiedades de las Referencias

1. **Debe Inicializarse**: Una referencia debe ser inicializada al momento de su declaración. No puede existir una referencia sin un objeto asociado.
2. **No puede contener `NULL`**: Una referencia siempre debe referirse a un objeto válido. No puede ser nula.
3. **No puede cambiar de referencia**: Una vez que una referencia ha sido inicializada a un objeto, no puede ser cambiada para referirse a otro objeto.

### Sintaxis de Referencias

La sintaxis para declarar una referencia es similar a la de un puntero, pero se utiliza el operador `&`(ampersand) en lugar del operador `*`. Aquí hay un ejemplo:

```cpp
    int a = 10;
    int& ref = a;  // ref es una referencia a a
    ref = 20;     // Esto también cambia a a a 20
    std::cout << a; // Imprime 20
```

En este ejemplo, `ref` es una referencia a la variable `a`. Cualquier cambio realizado a `ref` también afecta a `a`, ya que ambas se refieren al mismo espacio de memoria.

Una forma de vizualizar el concepto de referencia es pensar en ella como una etiqueta que apunta a un objeto existente.

        +-----------------+------------------------+------------+
        |   Variable      |   Dirección de Memoria   |   Valor  |
        |                 |                          |          |
        +-----------------+--------------------------+----------+
        |       a         |      0x7ffeefb           |    20    |
        |       ref       |      0x7ffeefb           |    20    |
        +-----------------+--------------------------+----------+

Una ventaja de las referencias, es que al hacer uso de estructuras de datos complejas, como clases o estructuras, se evita la sobrecarga de copiar grandes cantidades de datos. En su lugar, se puede pasar una referencia a la función, lo que mejora el rendimiento.

Un uso de las referencias en cuando usamos Range-Based For Loops, que permite iterar sobre contenedores sin necesidad de crear copias de los elementos:

```cpp
    #include <iostream>
    #include <vector>

    int main() {
        std::vector<int> vec = {1, 2, 3, 4, 5};

        for (int& elem : vec) {
            elem *= 2; // Esto modifica los elementos del vector
        }

        for (const int& elem : vec) {
            std::cout << elem << " "; // Imprime: 2 4 6 8 10
        }

        return 0;
    }
```

Y si dado el caso de que no se quiera modificar el elemento, se puede usar una referencia constante:

```cpp
    for (const int& elem : vec) {
        std::cout << elem << " "; // Imprime: 2 4 6 8 10
    }
```

## Diferencias entre Punteros y Referencias

Aunque tanto los punteros como las referencias permiten acceder a la memoria de un objeto, existen diferencias clave entre ellos:
1. **Sintaxis**: Las referencias se declaran con `&`, mientras que los punteros se declaran con `*`.
2. **Inicialización**: Las referencias deben ser inicializadas al momento de su declaración, mientras que los punteros pueden ser declarados sin inicialización.
3. **Nullabilidad**: Los punteros pueden ser nulos, mientras que las referencias no pueden ser nulas.
4. **Reasignación**: Una referencia no puede ser reasignada a otro objeto una vez que ha sido inicializada, mientras que un puntero puede apuntar a diferentes objetos a lo largo de su vida útil.
5. **Uso en Funciones**: Las referencias son más seguras y fáciles de usar al pasar argumentos a funciones, ya que no requieren desreferenciación explícita como los punteros.
