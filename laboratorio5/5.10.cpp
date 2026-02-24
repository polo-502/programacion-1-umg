#include <iostream>
using namespace std;

int main() {

    cout << "n\tFactorial(n)" << endl;
    cout << "--------------------" << endl;

    for (int n = 1; n <= 5; n++) {
        unsigned long long factorial = 1;

        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }

        cout << n << "\t" << factorial << endl;
    }

    return 0;
}
