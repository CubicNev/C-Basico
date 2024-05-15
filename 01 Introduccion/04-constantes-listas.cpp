/**
 * Constantes y Listas(Arreglos)
 * Autor: Carlos Nevárez - CubicNev
 * Fecha: 15-Mayo-2024
 *
 * Se muestra la creación de variables
*/

#include <iostream>

using namespace std;

int main() {
    int edad = 0;
    edad = 18;

    // Contantes
    const char letra = 'A';
    cout << "Esta letra es constante: " << letra << endl;

    // Listas
    int lista_edades[] = {18,24,16};
    lista_edades[1] = 26;

    // Imprimiendo
    cout << edad << endl;
    cout << lista_edades[1];
}