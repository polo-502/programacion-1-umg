#include <iostream>
using namespace std;

int main() {
    int producto;
    int cantidad;
    double totalVentas = 0.0;

    cout << "Ingrese numero de producto (1-5) y cantidad vendida.\n";
    cout << "Ingrese 0 como numero de producto para terminar.\n";

    cin >> producto;

    while (producto != 0) {
        cin >> cantidad;

        double precio = 0.0;

        switch (producto) {
            case 1:
                precio = 2.98;
                break;
            case 2:
                precio = 4.50;
                break;
            case 3:
                precio = 9.98;
                break;
            case 4:
                precio = 4.49;
                break;
            case 5:
                precio = 6.87;
                break;
            default:
                cout << "Producto invalido.\n";
                precio = 0.0;
        }

        totalVentas += precio * cantidad;

        cin >> producto;  // Leer siguiente producto
    }

    cout << "El total de ventas es: $" << totalVentas << endl;

    return 0;
}
