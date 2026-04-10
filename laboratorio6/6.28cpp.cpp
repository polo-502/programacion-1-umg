#include <iostream>
using namespace std;

bool esPerfecto(int numero)
{
    int suma = 0;

    for (int i = 1; i <= numero / 2; i++)
    {
        if (numero % i == 0)
        {
            suma += i;
        }
    }

    return suma == numero;
}

void imprimirDivisores(int numero)
{
    for (int i = 1; i <= numero / 2; i++)
    {
        if (numero % i == 0)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    cout << "Numeros perfectos entre 1 y 1000:\n\n";

    for (int i = 1; i <= 1000; i++)
    {
        if (esPerfecto(i))
        {
            cout << i << ": ";
            imprimirDivisores(i);
            cout << endl;
        }
    }

    return 0;
}
