//Napisz program, który:
//a.Pobiera d³ugoœæ boków prostok¹ta a, b
//b.Oblicza i wypisuje obwód tego prostok¹ta
//c.Oblicza i wypisuje pole tego prostok¹ta

#define _USE_MATH_DEFINES
#include <iostream>

using namespace std;

int main()
{
    float a, b;
    cin >> a >> b;
    cout << 2 * a + 2 * b << endl;
    cout << a * b << endl;
    return 0;
}
