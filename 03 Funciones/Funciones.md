# Funciones

## ¿Qué son las funciones en C++?

Son una características de los lenguajes de información que nos permite aislar bloques de codigo para poder invocarlos posteriormente. Por ejemplo, algoritmos para hacer subprocesos pasando datos de entrada y retornando alguna salida.

Funcionan como una caja negra que se le da un nombre, una entrada y da alguna cosa a la salida (o no)

### Sintaxis

Consiste en 3 partes:

1. Qué va a retornar.
2. Su nombre.
3. Qué va a recibir.

```C++
/* La función "suma" retorna un entero, y recibe dos número enteros a y b*/
int suma(int a, int b) {
    return a + b;
}
```

> **Nota:** Para que una función regrese datos, debes usar la palabra reservada `return`

Otra funcionalidad de las funciones, es poner valores default, en especifico para el ultimo argumento.

```C++
/* Valor default: b = 1*/
int suma(int a, int b = 1) {
    return a + b;
}
```
