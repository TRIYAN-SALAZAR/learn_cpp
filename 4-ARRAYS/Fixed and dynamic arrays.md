## FIXED AND DYNAMIC ARRAYS

### Fixed Arrays
Un arreglo fijo es aquel cuyo tamaño se define en el momento de su declaración y no puede cambiar durante la ejecución del programa. Esto significa que una vez que se ha creado un arreglo fijo, no se puede agregar ni eliminar elementos, y su tamaño permanece constante.

```cpp
    #include <iostream>
    using namespace std;

    int main() {
        // Declaración de un arreglo fijo
        int edades[5] = {20, 21, 22, 23, 24};

        // Acceso a los elementos del arreglo
        cout << "La primera edad es: " << edades[0] << endl;

        return 0;
    }
```

### Dynamic Arrays
Un arreglo dinámico es aquel cuyo tamaño puede cambiar durante la ejecución del programa. Esto significa que se pueden agregar o eliminar elementos según sea necesario, lo que proporciona una mayor flexibilidad en comparación con los arreglos fijos.

```cpp
    #include <iostream>
    using namespace std;

    int main() {
        // Declaración de un arreglo dinámico
        int* edades = new int[5];
        edades[0] = 20;
        edades[1] = 21;
        edades[2] = 22;
        edades[3] = 23;
        edades[4] = 24;

        // Acceso a los elementos del arreglo
        cout << "La primera edad es: " << edades[0] << endl;

        // Liberar la memoria del arreglo dinámico
        delete[] edades;

        return 0;
    }
```

### Dynamic Size Array - Standar Library STL
La biblioteca estándar de C++ (STL) proporciona una clase llamada `std::vector` que permite crear arreglos dinámicos de manera más sencilla y segura. Un `std::vector` puede crecer y decrecer según sea necesario, y maneja automáticamente la memoria.

```cpp
    #include <iostream>
    #include <vector>
    
    int main() {
        // Declaración de un vector dinámico
        std::vector<int> edades = {20, 21, 22, 23, 24};

        // Acceso a los elementos del vector
        std::cout << "La primera edad es: " << edades[0] << std::endl;

        // Agregar un nuevo elemento al vector
        edades.push_back(25);

        // Acceso al último elemento del vector
        std::cout << "Nueva edad agregada: " << edades.back() << std::endl;

        return 0;
    }
```