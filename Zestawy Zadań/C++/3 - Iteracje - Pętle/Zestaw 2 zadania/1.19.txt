// Napisz program, który:
// a.pobiera od użytkownika liczby rzeczywiste dodatnie a, b oraz s(założenie : a < b oraz s>0)
// b.wypisuje w kolejnych wierszach wszystkie liczby z przedziału otwartego od a do b, które są
// całkowitymi wielokrotnościami s

#include <iostream>

using namespace std;

int main()
{
    double a, b, s;
    int i;
    cin >> a >> b >> s;
    for (i = a; i < b; i++)
    {
        if (fmod(i, s) == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}
