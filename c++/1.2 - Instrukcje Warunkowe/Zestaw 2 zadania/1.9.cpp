#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    int rok;
    cin >> rok;
    if (rok % 4 == 0 && rok % 100 != 0 || rok % 400 == 0)
    {
        cout << "tak" << endl;
    }
    else
    {
        cout << "nie" << endl;
    }
}

