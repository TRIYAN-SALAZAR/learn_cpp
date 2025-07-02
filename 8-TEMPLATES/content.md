# TEMPLATES

Los templates o plantillas son una de las características más poderosas de c++, ya que permiten crear código genérico, reutilizable y de tipo seguro. Permitiendo a los desarrolladores escribir código que puede trabajar con cualquier tipo de dato, sin necesidad de duplicar el código para cada tipo específico.

### ¿Qué son los templates?
Los templates son una forma de definir funciones y clases que pueden operar con diferentes tipos de datos, los cuales se determinan en tiempo de compilación. Es la idea de escribir codigo una sola vez y reutilizarlo para diferentes tipos de datos.

### Características de los templates
- **Escribelo una sola vez**: Los templates permiten escribir código genérico que puede ser reutilizado para diferentes tipos de datos sin duplicación.
- **Codigo Generado por el Compilador**: El compilador genera código específico para cada tipo de dato utilizado con el template.
- **Evita la redundancia**: Ahorra el esfuerzo al reutilizar la misma logica para diferentes tipos de datos.
- **Mejor que Macros**: A diferencia de las macros, los templates realizan la verificacion de tipos durante tiempo de complicacion, haciendo al codigo mas seguro y menos propenso a errores.

### Tipos de Templates
- **Function Templates**: Usados para crear funciones genericas, por ejemplo sorting, searching, etc.
- **Class Templates**: Usados para crear clases genericas, ejemplo para estructuras de datos como listas, pilas, colas, etc.

### Ejemplo Funcion Template
**Funcion para hallar el maximo**
```cpp
    #include <iostream>
    using namespace std;

    template <typename T>
    T findMax(T a, T b) {
        return (a > b) ? a : b;
    }

    int main() {
        cout << "Max of 10 and 20: " << findMax(10, 20) << endl; // int
        cout << "Max of 10.5 and 20.5: " << findMax(10.5, 20.5) << endl; // double
        cout << "Max of 'A' and 'B': " << findMax('A', 'B') << endl; // char
        return 0;
    }
```

## Sintaxis de los Templates
### Sintaxis de Function Template
```cpp
    template <typename T>
    T functionName(T parameter1, T parameter2) {
        // cuerpo de la funcion
    }
```

### Sintaxis de Class Template
```cpp
    template <typename T>
    class ClassName {
    public:
        T memberFunction(T parameter) {
            // cuerpo de la funcion
        }
    };
```

### Uso avanzado: Parametros que no son de tipo
Los templates también pueden aceptar parámetros que no son de tipo, como valores constantes. Esto permite crear templates más flexibles y reutilizables.
**Ejemplo**: Donde un **limite** sobre el tamaño de un arreglo es forzado a utilizar parametro que no es de tipo.
```cpp
    template <typename T, int limit>
    T arrMax(T arr[], int limit) {
        if(arr.size() > limit) {
            throw std::out_of_range("Array size exceeds limit");
        }

        T res = arr[0];
        for(int i = 1; i < limit; i++) {
            if(arr[i] > res) {
                res = arr[i];
            }
        }
        return res;
    }

    int main() {
        try {
            int arr[] = {1, 2, 3, 4, 5};
            int maxVal = arrMax<int, 5>(arr, 5);
            cout << "Max value: " << maxVal << endl;
        } catch (const std::out_of_range& e) {
            cout << e.what() << endl;
        }
    }
```

## Diferencia entre Templates y Macros
Los templates son una característica del lenguaje C++ que permite crear código genérico y reutilizable, mientras que las macros son una característica del preprocesador que permite definir sustituciones de texto antes de la compilación. Las macros no realizan verificación de tipos y pueden llevar a errores difíciles de depurar, mientras que los templates son seguros y permiten la verificación de tipos en tiempo de compilación.

### Ejemplo
**Macro para hallar el maximo**
```cpp
    #define MAX(a, b) ((a) > (b) ? (a) : (b))
```

**Template para hallar el maximo**
```cpp
    template <typename T>
    T max(T a, T b) {
        return (a > b) ? a : b;
    }
```

