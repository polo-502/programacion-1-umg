#include <iostream>
using namespace std;

void torresHanoi(int n, int origen, int destino, int temporal)
{
    if (n == 1)
    {
        cout << origen << " -> " << destino << endl;
    }
    else
    {
        torresHanoi(n - 1, origen, temporal, destino);
        cout << origen << " -> " << destino << endl;
        torresHanoi(n - 1, temporal, destino, origen);
    }
}

int main()
{
    int discos;

    cout << "Ingrese el numero de discos: ";
    cin >> discos;

    if (discos < 1)
    {
        cout << "El numero de discos debe ser mayor o igual a 1." << endl;
        return 1;
    }

    cout << "Movimientos:\n";
    torresHanoi(discos, 1, 3, 2);

    return 0;
}
