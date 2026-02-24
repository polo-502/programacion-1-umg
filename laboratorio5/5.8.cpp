#include <iostream>
using namespace std;

int main() {
    int cantidad;

    cout << "Ingrese la cantidad de numeros: ";
    cin >> cantidad;

    if (cantidad <= 0) {
        cout << "Cantidad invalida." << endl;
        return 0;
    }

    int numero;
    cout << "Ingrese los numeros: ";
    cin >> numero;           // Leer el primer número
    int menor = numero;      // Suponer que el primero es el menor

    for (int i = 1; i < cantidad; i++) {
        cin >> numero;
        if (numero < menor) {
            menor = numero;
        }
    }

    cout << "El numero menor es: " << menor << endl;

    return 0;
}
