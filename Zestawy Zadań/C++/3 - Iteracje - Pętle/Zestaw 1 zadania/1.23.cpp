// Napisz program, który wyświetla duże litery alfabetu od A do Z i od Z do A, z
// wykorzystaniem pętli do .. while.

#include <iostream>

using namespace std;

int main() {
    char x = 65, y = 90;
    do
    {
        cout << x << " ";
        x++;
    } while (x <= 90);
    cout << endl;
    do
    {
        cout << y << " ";
        y--;
    } while (y >= 65);
    return 0;
}
