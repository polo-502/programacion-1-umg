#include <iostream>
#include <iomanip>
using namespace std;

long factorialVisual(int numero, int nivel)
{
    for (int i = 0; i < nivel; i++)
        cout << "   ";

    cout << "Llamada: factorial(" << numero << ")" << endl;

    if (numero <= 1)
    {
        for (int i = 0; i < nivel; i++)
            cout << "   ";

        cout << "Retorna 1" << endl;
        return 1;
    }
    else
    {
        long resultado = numero * factorialVisual(numero - 1, nivel + 1);

        for (int i = 0; i < nivel; i++)
            cout << "   ";

        cout << "numero = " << numero
             << ", resultado = " << resultado << endl;

        return resultado;
    }
}

int main()
{
    int n;

    cout << "Ingrese un entero positivo: ";
    cin >> n;

    if (n < 0)
    {
        cout << "No se permite factorial de numeros negativos." << endl;
        return 1;
    }

    cout << "\nVisualizacion de la recursividad:\n";
    long resultadoFinal = factorialVisual(n, 0);

    cout << "\nFactorial de " << n << " = " << resultadoFinal << endl;

    return 0;
}
