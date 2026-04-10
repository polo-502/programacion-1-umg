#include <iostream>
using namespace std;

int potencia(int base, int exponente)
{
    if (exponente == 1)
        return base;
    else
        return base * potencia(base, exponente - 1);
}

int main()
{
    int base, exponente;

    cout << "Ingrese la base: ";
    cin >> base;

    cout << "Ingrese el exponente: ";
    cin >> exponente;

    cout << base << "^" << exponente << " = "
         << potencia(base, exponente) << endl;

    return 0;
}
