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
        switch (int(signbit(d)))
        {
            case 0:
            {
                x1 = (-b - sqrt(d)) / 2;
                x2 = (-b + sqrt(d)) / 2;
                cout << x1 << endl << x2 << endl;
                break;
            }
            case 1:
            {
                cout << "brak" << endl;
                break;
            }
            default:
            {
                x1 = -b / 2 * a;
                cout << x1 << endl;
            }
        }
    }
}

