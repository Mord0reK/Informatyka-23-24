//Napisz program, który:
//a. pobiera od użytkownika liczbę całkowitą L
//b. wypisuje wszystkie takie liczby X z przedziału od – 100 do 100 (włącznie), które spełniają
//równanie |X|<L2 oraz X jest podzielne przez 4

#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int L, x, wynik;
    cin >> L;
    for (x = -100; x <= 100; x++)
    {
        if (abs(x) < pow(L, 2) && x % 4 == 0)
        {
            cout << x << endl;
        }
    }
}

