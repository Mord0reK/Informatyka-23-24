// Napisz program, który:
// a.pobiera od użytkownika liczbę całkowitą dodatnią n
// b.pobiera n liczb całkowitych
// c.wypisuje w kolejnych wierszach sumę oraz iloczyn liczb pobranych w punkcie b

#include <iostream>

using namespace std;

int main()
{
    double n, i, sum = 0, liczba, iloczyn = 1;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> liczba;
        sum += liczba;
        iloczyn *= liczba;
    }
    cout << sum << endl;
    cout << iloczyn << endl;
    return 0;
}
