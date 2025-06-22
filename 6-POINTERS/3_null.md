# NULL en C++

`NULL` es una constante simbolica utilizada para represantar un puntero nulo, ejemplo de ello es un puntero que no apunta a ninguna dirección de memoria valida. Siendo importante el comprender `NULL` y sus casos de uso para la gestión segura de punteros en programas C++.

**Definicion**
`NULL` tipicamente es definido como 0 y representa un constante de puntero nulo. Utilizado para indicar que un puntero no apunta a ninguna dirección de memoria valida.

**¿Cómo se define NULL?**
- Uso correcto: `int *ptr = 0;` Compila bien y null es equivalente a 0.
- Uso incorrecto: `int *ptr = 10;` Error de compilación: El puntero debe almacenar una dirección de memoria válida.

Ejemplo:
```cpp
    #include <iostream>
    using namespace std;

    int main() {
        int *ptr = NULL;
        if (ptr == NULL) {
            cout << "El puntero es nulo." << endl;
        }
        return 0;
    }
```

**NOTA**: No utilizar `NULL` al hacer uso de punteros no inicializados lo vuelve inseguro y puede llegar a apuntar a direcciones de memoria aleatorias, lo que genera un comportamiendo indefinido.

## Aplicaciones de NULL
1. **Para punteros sin dirección de memoria válida**
2. **En funciones que devuelven resultados inválidas**
3. **Para indicar el final de estructuras de datos**: como listas enlazadas, donde el último nodo apunta a `NULL` para indicar que no hay más nodos.

## Buenas prácticas
1. **Inicializar punteros a NULL**: Siempre inicializa los punteros a `NULL` al declararlos para evitar comportamientos indefinidos.
2. **Verificar punteros antes de usarlos**: Antes de desreferenciar un puntero, verifica si es `NULL` para evitar errores de segmentación o comportamientos indefinidos.