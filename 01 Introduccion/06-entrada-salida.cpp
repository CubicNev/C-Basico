/**
 * Entrada-Salida
 * Autor: Carlos Nevárez - CubicNev
 * Fecha: 15-Mayo-2024
 *
 * Ejemplos de como usar cin y cout
*/


# include <iostream>

using namespace std;

int main(){
    /* Uso Básico */
    int age = 0;
    cout << "Introduce tu edad: ";
    cin >> age;
    cout << "Tu edad es: " << age << endl;

    /* Recibiendo más de un dato */
    int n, t;
    cout << "N: T: " << endl;
    cin >> n >> t;
    cout << "N: " << n << " T: " << t;
}