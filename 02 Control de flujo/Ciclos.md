# Ciclos

## Ciclo `for`

Los ciclos permite iterar un mismo bloque de codigo sobre una lista o un rango de números. Repitiendo o iterando operaciones.

Es importante tener en cuenta qué tipo de iteracion se va a hacer, `for` permite iterar sobre rangos númericos o sobre una lista. La forma más fácil de hacer las iteraciones es usando una variable iteradora (normalmente nombrada `i`).

### Estructura de un `for`

1. La primera parte es inicializar una variable ejemplo de tipo int que le llamemos `i` inicializando en el valor de 0 esto sirve para listas de numero
2. Condición que evalua en que momento detenerse, limitando el tamaño de `i`, aqui se define cuantas veces se itera
3. Indicar de cuanto a cuanto se incrementa o decrece

```C++
// Con N un numero entero
// inicializacion, condicion, accion final
for (int i = 0; i < N; i++) {
    /* code */
}

// Recorrido a la inversa
for (int i = N - 1; i >= 0; i--) {
    /* code */
}

// Iterando sobre un arreglo
int v[] = {1,2,3,4,5,6,7,8,9,0}
for (auto &&i : v) {
    cout << i << endl;
}
```

### La instruccion `break`

Tiene la capacidad de romper los ciclos, normalmente se usa bajo determinando cierta condición.

```C++
int list_num[] = {1,2,3,4,5,6,7,8,9,10};
int limite = sizeof(list_num) / sizeof(list_num[0]); //sizeof tamaño de la variable, 4 bits por entero

for (int i = 0; i < limite; i++){
    cout<<list_num[i]*9<<endl;
    if(list_num[i]==8){
        break;
    }
}
```

## Ciclo `while` y `do-while`

No tienen un límite numerico, se pueden ejecutar indefinidamente hasta que se cumpla cierta condición que los haga terminar.

### `while`

```C++
while (/* condition */)
{
    /* code */
}
```

### `do-while`

Se hace una primera ejecución antes de preguntar la condición.

```C++
do
{
    /* code */
} while (/* condition */);
```
