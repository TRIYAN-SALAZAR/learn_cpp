# nullptr EN C++

`nullptr` es una palabra clave introducida en C++11 como una mejor alternativa a `NULL`. Si bien `NULL` a servido su propósito durante mucho tiempo, ha tenido algunas limitaciones que puede procovar errores o codigo ambiguo. 

## El problema con NULL
`NULL` es una macro que generalmente se define como 0. Esto quiere decir que `NULL`esencialmente es una constate entera y no un tipo definido. Mientras que esto funciona en la mayoría de los casos, puede causar problemas en ciertas situaciones, especialmente cuando se trata de sobrecarga de funciones o cuando se realizan conversiones automaticas del tipo entero.

Considera el siguiente ejemplo:
```cpp
    #include <iostream>
    using namespace std;

    int fun(int x) {
        cout << "Se llamó a la funcion: fun(int)" << endl;
    }

    int fun(int *x) {
        cout << "Se llamó a la funcion: fun(int *)" << endl;
    }

    int main() {
        fun(NULL); // ¿A qué función se llama?
        return 0;
    }
```

En este caso, el compilador no puede determinar a qué función llamar, ya que `NULL` puede ser interpretado como un entero o un puntero nulo, lo que genera ambigüedad.

Output:
```bash
    16:13: error: call of overloaded 'fun(NULL)' is ambiguous
     fun(NULL);
```

## nullptr una alternativa segura
Para resolver estos problemas se introdujo `nullptr` en cual es una palabra clave reservada y que literalmente representa un puntero nulo y es del tipo `std::nullptr_t`.

### Puntos claves de nullptr
1. **Tipo seguro**: `nullptr` es del tipo `std::nullptr_t`, lo que significa que no puede ser confundido con un entero o cualquier otro tipo de dato.
2. **Sobrecarga de funciones**: `nullptr` elimina la ambigüedad en la sobrecarga de funciones.
3. **Compatibilidad**: `nullptr` puede ser utilizado con cualquier tipo de puntero.

Ejemplo arreglando la ambigüedad del ejemplo anterior:
```cpp
    #include <iostream>
    using namespace std;

    int fun(int x) {
        cout << "Se llamó a la funcion: fun(int)" << endl;
    }

    int fun(int *x) {
        cout << "Se llamó a la funcion: fun(int *)" << endl;
    }

    int main() {
        fun(nullptr); // Llama a la función con puntero nulo
        fun(0); // Llama a la función con entero
        return 0;
    }
```