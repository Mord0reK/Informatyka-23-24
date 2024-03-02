#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c, x;
    cin >> a >> b >> c;
    x = (c - b) / a;
    cout << fixed << setprecision(2) << "A wynosi: " << a << endl << "B wynosi: " << b << endl << "C wynosi: " << c << endl << "X:" << x << endl;
}

