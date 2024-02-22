#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    float a, b, zerowe = 0, pauza;
    cin >> a >> b;
    if (a)
    {
        zerowe = -b / a;
        cout << "Znaleziono miejsce zerowe. Wspolrzedne: (" << zerowe << ",0)" << endl;
        cin >> pauza;
    }
}

