// Napisz program, który za pomoc¹ instrukcji while dla danych wartoœci x zmieniaj¹cych siê od 0 do 10
// oblicza wartoœæ funkcji y = 3x.

#include <iostream>

using namespace std;

int main() {
    int x = 0;
    do 
    {
        cout << 3 * x << " ";
        x++;
    } while (x <= 10);
    return 0;
}
