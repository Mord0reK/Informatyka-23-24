#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c, ary;
    cin >> a >> b >> c;
    ary = (a + b + c) / 3;
    if (ary < 4)
    {
        cout << "Niska srednia" << endl;
    }
    else
    {
        cout << "Niezla srednia" << endl;
    }
}

