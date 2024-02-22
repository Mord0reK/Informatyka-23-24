#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    float r, pi, pole, promien;
    cout << "Podaj promien: " << endl; cin >> r;
    pi = 4 * M_PI;
    promien = r * r * r;
    pole = (pi * promien) / 3;
    cout << "Pole wynosi: " << fixed << setprecision(2) << pole << endl;
}

