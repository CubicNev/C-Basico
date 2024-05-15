/**
 * Switch-Case
 * Autor: Carlos Nevárez - CubicNev
 * Fecha: 15-Mayo-2024
 *
 * Usando la estructura switch con el ejemplo de un sistema de línea telefónica
*/

# include <iostream>

using namespace std;

int main(){
    int option = 0;

    cout << "Introduce una opción: ";
    cin >> option;

    switch (option) {
        case 1:
            cout << "Opcion 1";
            break;
        case 2:
            cout << "Opcion 2";
            break;
        default:
            cout << "El valor ingresado no existe";
            break;
    }

    return 0;
}