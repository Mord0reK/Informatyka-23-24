#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c, x1, x2, d, d1;
    cin >> a >> b >> c;
    d1 = 4 * a * c;
    if (a > 0)
    {
        d = pow(b, 2) - d1;
        if (d > 0)
        {
            x1 = (-b - sqrt(d)) / 2;
            x2 = (-b + sqrt(d)) / 2;
            cout << fixed << setprecision(2) << x1 << endl << x2 << endl;
        }
        if (d == 0)
        {
            x1 = -b / 2 * a;
            cout << fixed << setprecision(2) << x1 << endl;
        }
        if (d < 0)
        {
            cout << "Ta funkcja nie posiada pierwiastkow rownania kwadratowego" << endl;
        }
    }
}

