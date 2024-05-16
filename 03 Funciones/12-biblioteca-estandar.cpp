/**
 * Bibliotecas estándar
 * Autor: Carlos Nevárez - CubicNev
 * Fecha: 15-Mayo-2024
 *
 * Se usa la biblioteca <string>
*/

# include <iostream>
# include <string>

using namespace std;

int main(){
    // Manejo tradicional
    char old_texto[] = {'H', 'o', 'l', 'a'};
    cout << old_texto; // Se imprime carácter por carácter

    // Con string
    string texto = "Hola mundo";
    cout << texto;

    /* Funcionalidades de string */
    // tamaño
    cout << "Size: " << texto.size();
    // conversión
    texto = "10";
    cout << stoi(texto) + 1; // string to int
    texto = "10.5";
    cout << stof(texto) + 1.5; // string to float

    return 0;
}