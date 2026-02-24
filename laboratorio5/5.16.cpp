#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    const int principal = 100000;   // $1000.00 en centavos
    const int tasa = 5;             // 5% anual
    const int anios = 10;

    cout << "Anio\tMonto en deposito\n";

    for (int year = 1; year <= anios; year++) {

        // Fórmula: A = P(1 + r)^n
        // Como trabajamos con enteros:
        // multiplicamos por 100 para manejar porcentaje
        long long monto = principal;

        for (int i = 1; i <= year; i++) {
            monto = monto * (100 + tasa) / 100;
        }

        // Separar dólares y centavos
        long long dolares = monto / 100;
        long long centavos = monto % 100;

        cout << year << "\t" << dolares << "."
             << setw(2) << setfill('0') << centavos << endl;
    }

    return 0;
}
