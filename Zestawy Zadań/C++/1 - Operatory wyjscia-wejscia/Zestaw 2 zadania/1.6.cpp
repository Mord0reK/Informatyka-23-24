//Napisz program, który potrafi odszukać miejsce zerowe dowolnej prostej zadanej w postaci
//kierunkowej y= ax + b (przy założeniu, że a≠ 0). Program :
//a. Pobiera od użytkownika współczynniki a i b
//b. W kolejnym wierszu wypisuje znalezione miejsce zerowe
//c. W kolejnym wierszu wykonuje pauzę systemową

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

