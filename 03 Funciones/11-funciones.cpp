/**
 * Funciones
 * Autor: Carlos Nevárez - CubicNev
 * Fecha: 15-Mayo-2024
 *
 * Forma de hacer funciones en C++
*/

# include <iostream>

using namespace std;

// funcion suma, recibe dos enteros y retorna un entero
int suma(int a, int b) {
    return a + b;
}

// funcion multiplicar, recibe dos enteros y retorna un entero
int multiplicar(int a, int b) {
    return a * b;
}

// Puedes poner valores por defecto, en especial al último argumento, por si se proveen menos argumentos de los esperados.
int restar(int a, int b = 1) {
    return a - b;
}

int main(){

    // Podemos mostrar el resultado directamente
    cout << suma(2,200) << endl;
    // Y podemos usarla tantas veces necesitemos
    cout << suma(1,2) << endl;
    cout << multiplicar(2,200) << endl;
    cout << restar(4) << endl;
    return 0;
}