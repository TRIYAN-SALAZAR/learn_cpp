# HERENCIA
La herencia es un concepto fundamental en la programación orientada a objetos, permitiendo a las clases reutilizar codigos y extender su funcionalidad.

## ¿Qué es la herencia?
La herencia permite a una clase heredar propiedades y métodos de otra clase. Esto ayuda en la reduccion de codigo redundante y mejorando la mantenibilidad.
Por ejemplo, si queremos contruir un sistema de gestion de un colegio, puede que tengamos clases como `Estudiante` y `Profesor` las cuales comparten ciertas propiedades como `nombre`, `edad`, `id`, etc. Estos atributos compartidos se pueden mover a una clase base llamada `Persona`, donde `Estudiante` y `Profesor` heredan de `Persona`.

Ejemplo de herencia:
```cpp
class Persona {
    protected:
        string nombre;
        string direccion;
        int edad;
        int id;
    public:
        Persona(string n, string d, int e, int i) : nombre(n), direccion(d), edad(e), id(i){}
};

class Estudiante : public Persona {
    private:
        string carrera;
    public:
        Estudiante(string n, string d, int e, int i, string c) : Persona(n, d, e, i), carrera(c){}

        void mostrarInformacion() {
            cout << "Nombre: " << nombre << ", Carrera: " << carrera << endl;
        }
};

int main() {
    Estudiante est("Juan", "Calle Falsa 123", 20, 1, "Ingenieria");
    est.mostrarInformacion();
    return 0;
}
```

Explicación:
1. La clase `Persona` es la clase base que contiene atributos comunes. Atributos los cuales son marcados como `protected` para que las clases derivadas puedan acceder a ellos.
2. La clase `Estudiante` hereda de `Persona` usando la sintaxis `: public Persona` y se agrega un nuevo atributo y metodo.
3. Sintaxis de herencia. La clase `Estudiante` hereda de `Persona` usando el especificador de acceso `public`.

<br>

## Los especificadores de acceso en la herencia
Los especificadores de acceso (`public`, `protected`, `private`) determinan la visibilidad de los miembros de la clase base en la clase derivada.
- **Public**: Los miembros públicos de la clase base son accesibles desde la clase derivada y desde fuera de ella.
- **Protected**: Los miembros protegidos de la clase base son accesibles desde la clase derivada, pero no desde fuera de ella.
- **Private**: Los miembros privados de la clase base no son accesibles desde la clase derivada ni desde fuera de ella.

### El especificador de acceso `protected`
`protected` es particularmente útil en la herencia. Ya que las propiedades y métodos marcados como `protected` son:
- Accesibles desde la clase derivada.
- Accesibles desde la clase base.
- No accesibles desde fuera de la jerarquía de clases.