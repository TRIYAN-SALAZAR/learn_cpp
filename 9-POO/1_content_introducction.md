# Programación Orientada a Objetos

La programación orientada a objetos (POO) es un paradigma de programación que utiliza "objetos" para representar datos y comportamientos. Los objetos son instancias de clases, las cuales son plantillas que definen las propiedades y métodos que los objetos pueden tener.

Hay que tener en cuenta que una clase es un modelo que no tiene memoria fisica asignada, hasta que se cree un objeto a partir de ella(instancia de la clase), el cual se le proporciona una ubicación en memoria.

### Definición de una clase e instanciación de un objeto

**sintaxis:**

```
    class <name_class> {
        <access_modifier>:
            // data members
            // constructors
            // methods-member functions
            // destructors
    };
```

**Ejemplo:**

```cpp
    #include <iostream>
    using namespace std;

    class Empleados {
        public:
            string nombre, id;
            int edad, experiencia;

        Empleados(string nombre, string id, int edad, int experiencia) {
            this->nombre = nombre;
            this->id = id;
            this->edad = edad;
            this->experiencia = experiencia;
        }

        void mostrarDatos() {
            cout << "Nombre: " << this->nombre << endl;
            cout << "ID: " << this->id << endl;
            cout << "Edad: " << this->edad << endl;
            cout << "Experiencia: " << this->experiencia << endl;
        }

        void estaTrabajando() {
            cout << "El empleado " << this->nombre << " está trabajando." << endl;
        }
    };

    int main() {
        //Instancia de forma directa
        Empleados emp1("Juan Perez", "EMP001", 30, 5);

        //Instancia de forma indirecta
        Empleados *emp2 = new Empleados("Ana Gomez", "EMP002", 28, 3);

        emp1.mostrarDatos();
        emp1.estaTrabajando();

        emp2->mostrarDatos();
        emp2->estaTrabajando();

        return 0;
    }
```

### Clases vs Estructuras

En C++, una clase como una estructura son lo mismo pero con algunas diferencias.

Lo mas importante de ello es la seguridad. Una estructura no es segura y no puede ocultar sus detalles de implementación al usuario final, mientras que, una clase es segura y puede ocultar sus detalles de programación y diseño.

A continuación un ejemplo que explica esta diferencia:

```cpp
    #include <bits/stdc++.h>
    using namespace std;

    struct A {
        int x; // x is public
    };

    class B {
        int x; // x is private
    };

    int main()
    {
        A a;
        B b;

        cout << a.x << endl;
        cout << b.x << endl;

        return 0;
    }
```

Output:
```
    prog.cpp: In function 'int main()':
    prog.cpp:10:9: error: 'int B::x' is private
        int x; // x is private
            ^
    prog.cpp:19:15: error: within this context
        cout << b.x << endl;
                ^
```

El codigo genera un error de compilación debido a que se quiere acceder a un miembro privado de la clase `B`, lo cual no es permitido.

<br>

## Constructores

Los constructores y destructores son funciones especiales que se utilizan para inicializar y limpiar objetos, respectivamente. Siendo vitales para la gestion eficiente de recursos, especialmente cuando se trata de la asignación de memoria dinámica o otros recursos del sistema.

<br>

### ¿Qué es un constructor?
Los constructores son funciones especiales que tienen el mismo nombre de la clase, sin tipo de retorno y se invocan automáticamente cuando se crea un objeto de esa clase. Los constructores pueden ser:

- **Por defecto**: No tienen parámetros y se utilizan para inicializar los miembros de datos con valores predeterminados.
- **Con parámetros**: Aceptan argumentos para inicializar los miembros de datos con valores específicos al momento de crear el objeto.
- **Copia**: Se utilizan para crear un nuevo objeto como una copia de otro objeto existente.

**Puntos Clave**
- Se invocan automáticamente al crear un objeto.
- No tienen tipo de retorno, ni siquiera `void`.
- Pueden sobrecargarse, es decir, puedes tener múltiples constructores con diferentes parámetros en la misma clase.

<br>

Ejemplo 1, Constructor por defecto y con parámetros:

```cpp
    #include <iostream>
    using namespace std;

    class Point {
        private:
            int x, y;
        public:
            // Constructor por defecto
            Point() {
                x = 0;
                y = 0;
            }

            Point(int x1, int y1) {
                x = x1;
                y = y1;
            }

            void location() {
                cout << "Point is at (" << x << ", " << y << ")" << endl;
            }
    };

    int main() {
        Point p1; // Llama al constructor por defecto
        Point p2(10, 20); // Llama al constructor con parámetros

        p1.location(); // Output: Point is at (0, 0)
        p2.location(); // Output: Point is at (10, 20)

        return 0;
    }
```

<br>

Ejemplo 2, lista de inicialización:

