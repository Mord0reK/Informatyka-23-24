//Napisz program, który:
//a. Wypisuje tekst „x = ”
//b. W tym samym wierszu pobiera liczbę rzeczywistą (zmiennoprzecinkową ) x
//c. W kolejnym wierszu wypisuje tekst „y = ”
//d.W tym samym wierszu pobiera liczbę rzeczywistą y
//e. W kolejnym wierszu wypisuje tekst „x/y = ”
//f. W tym samym wierszu wypisuje wynik dzielenia x/y


#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    float x, y;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    cout << "x/y = " << x / y << endl;
}

