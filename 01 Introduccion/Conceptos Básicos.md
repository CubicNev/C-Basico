# Conceptos Básicos

## Estructura de un programa en C++

Los archivos con código fuente de C++ tienen extensión `.cpp`.

La directiva `#include <libreria>` permite importar funcionales que llegue a necesitar. Estas se hacen a nivel de pre-procesamiento
**Por ejemplo**

```C++
#include <iostream>
```

> 📝 **Nota:** Esta líbreria me permite obtener datos de entrada o mostrar datos de salida por medio de la terminal de comandos.

Para lo mismo usaremos `usign namespace std` para usar el espacio de nombres estándar de C++, así podremos usar piezas de código reutilizables para importarlas sin necesidad de escribir desde donde las estamos utilizando. De esta forma, siempre que queramos escribir un programa en C++ esta será su estructura básica.

```C++
#include <iostream>

usign namespace std; // std is short for standard

int main() {}
```

Todos los programas comienzan por la función `main()`, lo que se coloque dentro de main es lo primero que se va a ejecutar dentro del programa.

- Es conocido como **Punto de entrada**
- Dentro de `main()` podemos escribir cualquier cantidad de código que queremos que se ejecute una vez inicie nuestro programa.

> ⚠️ **Cuidado:** Todas las instrucciones (ordenes directas) deben terminar con un punto y coma `;`

### Comentarios

- Con las dobles //

```C++
// Este es un comentario de una línea
```

- Tambien con /**/

```C++
/*
 Esto es un bloque de comentario
*/
```

## Entrada y salida de datos `<iostream>`

También como conocido como *Input/Output stream*. A grandes rasgos `<iostream>` permite la entrada y salida de datos. Un stream es un flujo de datos, por lo que la librería nos da la capacidad de "Stremear" datos en nuestra termina. Hay otras librerías que nos permiten usar más formatos de datos.

### Salida

Para meter datos desde una terminal se puede hacer uso de `cout` que es una instruccion que esta dentro del espacio de nombres estándar (`namespace std`) y forma parte de la libreria `<iostream>`, seguido del operador `<<` (representando **salida** de datos) y después lo que se desea imprimir (Puede ir desde un String literal o una variable).

```C++
int n = 365;
cout << "Hola Mundo" << endl; // Toma cada una de las letras y mandalas a la terminal
cout << n;
```

> 📝 **Nota:** `<iostream>` lo utiliza como una forma de ingresar datos a la terminal
>
> 📝 **Nota:** `endl` se encuentra de la misma forma dentro del `namesace std` y sirve para insertar un salto de línea. Aunque es una mala práctica usarlo, mas info en [Namespaces como malas practicas][1].

### Entrada

Para meter datos desde una terminal se puede hacer uso de `cin` que es una instruccion que esta dentro del espacio de nombres estándar (`namespace std`) y forma parte de la libreria `<iostream>`, seguido del operador `>>` (representando **entrada** de datos) y depués un variable donde se almacenará lo que se ingrese.

```C++
// Recibiendo el dato <edad> desde consola
int edad = 0;
cin >> edad;
```

Podemos almacenar datos o información en variables para poder manipular su estado de acuerdo a lo que necesitemos.

> ⚠️ **Cuidado:** La forma de definir como se guardan los datos depende del tipo de dato que indiques que va a almacenar. Hay que ser cuidadoso con los tipos si vas a manejar, por ejemplo, operaciones matematicas debes usar variables de tipo `int`, `double`, `float`, etc.

`cin` Lee del teclado hasta que encuentra un espacio en blanco, tabulador o nueva linea, o sea una palabra a la vez. Si ingresamos: `1234 hola` se guarda solamente 1234 en la variable.

```C++
int variable;
cin >> variable;
```

Por lo que para leer el “hola” habría que usar una variable adicional como en

```C++
int numero;
string texto;
cin >> numero >> texto;
```

> **Recuerda:** Las variables deben ser del tipo string o bien coincidir con los tipos de datos ingresados.

### info que cura

La 'c' en `cin` y `cout` significa *character*, de tal forma que tienes *character in* y *character out*.

Fuente: [Understanding the Concept of Cin Object in C++ for Beginners][5]

## Compilando y ejecutando el programa

Si estas usando VS Code y tienes alguna extensión para ejecutar, solo dale al play para ejecutar. Pero si quieres hacerlo con comandos debes usar los siguientes comandos:

**Compilar:**

```bash
g++ -o {nombreArchivoSalida} {Archivo Fuente}
```

**Ejecutar:**

```bash
./nombreArchivoSalida
```

## Tipos de Datos

Los tipos de datos son diferentes valores que podemos meter a una computadora. De esta forma se pude manipular información de distintas formas siguiendo las reglas del lenguaje para poder manipular funcionalidad y manejar errores que puede preentar cada tipo. Los principales tipos de datos son los mostrados en la tabla.

