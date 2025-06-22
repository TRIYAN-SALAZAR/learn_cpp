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
