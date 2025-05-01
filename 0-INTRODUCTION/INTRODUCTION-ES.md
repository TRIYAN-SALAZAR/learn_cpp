#INTRODUCCION

<h3>Primer paso en c++</h3>

Copia y pega el siguiente codigo en un archivo adjunto.
```c++
    #include <iostream>

    using namespace std ;

    int main()
    {
        cout << "Hola Mundo"  ; 
        return 0 ;
    }
```

Output:
```plaintext
Hola mundo
```

<h3>Vamos a entender el codigo</h3>

1. ```c++ 
    #include <iostream>
    ```
Es la directiva del preprocesador, ya que las lineas marcadas con "#" son las primeras en ser procesadas al momento de la compilicacion. Siendo que el preprocesador reemplaza estas lineas con codigo relevante antes del momento de complicacion. 
En otro caso la directiva "iostream" simplemente es una libreria llamada: "stands for Input-Output Stream". Esta contiene el objeto "cout" para mostrar mensajes en pantalla.

2. ```c++
    using namespace std ;
    ```
Esto es una directiva del preprocesador que nos permite usar los objetos de la libreria "iostream" sin tener que escribir "std::" antes de ellos.

3. ```c++
    int main() {}
    ```
Esto es una funcion que se ejecuta al momento de la compilacion. En este caso la funcion "main" es la que se encarga de mostrar el mensaje en pantalla.

4. ```c++
    cout << "Hola Mundo"  ;
    ```
Es la instruccion que se ejecuta dentro de la funcion "main". En este caso la instruccion "cout" es la que se encarga de mostrar el mensaje en pantalla. Y el operador "<<" es el que se encarga de enviar la informacion a la pantala de salida. Mientras que std::cout representa el estandar de salida de pantalla (usualmente el monitor).

5. ```c++
    return 0 ;
    ```
Esta instruccion es la que se encarga de finalizar la ejecucion del programa.

<h3>Comentarios en c++</h3>

Tenemos dos formas de hacer comentarios en c++. Siendo de una sola linea o de multiples lineas. Los comentarios no son interpretados por el compilador y son usados para documentar el codigo, haciendo que sea mas facil entender y mantener a lo largo del tiempo.

```c++
    // Comentario de una sola linea
    /* 
        Comentario de multiples lineas 
    */

   #include <iostream>
   //...
```

Esta es una pequeña introduccion a los conceptos basicos de c++, puede estar sujetas a cambios.