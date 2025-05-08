# Entrada y Salida de datos en C++

Ya vimos de forma indirecta el flujo de datos en c++, pero profundicemos un poco mas en esto.
En C++ tenemos tres librerias para manejar el flujo de datos:
- iostream
- iomanip
- fstream

Cada una con sus propias formas de trabajar. En este caso nos enfocaremos en la libreria `iostream` y en sus objetos `cout` y `cin`.

Para mostrar informacion con el objeto `cout` usamos el operador de insercion `<<`. Por otro lado para leer datos de entrada usamos el operador de extraccion `>>` junto al objeto `cin`.

<b>Ejemplo</b>

```c++
    #include <iostream>

    using namespace std;
    int main() {
        int age;
        char name[] = "Jorge Alejandro";

        cout << "Tu nombre es " << name;
        cout << "Por favor ingresa tu edad: \n";
        cin >> age;
        cout << "\nTu edad es de " << age << "años";

        return 0;
    }

```

Pero estos no son los unicos objetos de iostream, sino que, tambien tenemos otros objetos como `cerr` y `clog`.
`cerr` se usa para mostrar errores y `clog` se usa para mostrar mensajes de log. Ambos objetos funcionan de la misma manera que `cout`, pero tienen algunas diferencias en su funcionamiento.
`cerr` es un flujo de salida sin buffer, lo que significa que los datos se envían inmediatamente a la salida estándar. Por otro lado, `clog` es un flujo de salida con buffer, lo que significa que los datos se almacenan en un buffer antes de enviarse a la salida estándar.

```c++
    #include <iostream>

    using namespace std;
    int main() {

        cerr << "\nError: No se pudo encontrar el archivo\n";

        return 0;
    }

```

```c++
    #include <iostream>

    using namespace std;
    int main() {

        clog << "\nLog: Se ha iniciado el programa\n";

        return 0;
    }

```
