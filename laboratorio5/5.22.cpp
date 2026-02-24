#include <iostream>
using namespace std;

int main() {

    int x = 6, y = 8;
    int a = 3, b = 3, g = 5;
    int i = 3;
    double f = 7.0;

    cout << "a) "
         << ( !(x < 5) && !(y > 7) )
         << " == "
         << ( (x >= 5) && (y <= 7) )
         << endl;

    cout << "b) "
         << ( !(a == b) || !(g != 5) )
         << " == "
         << ( (a != b) || (g == 5) )
         << endl;

    cout << "c) "
         << ( !((x <= 8) && (y > 4)) )
         << " == "
         << ( (x > 8) || (y <= 4) )
         << endl;

    cout << "d) "
         << ( !((i > 4) || (f <= 6)) )
         << " == "
         << ( (i <= 4) && (f > 6) )
         << endl;

    return 0;
}
