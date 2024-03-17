// Napisz program, kt�ry za pomoc� instrukcji while dla danych warto�ci x zmieniaj�cych si� od 0 do 10
// oblicza warto�� funkcji y = 3x.

#include <iostream>

using namespace std;

int main() {
    int x = 0;
    while (x <= 10)
    {
        cout << 3 * x << " ";
        x++;
    }
    return 0;
}
