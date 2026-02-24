
#include <iostream>
using namespace std;

int main() {
    const int filas = 10;

    // Patrón 1: Triángulo creciente (izquierda)
    cout << "Patron 1\n";
    for (int i = 1; i <= filas; i++) {
        for (int j = 1; j <= i; j++) {
            cout << '*';
        }
        cout << endl;
    }

    cout << endl;

    // Patrón 2: Triángulo decreciente (izquierda)
    cout << "Patron 2\n";
    for (int i = filas; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << '*';
        }
        cout << endl;
    }

    cout << endl;

    // Patrón 3: Triángulo creciente (derecha)
    cout << "Patron 3\n";
    for (int i = 1; i <= filas; i++) {
        for (int s = 1; s <= filas - i; s++) {
            cout << ' ';
        }
        for (int j = 1; j <= i; j++) {
            cout << '*';
        }
        cout << endl;
    }

    cout << endl;

    // Patrón 4: Triángulo decreciente (derecha)
    cout << "Patron 4\n";
    for (int i = filas; i >= 1; i--) {
        for (int s = 1; s <= filas - i; s++) {
            cout << ' ';
        }
        for (int j = 1; j <= i; j++) {
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}
