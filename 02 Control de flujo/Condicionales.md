# Condicionales

## El condicional `if`

Sirven para la toma de decisiones durante la ejecucion del programa para ejecutar algoritmos más precisos y complejos.

Su fucionamiento consiste en hacer operaciones booleanas (AND [`&&`], OR [`||`] y NOT [`!`]) y con base en el resultado (verdadero [`1`] o falso [`0`]) hacer o no hacer una o más operaciones.

El funcionamiento de las operaciones se resume en la siguiente tabla

| A | B | AND (`A && B`) | OR (`A \|\| B`) | NOT (`!A`) |
| --- | --- | :---: | :---: | :---: |
| 0 | 0 | 0 | 0 | 1 |
| 1 | 0 | 0 | 1 | 0 |
| 0 | 1 | 0 | 1 | 1 |
| 1 | 1 | 1 | 1 | 0 |

### Estructura del `if`

```C++
if (/* condition */) {
    /* code */
}
```

### `if-else`

Si se cumple haz esto, si no, haz esto otro.

```C++
if (/* condition */) {
    /* code */
} else {
    /* code */
}
```

### `if-else-if`

La alternativa a usar if's anidados.

```C++
if (/* condition */) {
    /* code */
} else if (/* condition */){
    /* code */
} else {
    /* code */
}
```

## El condicional `switch-case`

Sirve para validar cuando una variable tiene varias opciones de valores. Optimiza algunos casos para no tener que usar mucho `else-if`.

### Estructura

```C++
switch (expression) {
    case /* constant-expression */:
        /* code */
        break;

    default:
        break;
}
```

> ⚠️ **Cuidado**: Siemore que se termina un caso se debe poner un `break;`
