#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double redondearAEntero(double numero)
{
    return floor(numero + 0.5);
}

double redondearADecimas(double numero)
{
    return floor(numero * 10 + 0.5) / 10;
}

double redondearACentesimas(double numero)
{
    return floor(numero * 100 + 0.5) / 100;
}

double redondearAMilesimas(double numero)
{
    return floor(numero * 1000 + 0.5) / 1000;
}

int main()
{
    double numero;

    cout << fixed << setprecision(3);

    cout << "Ingrese un numero (-1 para terminar): ";
    cin >> numero;

    while (numero != -1)
    {
        cout << "\nNumero original:        " << numero << endl;
        cout << "Redondeado a entero:    " << redondearAEntero(numero) << endl;
        cout << "Redondeado a decimas:   " << redondearADecimas(numero) << endl;
        cout << "Redondeado a centesimas:" << redondearACentesimas(numero) << endl;
        cout << "Redondeado a milesimas: " << redondearAMilesimas(numero) << endl;

        cout << "\nIngrese un numero (-1 para terminar): ";
        cin >> numero;
    }

    return 0;
}
