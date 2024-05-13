# Conceptos Básicos

## Estructura de un programa en C++

Los archivos con código fuente de C++ tienen extensión `.cpp`.

La directiva `#include <libreria>` permite importar funcionales que llegue a necesitar.
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

## Salida

Se hace uso de `cout` de la libreria `<iostream>` seguido del operador `<<` y luego el mensaje que se quiere mostrar.

## Compilando y ejecutando el programa

Si estas usando VS Code y tienes alguna extensión para ejecutar, solo dale al play para ejecutar. Pero si quieres hacerlo con comandos debes usar los siguientes comandos:

**Compilar:**

```bash
g++ -o <nombreArchivoSalida> main.cpp
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

## Variables

Son la forma en la que se almacenan todos los datos relacionadas a la función que realizara un programa durante su ejecución. La sintaxis consiste en:

`Tipo de datos` `nombre de la variable` `<Asignacion de valor (opcional)>` `;`

De tal forma que se pueden crear variables de tipo int, bool, char, etc. Dar un valor incial a una variable, es una buena práctica, el valor inicial depende del caso de uso.

## Material extra

- [Namespaces como malas practicas](https://www.youtube.com/watch?v=etQX4Mme2f4)
- [Pause es mala practica](https://youtu.be/VcLMLEw4sn8?si=pNHlSlGFRDf2XccL)
- [Punteros](https://youtu.be/2ybLD6_2gKM?si=lz0TaPpZ-xSXNwUw)
- [Include](https://www.geeksforgeeks.org/c-c-include-directive-with-examples/)
