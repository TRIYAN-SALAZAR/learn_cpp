# STRUCT

Los `structs` en C++ son una forma de agrupar diferentes tipos de datos bajo un mismo nombre. Siendo similares a las clases, aunque con diferencias entre si.

### ¿Por qué usar `struct`?

Los `structs` son útiles cuando se desea crear un tipo de dato compuesto en situaciones como:

- Guardar informacion de coordenadas 2D o de un punto con valores `x` e `y` respectivamente.
- Manejar datos como los detalles de un libro u estudiante.

### Sintaxis de un `struct`

```cpp
    struct NombreStruct {
        TipoDato miembro1;
        TipoDato miembro2;
        // ...
    };
```

Ejemplo de un `struct` que representa un punto en 2D:
```cpp
    struct Punto2D {
        float x;
        float y;
    };
    #include <iostream>
    int main() {
        Punto2D punto;
        punto.x = 3.5;
        punto.y = 2.0;

        std::cout << "Punto: (" << punto.x << ", " << punto.y << ")" << std::endl;
        return 0;
    }
```

**Nota**: Una diferencia con C, es que en c++ los `structs` pueden omitir el uso de `struct` al momento de declarar una variable.

## Struct vs Class

C++ proporciona dos formas de definir tipos de datos compuestos: `struct` y `class`. Aunque pueden parecer similares, existen diferencias sutilies entre ellas.

### Diferencias
**Visibilidad por defecto**: En un `struct`, los miembros son públicos por defecto, mientras que en una `class`, son privados por defecto.

```cpp
    struct MiStruct {
        int x; // Público por defecto
    };

    class MiClase {
        int x; // Privado por defecto
    };

    int main() {
        MiStruct s;
        s.x = 10; // Válido, x es público

        MiClase c;
        // c.x = 10; // Error, x es privado
        return 0;
    }
```

**Struct Puede actuar como una clase**: Los structs en c++ soportan todas las características de una clase.
    - Herencia
    - Métodos
    - Constructores y destructores

Ejemplo de `struct` con constructor y método:
```cpp
    struct Persona {
        std::string nombre;
        int edad;

        // Constructor
        Persona(std::string n, int e) : nombre(n), edad(e) {}

        // Método
        void mostrar() {
            std::cout << "Nombre: " << nombre << ", Edad: " << edad << std::endl;
        }
    };

    int main() {
        Persona p("Juan", 30);
        p.mostrar(); // Imprime: Nombre: Juan, Edad: 30
        return 0;
    }
```

### ¿Cual elegir?

- **Utiliza `struct`** cuando:
  - Cuando desee agrupar varios elementos de datos relacionados.
  - Cuando tu objeto no requiere de comportamientos complejos.
- **Utiliza `class`** cuando:\
  - Cuando te preocupas por la ocultación de datos y los principios de diseño orientados a objetos como la encapsulación.
  - Cuando tu objeto requiere de métodos complejos o interactuar con otros objetos.

## Punteros y Referencias en Structs

Un puntero a una estructura permite acceder a los miembros de una estructura de forma indirecta. Cuando accedes a algun miembro de una estructura a través de un puntero, se utiliza el operador flecha `->` en lugar de `.`.

Ejemplo, puntero a un `struct`:
```cpp
    struct Punto {
        int x;
        int y;
    };

    int main() {
        Punto p = {10, 20};
        Punto* ptr = &p; // Puntero a la estructura

        // Acceso a miembros usando el operador flecha
        std::cout << "x: " << ptr->x << ", y: " << ptr->y << std::endl; // Imprime: x: 10, y: 20
        return 0;
    }
```

### Pasando structs como argumentos a funciones
Los `structs` pueden pasarse a funciones ya sea por valor, por referencia o por puntero.

- **Por valor**: Se crea una copia del `struct` y se pasa a la función. Esto es ineficiente para `structs` grandes sumado el hecho de que no se permite la modificacion al `struct` original.
```cpp
    void imprimirPunto(Punto p) {
        std::cout << "x: " << p.x << ", y: " << p.y << std::endl;
        p.x += 5; // No afecta al struct original
    }
```

- **Por referencia**: Pasarse por referencia evita la creacion de una copia del struct y permite a la funcion de modificar el `struct` original.
```cpp
    void modificarPunto(Punto& p) {
        p.x += 5; // Modifica el struct original
    }
```

Usar `const` asegura que la funcion no pueda modificar el `struct` original.
```cpp
    void imprimirPunto(const Punto& p) {
        std::cout << "x: " << p.x << ", y: " << p.y << std::endl;
    }
```

- **Por puntero**: Pasando por medio de un puntero es otro metodo eficiente. Se puede acceder a los campos u miembros del `struct` usando el operador flecha `->`.
```cpp
    void modificarPunto(Punto* p) {
        p->x += 5; // Modifica el struct original
        cout << "Nuevo x: " << p->x << endl;
    }
```
