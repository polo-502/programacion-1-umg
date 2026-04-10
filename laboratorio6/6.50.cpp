#include <iostream>
using namespace std;

int x = 10; // global

int main()
{
    int x = 5; // local
    cout << x << endl;    // imprime 5
    cout << ::x << endl;  // imprime 10
    return 0;
}
