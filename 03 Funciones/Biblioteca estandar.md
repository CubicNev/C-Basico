# Biblioteca Estandar

No tenemos cadena de texto para manejar mensaje completo, aunque hemos utilizado cout, pero al momento no los hemos utilizado como valores de variables esto es por una razón, es que en C++ no tenemos tipo de string dentro del lenguaje, sino de la biblioteca estándar por eso importante importarlo como una librería.

Algunas de las bibliotecas estándar de C++ se pueden ver en la siguiente tabla:

| Nombre | Utilidad |
| ------ | -------- |
| iostream | Entrada y salida de datos |
| string | Manejo de cadenas de texto |
| cmath | Funciones matemáticas comunes |
| exception | Utilidades para el manejo de errores |
| array | Manejo de arreglos de datos |
| vector | Manejo de vextores de datos |

## La librería `<string>`

Nos permite manejar cadenas de texto. La forma tradicional es con arreglos de carácteres. Se dede incluír la librería `<string>`.

```C++
# include <iostream>
# include <string>

using namespace std;

int main(){
    // Manejo tradicional
    char texto[] = {'H', 'o', 'l', 'a'};
    cout << texto; // Se imprime carácter por carácter

    // Con string
    string texto = "Hola mundo";
    cout << texto;

    return 0;
}
```