```cpp
    #include <iostream>
    using namespace std;

    class Point {
        private:
            int x, y;
        public:
            // Constructor por defecto
            Point() : x(0), y(0) {}

            // Constructor con parámetros
            Point(int x1, int y1) : x(x1), y(y1) {}
            
            void location() {
                cout << "Point is at (" << x << ", " << y << ")" << endl;
            }
    };

    int main() {
        Point p1; // Llama al constructor por defecto
        Point p2(10, 20); // Llama al constructor con parámetros

        p1.location(); // Output: Point is at (0, 0)
        p2.location(); // Output: Point is at (10, 20)

        return 0;
    }
```

<br>

Ejemplo 3, Inicialización del constructor sin lista de inicializadores:
```cpp
    #include <iostream>
    using namespace std;

    class Test {
        public:
            Test()
            {
                cout << "Default" << endl;
            }

            Test(int x)
            {
                cout << "Parameterized" << endl;
            }
    };

    class Main {
        Test t1;

        public:
        Main() {
            t1 = Test(10);
        }
    };

    int main() {
        Main m;
        return 0;
    }
```

Output:
```
    Default
    Parameterized
```

Explicación:
1. En este ejemplo, el constructor por defecto de la clase `Test` se llama al crear un objeto de la clase `Main`, lo que imprime "Default".
2. Luego, dentro del constructor de `Main`, se crea un objeto `Test` con un parámetro, lo que llama al constructor parametrizado de `Test` e imprime "Parameterized".

- **Problema**: El constructor se inicializa dos veces, lo que conduce a problemas en el rendimiento.

<br>

Ejemplo 4, Constructor con lista de inicializadores:
```cpp
    #include<iostream>
    using namespace std;

    class Test {
    public:
        Test(int x) {
            cout << "Parameterized: " << x << "\n";
        }
    };

    class Main {
        Test t;
    public:
        Main() : t(10) {} // Using initializer list
    };

    int main() {
        Main m;
        return 0;
    }
```
Output:
```
    Parameterized: 10
```
Explicación:
1. Aqui, la clase `Main` utiliza una lista de inicializadores para inicializar el objeto `t` de prueba.
- **Ventaja**: El objeto `t` es inicializado directamente, evitando la sobrecarga de la inicialización por defecto seguida de la asignación.

<br>

## Constructor Copia
El constructor copia crea un nuevo objeto como una copia de otro objeto ezistente. Si no se define explícitamente, el compilador genera uno por defecto que realiza una copia superficial. Para la memoria dinámica, es necesario un constructor de copias definido por el usuario para realizar una copia profunda.

<br>

Ejemplo 5, Copia Superficial vs Copia Profunda:
```cpp
    #include <iostream>
    using namespace std;

    class Test {
        private:
            int *ptr;
        public:
            Test(int x) {
                ptr = new int(x); // Asignación dinámica de memoria
            }

            Test(const Test &t) {
                ptr = new int(*(t.ptr)); // Copia profunda
            }

            void set(int x) {
                *ptr = x;
            }

            void get() {
                cout << "Value: " << *ptr << endl;
            }

            ~Test() {
                delete ptr; // Liberar memoria
            }
    };

    int main() {
        Test t1(10); // Crear objeto t1
        Test t2 = t1; // Crear objeto t2 como copia de t1
        
        t2.set(20); // Cambiar valor en t2

        t1.get(); // Output: Value: 10 (t1 no se ve afectado)
        t2.get(); // Output: Value: 20 (t2 tiene su propio valor)
        return 0;
    }
```

Output:
```
    Value: 10
    Value: 20
```

Explicación:
1. El constructor `Test(int x)` asigna memoria dinámica para un entero y lo inicializa con x.
2. El constructor de copia `Test(const Test &t)` asigna nueva memoria y copia el valor del objeto original para evitar problemas de memoria compartida.
3. Sin el constructor de copia personalizado, ambos objetos compartirían el mismo puntero, lo que podría causar errores al liberar la memoria.
4. El destructor `~Test()` libera la memoria asignada para evitar fugas de memoria.

<br>

## Destructores
Los destructores son funciones especiales que libera los recursos asignados cuando el objeto es borrado o destruido. Estos tienen el mismo nombre que la clase, pero precedidos por un símbolo de tilde `~` y no tienen parámetros ni tipo de retorno.

<br>

Ejemplo 6, Destructor:
```cpp
    #include <iostream>
    using namespace std;

    class Test {
        int x
        public:
            Test(int val) : x(val) {
                cout << "Constructor called with value: " << x << endl;
            }

            ~Test() {
                cout << "Destructor called for value: " << x << endl;
            }
    };

    int main() {
        Test t1(10);
        Test t2(20);

        return 0;
    }
```

Output:
```
    Constructor called with value: 10
    Constructor called with value: 20
    Destructor called for value: 20
    Destructor called for value: 10
```

Explicación:
1. El constructor se llama al crear los objetos `t1` y `t2`, inicializando sus valores.
2. Cuando el programa termina, los destructores se llaman automáticamente en orden inverso al de creación, liberando los recursos asignados.