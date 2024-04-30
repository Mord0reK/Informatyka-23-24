// Napisz program, który wypisze tabelkę składającą się z trzech kolumn :
// -wartości x(w radianach)
// - sinusa x
// - cosinusa x.
// Wartości x zmieniają się od - 6, 28 do 6, 28 z krokiem 0, 01.
// Kolejne wartości w kolumnach są od siebie oddzielone znakami tabulacji.

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double PI = 3.14159265358979323846;
    double step = 0.01;
    int num_steps = static_cast<int>((2 * PI) / step);

    cout << "x\t\tsin(x)\t\tcos(x)" << endl;

    for (int i = 0; i <= num_steps; ++i) {
        double x = -PI + i * step;
        double sin_x = sin(x);
        double cos_x = cos(x);

        cout << fixed << setprecision(5) << x << "\t";
        cout << fixed << setprecision(5) << sin_x << "\t";
        cout << fixed << setprecision(5) << cos_x << endl;
    }

    return 0;
}
