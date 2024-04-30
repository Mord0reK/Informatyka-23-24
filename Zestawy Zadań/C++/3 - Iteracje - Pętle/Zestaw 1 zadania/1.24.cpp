// Napisz program, który wyœwietla du¿e litery alfabetu od A do Z i od Z do A, z
// wykorzystaniem pêtli while.

#include <iostream>

using namespace std;

int main() {
    char x = 65, y = 90;
    while (x <= 90)
    {
        cout << x << " ";
        x++;
    }
    cout << endl;
    while (y >= 65)
    {
        cout << y << " ";
        y--;
    }
    return 0;
}