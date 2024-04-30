#include <iostream>
#include <iomanip>
#include <math.h>

// W tym programie funkcja setw z biblioteki iomanip jest uzywana tylko 
// do tego zeby ladnie wyswietlic dane, zalecane jest jej usuniecie

using namespace std;

int main()
{
    float x, y;
    for (float x = 0; x <= 5.0; x = x + 0.5)
    {
        y = pow(x, 2) + 1;
        cout << "x = " << setw(4) << x << "   " << "y = " << y << endl;
    }
    return 0;
}
