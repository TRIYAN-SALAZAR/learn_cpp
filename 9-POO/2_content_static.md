# Propiedades y Métodos Estáticos

Los miembros estáticos son importantes para compartir datos y comportamientos entre todas las instancias de una clase. Es particularmente útil cuando se diseñan sistemas que requieren compartir información u ciertas funcionalidades, como el seguimiento de instacias activas de una clase.

<br>

## ¿Qué son los Miembros Estáticos?
Los miembros estáticos pertenecen a la clase y no a un objeto específico. Se comparten entre todos los objetos de la clase y conservan sus valores entre la creación y la destrucción de objetos. Los miembros estáticos se declaran con la palabra clave `static` y se accede a ellos utilizando el nombre de la clase seguido del operador de resolución de ámbito `::`.

1. **Miembros de datos estáticos**
    - Los miembros estáticos son compartidos por todas las instancias de la clase.
    - Se definen fuera de la clase.
    - Se inicializan solo una vez, independientemente del número de objetos creados.

2. **Métodos estáticos**
    - Solo pueden acceder a miembros de datos estáticos y a otras funciones estáticas.
    - No tienen acceso al puntero `this`.
    - Se pueden llamar usando el nombre de la clase.

Ejemplo 1, Miembros de datos estáticos:
```cpp
#include <iostream>
using namespace std;

class Player {
    public:
        static int playerCount; // Miembro de datos estático

        Player() {
            playerCount++; // Incrementa el contador de jugadores al crear un nuevo objeto
        }

        ~Player() {
            playerCount--; // Decrementa el contador de jugadores al destruir un objeto
        }
};

int Player::playerCount = 0; // Inicialización del miembro estático

int main() {
    Player p1;
    cout << "Número de jugadores activos: " << Player::playerCount << endl; // Acceso al miembro estático

    Player p2;
    cout << "Número de jugadores activos: " << Player::playerCount << endl; // Acceso al miembro estático

    return 0;
}
```
Output:
```
Número de jugadores activos: 1
Número de jugadores activos: 2
```

<br>

Ejemplo 2, Métodos estáticos:
```cpp
#include <iostream>
using namespace std;

class Player {
    public:
        static int playerCount;

        Player() {
            playerCount++;
        }

        ~Player() {
            playerCount--;
        }

        static int getPlayerCount() {
            return playerCount;
        }
};

int Player::playerCount = 0;
int main() {
    Player p1, p2;
    cout << "Número de jugadores activos: " << Player::getPlayerCount() << endl;

    Player p3;
    cout << "Número de jugadores activos: " << Player::getPlayerCount() << endl;

    return 0;
}
```

Output:
```
Número de jugadores activos: 2
Número de jugadores activos: 3
```

<br>

## Puntos Clave
### Sobre Miembros Estáticos
1. **Compartir Entre Objetos**
    - Los miembros estáticos son compartidos por todas las instancias de la clase, lo que permite mantener un estado común entre ellas, tal como contadores.

2. **Acceso a Miembros Estáticos**
    - Usando el nombre de la clase: `Clase::miembro_estatico`.
    - Usando un objeto de la clase: `objeto.miembro_estatico` (aunque no es recomendado).

3. **Tiempo de Vida**
    - Los miembros estáticos existen durante toda la vida del programa, desde su declaración hasta el final del programa.

### Sobre Métodos Estáticos
1. **Propósito**
    - Los métodos estáticos se utilizan para acceder o modificar miembros estáticos. Proveen una forma limpia y controlada de gestionar información compartida.

2. **Reglas de Acceso**
    - No pueden acceder a miembros no estáticos directamente, ya que no tienen un contexto de instancia (`this`).
    - Pueden llamar a otros métodos estáticos y acceder a miembros estáticos.

3. **Llamada a Métodos Estáticos**
    - Usando el nombre de la clase: `Clase::metodo_estatico()`.
    - Usando un objeto de la clase: `objeto.metodo_estatico()` (aunque no es recomendado).
