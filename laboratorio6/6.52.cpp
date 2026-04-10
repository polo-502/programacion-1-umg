#include <iostream>
using namespace std;

template <class T>
T maximo(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    cout << "Mayor entre 3 y 8: " << maximo(3, 8) << endl;
    cout << "Mayor entre 'z' y 'p': " << maximo('z', 'p') << endl;
    cout << "Mayor entre 4.5 y 2.1: " << maximo(4.5, 2.1) << endl;

    return 0;
}
