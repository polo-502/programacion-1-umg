int cociente = a / b;

int residuo = a % b;


#include <iostream>
using namespace std;

void separarDigitos(int numero)
{
    int d1, d2, d3, d4, d5;

    d1 = numero / 10000;
    d2 = (numero % 10000) / 1000;
    d3 = (numero % 1000) / 100;
    d4 = (numero % 100) / 10;
    d5 = numero % 10;

    if (d1 != 0)
        cout << d1 << "  ";
    if (d1 != 0 || d2 != 0)
        cout << d2 << "  ";
    if (d1 != 0 || d2 != 0 || d3 != 0)
        cout << d3 << "  ";
    if (d1 != 0 || d2 != 0 || d3 != 0 || d4 != 0)
        cout << d4 << "  ";

    cout << d5 << endl;
}

int main()
{
    int numero;

    cout << "Ingrese un entero entre 1 y 32767: ";
    cin >> numero;

    if (numero < 1 || numero > 32767)
    {
        cout << "Numero fuera de rango." << endl;
    }
    else
    {
        separarDigitos(numero);
    }

    return 0;
}