| Nombre | Tipo | Ejemplo | Tamaño |
| --- | --- | --- | --- |
| **bool** | valor lógico | `true` | 4 bytes |
| **int** | Número entero | 100 | 4 bytes |
| **float** | Número de punto flotante (decimal) | 0.5 | 4 bytes |
| **double** | Número de punto flotante de doble precisión | 3.141592 | 4 bytes |
| **char** | Carácter ASCII | 'A' o 65 | 1 byte |

### Puntos importantes a considerar

- ¿Por qué los `bool` abarcan tanto espacio si solo tiene dos valores?

La mayoría de tamaños es de 4 bytes (32 bits) debido a la facilidad de manejo de menoria, ya que se suele trabajar con minimo 4 bytes.

- `int` permite almacenar cierto rango de enteros positivos y/o negativos sacrificando un bit para mantener el signo, si se sacrifica el signo podemos hacer un entero positivo más grande.

- `float` Los números decimales, en las computadoras se almacenan usando exponentes, se almacena la base y el exponente.

- `char` La variable puede almacenar valores númericos que representan carácteres. Te puedes referir a la tabla ASCII, con 256 valores llendo del 0 al 255.

> ⚠️ **Cuidado:** No todos los compiladores cumplen al 100% con los estandares o incluso dependiendo la arquitectura se cambien algunas concepciones, asi que conviene siempre checar: tamaño de bytes del tipo de dato, número máximo y mínimo de valores que pueden almacenar y principales tipos de datos soportados.

### Rangos de valores

| Tipo de dato | `bytes` | bits | Rango | N |
| ------------ | -------------- | ---- | ----- | ----------------- |
| **char** | 1 | 8 | -128 a 127 | $2^8 = 256$ |
| **usigned char** | 1 | 8 | 0 a 255 | 256 |
| **signed char** | 1 | 8 | -128 a 127 | 256 |
| **wchar_t** \* | 2 | 16 | -32,768 a 32,767 | 65,536 |
| **short int** | 2 | 16 | -32,768 a 32,767 | 65,536 |
| **int** | 4 | 32 | -2,147,483,648 a 2,147,483,647 | 4,294,967,296 |
| **unsigned int** | 4 | 32 | 0 a 4,294,967,295 | 4,294,967,296 |
| **signed int** | 4 | 32 | -2,147,483,648 a 2,147,483,647 | 4,294,967,296 |
| **unsigned short int** | 2 | 16 | 0 a 65,535 | 65,536 |
| **signed short int** | 2 | 32 | -32,468 a 32,767 | 65,536 |
| **long int** | 4 | 32 | -2,147,483,648 a 2,147,483,647 | 4,294,967,296 |
| **signed long int** | 4 | 32 | -2,147,483,648 a 2,147,483,647 | 4,294,967,296 |
| **unsigned long int** | 4 | 32 | 0 a 4,294,967,295 | 4,294,967,296 |
| **long long** | 8 | 64 | -9.223.372.036.854.775.808 a 9.223.372.036.854.775.807 (-9.2 x 10^15 a 9.2 x 10^15) | 18,446,744,073,709,551,616 ($1.8 \times 10^{16}$) |
| **unsigned long long** | 8 | 64 |De 0 a 18.446.744.073.709.551.615 | $1.8 \times 10^{16}$ |
| **double** | 8 | 64 | 1,7E +/- 308 (15 dígitos) | $1.8 \times 10^{16}$ |
| **float** | 4 | 32 | 3,4E +/- 38 (7 dígitos) | $4,2 \times 10^9$ |
| **long double** | 12 | 96 | - | - |
| **__int128** (solo linux) | 16 | 128 | - | - |

> \* `wchar_t` Representa valores de caracteres “anchos” que se pueden codificar en formato UNICODE. es el tipo de carácter que se usa en cadenas de tipo `std::wstring`. (Revisar [Sistema de tipos de C++][3], [Intervalos de tipo de datos][4])
>
> 📝 **Nota 1:** Al parecer usar `long int` es lo mismo que usar `int`
>
> 📝 **Nota 2:** Puedes omitir la palabra `unsigned` ya que esta implementada por default
>
> 📝 **Nota 3:** C++ no tiene un tipo `byte` implementado pero se puede simular con `unsigned char`

## Variables

Son la forma en la que se almacenan todos los datos relacionadas a la función que realizara un programa durante su ejecución. La sintaxis consiste en:

`Tipo de datos` `nombre de la variable` `<Asignacion de valor (opcional)>` `;`

De tal forma que se pueden crear variables de tipo int, bool, char, etc. Dar un valor incial a una variable, es una buena práctica, el valor inicial depende del caso de uso.

> "Los buenos nombres para variables nos hablan sobre qué se trata ese valor"

Algunas reglas:

- Los nombres de variables no pueden contener espacios.
- No se pueden usar carácteres espaciales.
- No pueden empezar con números o caráteres especiales.

## Constantes y Listas

### Constantes

Declarar una variable como constante sirve para asegurar que su valor no se va a editar durante la ejecucion del programa. De esta forma el compilador no realiza optimizaciones para que la variable se edite durante la ejecución y se evita que su edición cause un problema.

