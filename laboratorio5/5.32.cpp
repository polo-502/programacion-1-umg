
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    const double objetivo = 2500.0;   // 2500 millones
    const double inicio = 1000.0;     // 1000 millones

    cout << fixed << setprecision(2);

    for (int tasa = 2; tasa <= 5; tasa++) {

        double usuarios = inicio;
        int meses = 0;

        while (usuarios < objetivo) {
            usuarios = usuarios * (1 + tasa / 100.0);
            meses++;
        }

        cout << "Con crecimiento mensual del "
             << tasa << "%:" << endl;
        cout << "Meses necesarios: " << meses << endl;
        cout << "Usuarios alcanzados: "
             << usuarios << " millones" << endl;
        cout << "-----------------------------" << endl;
    }

    return 0;
}
