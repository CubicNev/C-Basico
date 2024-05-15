/**
 * Condiconal if
 * Autor: Carlos Nevárez - CubicNev
 * Fecha: 15-Mayo-2024
 *
 * Usando la estructura if
*/

# include <iostream>

using namespace std;

int main(){
    //OPERACIONES LÓGICAS
    bool result = false && true; //Operacdor AND &&
    bool result2 = true || true; //Operador OR ||
    bool result3 =! false; //Operador NOT != o depende del caso se puede usar =!
    cout << result << ", " << result2 << ", " << result3 << "\n\n\n\n";

    /* Validar que un usuario sea mayor de 18 años, para ver si puede votar */
    int edad = 0;
    cout << "Edad: ";
    cin >> edad;

    cout << "Validacion 1 (if\'s anidados):" << endl;
    // Usando if anidados
    if (edad >= 18) {
        // Otra condicion que valida una edad maxima
        if(edad <= 40) {
            cout << "Puedes votar" << endl;
        } else {
            cout << "No puedes votar" << endl;
        }
    } else {
        cout << "No puedes votar" << endl;
    }

    cout << "Validacion 2 (else-if):" << endl;
    // Usando else-if (Más organizado)
    if (edad >= 18) {
        cout << "Puedes votar" << endl;
    } else if (edad > 40){
        cout << "No puedes votar" << endl;
    } else {
        cout << "Puedes votar" << endl;
    }

    // Extra: Usando AND
    cout << "Validacion 3 (AND):" << endl;
    if(edad >= 18 && edad <= 40) {
        cout << "Puedes votar" << endl;
    } else {
        cout << "No puedes votar" << endl;
    }
    return 0;
}
