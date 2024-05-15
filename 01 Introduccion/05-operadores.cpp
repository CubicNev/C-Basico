/**
 * Operadores
 * Autor: Carlos Nevárez - CubicNev
 * Fecha: 13-Mayo-2024
 *
 * Se usan algunos de los operadores de C++
*/

#include <iostream>

using namespace std;

int main() {
    int a = 2;
    int b = 3;
    int c = a + b;
    bool d;

    // Suma
    cout << a + b << endl;
    cout << c << endl;

    // Multiplicación
    c = a * b;
    cout << c << endl;

    // Comparaciones
    d = a < b;
    cout << d << endl; // 1 (interpretación de C++ de true)

    // Asignacion
    a += 1; // simplificacion de a = a + 1;

    // Operadores especiales
    // Obtener el tamaño en bytes de un dato
    cout << sizeof(a);

    // obtener el tamaño de un array (lista)
    int edades[] = {24, 40, 17};
    // Tomar el tamaño total de la lista y dividirlo entre lo que mide cada elemento
    /* Ejemplo:
    3 elementos = 12 bytes
    Cadda elemento mide 4 bytes
    12 bytes / 4 bytes = 3 elementos
    */
    cout << sizeof(edades) / sizeof(edades[0]) << endl;
    cout << "Int:" << endl;
    cout << sizeof(long long int) << endl;
    cout << sizeof(long int) << endl;
    cout << sizeof(int) << endl;
    cout << "Double:" << endl;
    cout << sizeof(long double) << endl;
    cout << sizeof(double) << endl;
}