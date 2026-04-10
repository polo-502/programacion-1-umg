#include <iostream>
using namespace std;

bool multiple(int a, int b)
{
    if (b % a == 0)
        return true;
    else
        return false;
}

int main()
{
    int num1, num2;

    cout << "Ingrese dos enteros: ";
    cin >> num1 >> num2;

    if (multiple(num1, num2))
        cout << num2 << " es multiplo de " << num1 << endl;
    else
        cout << num2 << " no es multiplo de " << num1 << endl;

    return 0;
}
