//Napisz program, który wyświetla na ekranie komputera wartość predefiniowanej stałej π = 3,14… Należy
//przyjąć format prezentowania tej stałej, oznaczanej w języku C++ jako M_PI, z dokładnością pięciu miejsc po
//kropce.

#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Pi wynosi: " << fixed << setprecision(5) << M_PI << endl;
}
