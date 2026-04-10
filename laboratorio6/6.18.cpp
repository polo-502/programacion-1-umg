
#include <iostream>
using namespace std;

int enteroPotencia(int base, int exponente)
{
    int resultado = 1;

    for (int i = 1; i <= exponente; i++)
    {
        resultado *= base;
    }

    return resultado;
}

int main()
{
    int base, exponente;

    cout << "Ingrese la base: ";
    cin >> base;

    cout << "Ingrese el exponente: ";
    cin >> exponente;

    cout << base << " elevado a " << exponente
         << " es: " << enteroPotencia(base, exponente) << endl;

    return 0;
}
