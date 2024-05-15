/**
 * Operadores
 * Autor: Carlos Nevárez - CubicNev
 * Fecha: 15-Mayo-2024
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

    /* Aritmeticos */
    // Suma
    cout << "a + b = " << a + b << endl;
    cout << "c = " << c << endl;
    // Multiplicación
    c = a * b;
    cout << "a * b = " << c << endl;
    // otros
    int resta = a - b;
    int division = a / b;
    int modulo = a % b;
    cout << "resta" << resta << endl;
    cout << "division" << division << endl;
    cout << "modulo" << modulo << endl;

    /* Comparadores */
    d = a < b;
    cout << "a < b ? R: " << d << endl; // 1 (interpretación de C++ de true)
    bool igual = (a == b);
    bool diferente = (a != b);
    bool mayorQue = (a > b);
    bool menorQue = (a < b);
    bool mayorIgual = (a >= b);
    bool menorIgual = (a <= b);
    cout << "a >= b = " << mayorIgual << endl;
    cout << "a <= b " << menorIgual << endl;

    /* Lógicos */
    bool andLogico = (igual && mayorQue);
    bool orLogico = (diferente || menorQue);
    bool notLogico = !igual;
    cout << "&& = " << andLogico << endl;
    cout << "|| = " << orLogico << endl;
    cout << "! =  " << notLogico << endl;

    // Operadores bit a bit
    int x = 5; // 0000 0101
    int y = 3; // 0000 0011
    int andBitwise = x & y; // 0000 0001 (AND)
    int orBitwise = x | y; // 0000 0111 (OR)
    int xorBitwise = x ^ y; // 0000 0110 (XOR)
    int complementoBitwise = ~x; // 1111 1010 (NOT)
    cout << "x & y = " << andBitwise << endl;
    cout << "x | y = " << orBitwise << endl;
    cout << "x ^ y =  " << xorBitwise << endl;
    cout << "~x =  " << complementoBitwise << endl;

    // Operadores de desplazamiento
    int desplazamientoIzquierda = a << 2; // a * 2^2 // 0000 1000
    int desplazamientoDerecha = a >> 1; // a / 2^1 // 0000 0001
    cout << "a << 2 = " << desplazamientoIzquierda << endl;
    cout << "a >> 1 = " << desplazamientoDerecha << endl;

    /* Asignacion */
    int w = 15;
    w += a; // w = w + a;
    w -= b; // w = w - b;
    w *= a; // w = w * a;
    w /= b; // w = w / b;
    w %= a; // w = w % a;
    w++; // w = w + 1
    w--; // w = w - 1

    /* sizeof() */
    // Obtener el tamaño en bytes de un dato
    cout << "a: " << sizeof(a) << endl;
    // Obtener el tamaño de un array (lista)
    int edades[] = {24, 40, 17};
    // Tomar el tamaño total de la lista y dividirlo entre lo que mide cada elemento
    /*
    Ejemplo:
        3 elementos = 12 bytes
        (Cadda elemento mide 4 bytes)
        12 bytes / 4 bytes = 3 elementos
    */
    cout << "edades[]: " << sizeof(edades) / sizeof(edades[0]) << endl;
    cout << "edades[]: " << sizeof(edades) / sizeof(int) << endl;
    cout << "---- Int ---" << endl;
    cout << "long long int: " << sizeof(long long int) << endl;
    cout << "long int:" << sizeof(long int) << endl;
    cout << "int: " << sizeof(int) << endl;
    cout << "--- Double ---" << endl;
    cout << "long double" << sizeof(long double) << endl;
    cout << "double" << sizeof(double) << endl;
}