# VARIABLES Y TIPOS DE DATOS

Las variables son la unidad basica de almacenamiento de informacion en un programa. Donde cada lenguaje contiene distintos tipos de datos para almacenar informacion.
Cabe mencionar que en c++ las variables se deben de declarar antes de ser usadas.

reglas para declarar una variable:

- El nombre de la variable debe ser significativo y descriptivo.
- Puede tener letras mayusculas, minusculas, guion bajo y numeros.
- No puede empezar con un numero.
- No puede contener espacios en blanco.
- No puede ser una palabra reservada.
- No puede contener simbolos especiales.

Sintaxis para declarar una variable: data_type variable_name = value;

```c++
    int x = 5;
    float y = 3.14;
    char z = 'A';
    bool b = true;
```

Otro formas de declarar variables:

```c++
    int x;
    x = 5;

    float y, z, m;
    y = 3.14;
    z = 2.71;
    m = y + z;
```

Tambien existen distintas convenciones para declarar variables, hacer esto es una buena practica para mantener un codigo limpio y legible. Por lo que se tienen las siguientes convenciones:

- CamelCase: primera letra minuscula y las demas en mayuscula
- snake_case: todas las letras en minuscula y separadas por guiones bajos
- For Constats: todas las letras en mayuscula y separadas por guiones bajos

```c++
    char userName = "Triyan";
    char user_name = "Triyan";
    const char USER_NAME[] = "Triyan";
```

# TIPOS DE DATOS

En c++ existen distintos tipos de datos para almacenar informacion. Los cuales se pueden clasificar en datos primitivos y no primitivos.

<h3> DATOS PRIMITIVOS </h3>
- Enteros
- Flotantes
- Caracter
- Booleanos

<h3> DATOS NO PRIMITIVOS </h3>
- Array
- Punteros
- Estructuras
- User Defined Types