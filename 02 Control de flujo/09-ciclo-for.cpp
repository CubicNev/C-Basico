/**
 * Ciclo for
 * Autor: Carlos Nevárez - CubicNev
 * Fecha: 15-Mayo-2024
 *
 * Ejemplo de uso de for
*/

# include <iostream>

using namespace std;

int main(){
    int limite;

    cout << "Limite: ";
    cin >> limite;

    for (int i = 0; i < limite; i++) {
        cout << i << endl;
    }

    // Recorriendo una lista
    int lista[] = {100, 200, 300};
    limite = sizeof(lista)/sizeof(int);
    for(int j = 0; j < limite; j++) {
        cout << lista[j] << endl;
    }

    // Rompiendo el ciclo con break
    for(int k = 0; k < limite; k++) {
        cout << lista[k] << endl;
        if (lista[k] == 200)
            break;
    }

    // Reto: Solo mostrar números pares utilizando un condicional
    cout << "\n Hasta que numero quieres imprimir pares: ";
    cin >> limite;

    for (int p = 2; p <= limite; p++) {
        if(p%2 == 0) {
            cout << p << endl;
        }
    }

    return 0;
}