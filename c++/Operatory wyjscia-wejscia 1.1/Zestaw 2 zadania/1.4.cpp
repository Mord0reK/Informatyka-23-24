//Napisz program., który:
//a. Pobiera dwie liczby całkowite u i v
//b. Oblicza sumę i różnicę tych liczb i zapamiętuje w zmiennych sum i roz
//c. W kolejnym wierszu wyświetla tekst „u+v = ” oraz sumę
//d. W kolejnym wierszu wyświetla „u-v = ”oraz różnicę
//e. W kolejnym wierszu czeka na wprowadzenie dowolnego znaku
//f. Zwraca do systemu liczbę -1

#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    int x, u, v, sum, roznica;
    cin >> u >> v;
    sum = u + v;
    roznica = u - v;
    cout << "u + v = " << sum << endl;
    cout << "u - v = " << roznica << endl;
    cin >> x;
    return -1;
}

