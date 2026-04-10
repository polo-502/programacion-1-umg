#include <iostream>
using namespace std;

void cuadrado(int lado)
{
    for (int i = 1; i <= lado; i++)
    {
        for (int j = 1; j <= lado; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int lado;

    cout << "Ingrese el lado del cuadrado: ";
    cin >> lado;

    cuadrado(lado);

    return 0;
}
