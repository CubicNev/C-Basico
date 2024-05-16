/**
 * Ciclo while Y do-while
 * Autor: Carlos Nevárez - CubicNev
 * Fecha: 15-Mayo-2024
 *
 * Ejemplo de uso de while, menu principal que pregunta cuando salir.
*/

# include <iostream>

using namespace std;

int main(){
    char respuesta = 'x';
    // Si quisiera hacerlo con for, tendría que poner un límite muy grande o un for infinito
    for(;;) {
        cout << "FOR: Desea terminar?" << endl;
        cin >> respuesta;
        if(respuesta == 'y'){
            cout << "bye bye";
            break;
        }
    }

    // Con while, la condición es lo primero que se pregunta
    while(true) {
        cout << "WHILE: Desea terminar?" << endl;
        cin >> respuesta;
        if(respuesta == 'y'){
            cout << "bye bye";
            break;
        }
    }

    // Con do-while, dispara primero pregunta después
    do {
        cout << "WHILE: Desea terminar?" << endl;
        cin >> respuesta;
        if(respuesta == 'y'){
            cout << "bye bye";
            break;
        }
    } while (true);

    return 0;
}