Se usa la palabra `const` antes del tipo de dato, de la siguiente forma.

```C++
const float g = 9.18;
```

> 📝 **Nota:** Una particularidad adicional que tienen las constantes, es que no son almacenadas en memoria al momento de la ejecución, como es el caso de las variables. El compilador es quien se encarga de reemplazar el valor de dicha constante en cada lugar del programa en que se es referenciado. Sirve para **optimizar memoria**.

### Listas

Las listas (arreglos) sirven para guardar conjuntos de valores, de esta forma no se hace una variable por cada valor. Por ejemplo, es mejor tener una lista de edades que una variable por cada edad.

Su declaracion sigue la siguiente sintaxis:

> `tipoDeDato` `nombreVariable``[]` = `{valor1, valor2, ..., valorN}`;

La parte importante son los corchetes [] y {}, unos indican que es una lista (Y dentro también se puede indicar su tamaño), y dentro de los otros se ponen los valores que contiene la lista. Veamoslo de forma práctica:

```C++
/* Ejemplos de formas de declarar una lista */
float R[10] = {2, 32, 4.6, 2, 1, 0.5, 3, 8, 0, 12};
float S[] = {2, 32, 4.6, 2, 1, 0.5, 3, 8, 0, 12};
int N[] = {1, 2, 3, 6};
char Mensaje[] = "Error de lectura";
char Saludo[] = {'H', 'o', 'l', 'a', 0};
```

#### Acceso dentro de una lista

La forma de acceder un valor de la lista, es por el número de lista, lo que se conoce como **índice**, comenzando desde el *0*.

```C++
int lista_edades[] = {18,24,16};

// Asignacion
lista_edades[0] = 19;
lista_edades[1] = 25;
lista_edades[2] = 30;

// Acceso
cout << "Primer elemento: " << lista_edades[0] << endl;
cout << "Segundo elemento: " << lista_edades[1] << endl;
cout << "Tercer elemento: " << lista_edades[2] << endl;
```

## Operadores

Exiten diferentes tipos de operadores:

1. Aritméticos
    - Suma `+`
    - Resta `-`
    - Multiplicación `*`
    - División `/`
2. Comparación
    - Igual que `==`
    - Mayor que `>`
    - Menor que `<`
    - Mayor o igual que `>=`
    - Menor o igual que `<=`
    - Distinto que `!=`
3. Asignación
    - Igual `=`
    - Incremento `+=`
    - Decremento `-=`
    - Dividendo `/=`
    - Aumento en 1 `++`
    - Disminución en 1 `--`
4. Lógicos
    - AND `&&`
    - OR `||`
    - NOT `!`
5. Otros
    - Funciones de consulta `sizeof` `typeof`
    - Corrimiento de bits/Asignación de strings `>>` `<<`
    - Logica de bits `&` `|` `~`

> Puedes ver más operadores ve a [Operadores integrados en C++][2]

Las operaciones funcionan de forma independiente, los resultados pueden ser almacenados en variables o directamente impresos en la terminal.

## Secuencias de escape

Las secuencias de escape se utilizan para definir ciertos caracteres especiales dentro de cadenas de texto.

| Secuencia | Significado |
| --------- | ----------- |
| \a | Carácter de alerta |
| \b | Carácter de retroceso |
| \f | Carácter de alimentación de forma |
| \n | Carácter de línea nueva |
| \r | Retorno de carro (sin alimentación de línea)T |
| \t | Carácter de tabulación horizontal |
| \v | Carácter de tabulación vertical |
| \\\ | Carácter de diagonal invertida |
| \' | Carácter de apóstrofo |
| \" | Carácter de comillas |
| \? | Carácter de signo de interrogación |
| \ | Valor octal, como 07 |
| \x | Valor hexadecimal, como \xFFFF |

## Material extra

- [Pause es mala practica](https://youtu.be/VcLMLEw4sn8?si=pNHlSlGFRDf2XccL)
- [Punteros](https://youtu.be/2ybLD6_2gKM?si=lz0TaPpZ-xSXNwUw)
- [Include](https://www.geeksforgeeks.org/c-c-include-directive-with-examples/)
- [Tipos integrados (C++)](https://learn.microsoft.com/es-es/cpp/cpp/fundamental-types-cpp?view=msvc-170)

[1]: <https://www.youtube.com/watch?v=etQX4Mme2f4> "Namespaces como malas practicas"
[2]: <https://learn.microsoft.com/es-es/cpp/cpp/cpp-built-in-operators-precedence-and-associativity?view=msvc-160> "Operadores integrados en C++"
[3]: <https://learn.microsoft.com/es-es/cpp/cpp/cpp-type-system-modern-cpp?view=msvc-170> "Sistema de tipos de C++"
[4]: <https://learn.microsoft.com/es-es/cpp/cpp/data-type-ranges?view=msvc-170> "Intervalos de tipo de datos"
[5]: <https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-cin#:~:text=The%20%22c%22%20in%20C%2B%2B,belongs%20to%20the%20istream%20class> "Understanding the Concept of Cin Object in C++ for Beginners"
